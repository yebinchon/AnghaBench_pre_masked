
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int dummy; } ;
struct io_uring_sq {int sqe_tail; unsigned int sqe_head; unsigned int* kring_entries; size_t* kring_mask; struct io_uring_sqe* sqes; } ;
struct io_uring {struct io_uring_sq sq; } ;



struct io_uring_sqe *FUNC_0(struct io_uring *VAR_0)
{
 struct io_uring_sq *VAR_1 = &VAR_0->sq;
 unsigned VAR_2 = VAR_1->sqe_tail + 1;
 struct io_uring_sqe *VAR_3;




 if (VAR_2 - VAR_1->sqe_head > *VAR_1->kring_entries)
  return ((void*)0);

 VAR_3 = &VAR_1->sqes[VAR_1->sqe_tail & *VAR_1->kring_mask];
 VAR_1->sqe_tail = VAR_2;
 return VAR_3;
}
