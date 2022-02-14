
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_cqe {int dummy; } ;
struct io_uring_cq {int * khead; } ;
struct io_uring {struct io_uring_cq cq; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct io_uring *VAR_0,
         struct io_uring_cqe *VAR_1)
{
 if (VAR_1) {
  struct io_uring_cq *VAR_2 = &VAR_0->cq;

  (*VAR_2->khead)++;




  FUNC_0();
 }
}
