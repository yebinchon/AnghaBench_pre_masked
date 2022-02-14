
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int dummy; } ;
struct io_uring_sq {int* kring_entries; int ring_sz; int khead; int sqes; } ;
struct io_uring_cq {int ring_sz; int khead; } ;
struct io_uring {int ring_fd; struct io_uring_cq cq; struct io_uring_sq sq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct io_uring *VAR_0)
{
 struct io_uring_sq *VAR_1 = &VAR_0->sq;
 struct io_uring_cq *VAR_2 = &VAR_0->cq;

 FUNC_1(VAR_1->sqes, *VAR_1->kring_entries * sizeof(struct io_uring_sqe));
 FUNC_1(VAR_1->khead, VAR_1->ring_sz);
 FUNC_1(VAR_2->khead, VAR_2->ring_sz);
 FUNC_0(VAR_0->ring_fd);
}
