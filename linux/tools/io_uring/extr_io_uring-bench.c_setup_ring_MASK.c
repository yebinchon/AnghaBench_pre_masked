
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct io_cq_ring {int * ring_mask; void* cqes; void* ring_entries; void* tail; void* head; } ;
struct io_sq_ring {int * ring_mask; void* array; void* flags; void* ring_entries; void* tail; void* head; } ;
struct submitter {int ring_fd; void* sqes; struct io_cq_ring cq_ring; struct io_sq_ring sq_ring; } ;
struct io_uring_sqe {int dummy; } ;
struct TYPE_4__ {int cqes; int head; int tail; int ring_mask; int ring_entries; } ;
struct TYPE_3__ {int array; int head; int tail; int ring_mask; int ring_entries; int flags; } ;
struct io_uring_params {int sq_thread_cpu; int sq_entries; int cq_entries; TYPE_2__ cq_off; TYPE_1__ sq_off; int flags; } ;
struct io_uring_cqe {int dummy; } ;
typedef int p ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct submitter*) ;
 int FUNC_1 (struct submitter*) ;
 int FUNC_2 (int ,struct io_uring_params*) ;
 int FUNC_3 (struct io_uring_params*,int ,int) ;
 void* FUNC_4 (int ,int,int,int,int,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (char*,void*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int FUNC_7(struct submitter *VAR_19)
{
 struct io_sq_ring *VAR_20 = &VAR_19->sq_ring;
 struct io_cq_ring *VAR_21 = &VAR_19->cq_ring;
 struct io_uring_params VAR_22;
 int VAR_23, VAR_24;
 void *VAR_25;

 FUNC_3(&VAR_22, 0, sizeof(VAR_22));

 if (VAR_14 && !VAR_12)
  VAR_22.flags |= VAR_4;
 if (VAR_18) {
  VAR_22.flags |= VAR_5;
  if (VAR_17 != -1) {
   VAR_22.flags |= VAR_6;
   VAR_22.sq_thread_cpu = VAR_17;
  }
 }

 VAR_24 = FUNC_2(VAR_0, &VAR_22);
 if (VAR_24 < 0) {
  FUNC_5("io_uring_setup");
  return 1;
 }
 VAR_19->ring_fd = VAR_24;

 if (VAR_13) {
  VAR_23 = FUNC_0(VAR_19);
  if (VAR_23 < 0) {
   FUNC_5("io_uring_register_buffers");
   return 1;
  }
 }

 if (VAR_15) {
  VAR_23 = FUNC_1(VAR_19);
  if (VAR_23 < 0) {
   FUNC_5("io_uring_register_files");
   return 1;
  }
 }

 VAR_25 = FUNC_4(0, VAR_22.sq_off.array + VAR_22.sq_entries * sizeof(__u32),
   VAR_9 | VAR_10, VAR_8 | VAR_7, VAR_24,
   VAR_3);
 FUNC_6("sq_ring ptr = 0x%p\n", VAR_25);
 VAR_20->head = VAR_25 + VAR_22.sq_off.head;
 VAR_20->tail = VAR_25 + VAR_22.sq_off.tail;
 VAR_20->ring_mask = VAR_25 + VAR_22.sq_off.ring_mask;
 VAR_20->ring_entries = VAR_25 + VAR_22.sq_off.ring_entries;
 VAR_20->flags = VAR_25 + VAR_22.sq_off.flags;
 VAR_20->array = VAR_25 + VAR_22.sq_off.array;
 VAR_16 = *VAR_20->ring_mask;

 VAR_19->sqes = FUNC_4(0, VAR_22.sq_entries * sizeof(struct io_uring_sqe),
   VAR_9 | VAR_10, VAR_8 | VAR_7, VAR_24,
   VAR_2);
 FUNC_6("sqes ptr    = 0x%p\n", VAR_19->sqes);

 VAR_25 = FUNC_4(0, VAR_22.cq_off.cqes + VAR_22.cq_entries * sizeof(struct io_uring_cqe),
   VAR_9 | VAR_10, VAR_8 | VAR_7, VAR_24,
   VAR_1);
 FUNC_6("cq_ring ptr = 0x%p\n", VAR_25);
 VAR_21->head = VAR_25 + VAR_22.cq_off.head;
 VAR_21->tail = VAR_25 + VAR_22.cq_off.tail;
 VAR_21->ring_mask = VAR_25 + VAR_22.cq_off.ring_mask;
 VAR_21->ring_entries = VAR_25 + VAR_22.cq_off.ring_entries;
 VAR_21->cqes = VAR_25 + VAR_22.cq_off.cqes;
 VAR_11 = *VAR_21->ring_mask;
 return 0;
}
