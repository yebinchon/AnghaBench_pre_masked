
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_cqe {int dummy; } ;
struct io_uring_cq {unsigned int* kring_mask; unsigned int* khead; unsigned int* ktail; struct io_uring_cqe* cqes; } ;
struct io_uring {int ring_fd; struct io_uring_cq cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct io_uring *VAR_2,
         struct io_uring_cqe **VAR_3, int VAR_4)
{
 struct io_uring_cq *VAR_5 = &VAR_2->cq;
 const unsigned VAR_6 = *VAR_5->kring_mask;
 unsigned VAR_7;
 int VAR_8;

 *VAR_3 = ((void*)0);
 VAR_7 = *VAR_5->khead;
 do {







  FUNC_1();
  if (VAR_7 != *VAR_5->ktail) {
   *VAR_3 = &VAR_5->cqes[VAR_7 & VAR_6];
   break;
  }
  if (!VAR_4)
   break;
  VAR_8 = FUNC_0(VAR_2->ring_fd, 0, 1,
     VAR_0, ((void*)0));
  if (VAR_8 < 0)
   return -VAR_1;
 } while (1);

 return 0;
}
