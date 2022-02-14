
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_params {int dummy; } ;
struct io_uring {int ring_fd; int cq; int sq; } ;


 int FUNC_0 (int,struct io_uring_params*,int *,int *) ;
 int FUNC_1 (struct io_uring*,int ,int) ;

int FUNC_2(int VAR_0, struct io_uring_params *VAR_1, struct io_uring *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2->sq, &VAR_2->cq);
 if (!VAR_3)
  VAR_2->ring_fd = VAR_0;
 return VAR_3;
}
