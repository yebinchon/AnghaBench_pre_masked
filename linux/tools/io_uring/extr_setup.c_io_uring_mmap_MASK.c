
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct io_uring_sqe {int dummy; } ;
struct io_uring_sq {size_t ring_sz; void* khead; void* sqes; void* array; void* kdropped; void* kflags; void* kring_entries; void* kring_mask; void* ktail; } ;
struct TYPE_4__ {size_t cqes; int head; int tail; int ring_mask; int ring_entries; int overflow; } ;
struct TYPE_3__ {size_t array; int head; int tail; int ring_mask; int ring_entries; int flags; int dropped; } ;
struct io_uring_params {int sq_entries; int cq_entries; TYPE_2__ cq_off; TYPE_1__ sq_off; } ;
struct io_uring_cqe {int dummy; } ;
struct io_uring_cq {size_t ring_sz; void* cqes; void* koverflow; void* kring_entries; void* kring_mask; void* ktail; void* khead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ,size_t,int,int,int,int ) ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_9, struct io_uring_params *VAR_10,
    struct io_uring_sq *VAR_11, struct io_uring_cq *VAR_12)
{
 size_t VAR_13;
 void *VAR_14;
 int VAR_15;

 VAR_11->ring_sz = VAR_10->sq_off.array + VAR_10->sq_entries * sizeof(unsigned);
 VAR_14 = FUNC_0(0, VAR_11->ring_sz, VAR_6 | VAR_7,
   VAR_5 | VAR_4, VAR_9, VAR_2);
 if (VAR_14 == VAR_3)
  return -VAR_8;
 VAR_11->khead = VAR_14 + VAR_10->sq_off.head;
 VAR_11->ktail = VAR_14 + VAR_10->sq_off.tail;
 VAR_11->kring_mask = VAR_14 + VAR_10->sq_off.ring_mask;
 VAR_11->kring_entries = VAR_14 + VAR_10->sq_off.ring_entries;
 VAR_11->kflags = VAR_14 + VAR_10->sq_off.flags;
 VAR_11->kdropped = VAR_14 + VAR_10->sq_off.dropped;
 VAR_11->array = VAR_14 + VAR_10->sq_off.array;

 VAR_13 = VAR_10->sq_entries * sizeof(struct io_uring_sqe);
 VAR_11->sqes = FUNC_0(0, VAR_13, VAR_6 | VAR_7,
    VAR_5 | VAR_4, VAR_9,
    VAR_1);
 if (VAR_11->sqes == VAR_3) {
  VAR_15 = -VAR_8;
err:
  FUNC_1(VAR_11->khead, VAR_11->ring_sz);
  return VAR_15;
 }

 VAR_12->ring_sz = VAR_10->cq_off.cqes + VAR_10->cq_entries * sizeof(struct io_uring_cqe);
 VAR_14 = FUNC_0(0, VAR_12->ring_sz, VAR_6 | VAR_7,
   VAR_5 | VAR_4, VAR_9, VAR_0);
 if (VAR_14 == VAR_3) {
  VAR_15 = -VAR_8;
  FUNC_1(VAR_11->sqes, VAR_10->sq_entries * sizeof(struct io_uring_sqe));
  goto err;
 }
 VAR_12->khead = VAR_14 + VAR_10->cq_off.head;
 VAR_12->ktail = VAR_14 + VAR_10->cq_off.tail;
 VAR_12->kring_mask = VAR_14 + VAR_10->cq_off.ring_mask;
 VAR_12->kring_entries = VAR_14 + VAR_10->cq_off.ring_entries;
 VAR_12->koverflow = VAR_14 + VAR_10->cq_off.overflow;
 VAR_12->cqes = VAR_14 + VAR_10->cq_off.cqes;
 return 0;
}
