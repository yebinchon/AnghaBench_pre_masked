
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submitter {int nr_files; size_t cur_file; TYPE_1__* iovecs; int rand; struct file* files; struct io_uring_sqe* sqes; } ;
struct io_uring_sqe {unsigned long addr; long len; unsigned int buf_index; unsigned long off; unsigned long user_data; scalar_t__ ioprio; int opcode; int fd; scalar_t__ flags; } ;
struct file {scalar_t__ pending_ios; int max_blocks; int real_fd; int fixed_fd; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct submitter*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,long*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_2(struct submitter *VAR_8, unsigned VAR_9)
{
 struct io_uring_sqe *VAR_10 = &VAR_8->sqes[VAR_9];
 unsigned long VAR_11;
 struct file *VAR_12;
 long VAR_13;

 if (VAR_5) {
  VAR_10->opcode = VAR_1;
  return;
 }

 if (VAR_8->nr_files == 1) {
  VAR_12 = &VAR_8->files[0];
 } else {
  VAR_12 = &VAR_8->files[VAR_8->cur_file];
  if (VAR_12->pending_ios >= FUNC_0(VAR_8)) {
   VAR_8->cur_file++;
   if (VAR_8->cur_file == VAR_8->nr_files)
    VAR_8->cur_file = 0;
   VAR_12 = &VAR_8->files[VAR_8->cur_file];
  }
 }
 VAR_12->pending_ios++;

 FUNC_1(&VAR_8->rand, &VAR_13);
 VAR_11 = (VAR_13 % (VAR_12->max_blocks - 1)) * VAR_0;

 if (VAR_7) {
  VAR_10->flags = VAR_4;
  VAR_10->fd = VAR_12->fixed_fd;
 } else {
  VAR_10->flags = 0;
  VAR_10->fd = VAR_12->real_fd;
 }
 if (VAR_6) {
  VAR_10->opcode = VAR_3;
  VAR_10->addr = (unsigned long) VAR_8->iovecs[VAR_9].iov_base;
  VAR_10->len = VAR_0;
  VAR_10->buf_index = VAR_9;
 } else {
  VAR_10->opcode = VAR_2;
  VAR_10->addr = (unsigned long) &VAR_8->iovecs[VAR_9];
  VAR_10->len = 1;
  VAR_10->buf_index = 0;
 }
 VAR_10->ioprio = 0;
 VAR_10->off = VAR_11;
 VAR_10->user_data = (unsigned long) VAR_12;
}
