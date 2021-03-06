
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_sqe {int dummy; } ;
struct io_uring {int dummy; } ;
struct TYPE_2__ {void* iov_len; struct io_data* iov_base; } ;
struct io_data {int read; TYPE_1__ iov; void* first_len; void* first_offset; void* offset; } ;
typedef void* off_t ;


 int free (struct io_data*) ;
 int infd ;
 struct io_uring_sqe* io_uring_get_sqe (struct io_uring*) ;
 int io_uring_prep_readv (struct io_uring_sqe*,int ,TYPE_1__*,int,void*) ;
 int io_uring_sqe_set_data (struct io_uring_sqe*,struct io_data*) ;
 struct io_data* malloc (void*) ;

__attribute__((used)) static int queue_read(struct io_uring *ring, off_t size, off_t offset)
{
 struct io_uring_sqe *sqe;
 struct io_data *data;

 data = malloc(size + sizeof(*data));
 if (!data)
  return 1;

 sqe = io_uring_get_sqe(ring);
 if (!sqe) {
  free(data);
  return 1;
 }

 data->read = 1;
 data->offset = data->first_offset = offset;

 data->iov.iov_base = data + 1;
 data->iov.iov_len = size;
 data->first_len = size;

 io_uring_prep_readv(sqe, infd, &data->iov, 1, offset);
 io_uring_sqe_set_data(sqe, data);
 return 0;
}
