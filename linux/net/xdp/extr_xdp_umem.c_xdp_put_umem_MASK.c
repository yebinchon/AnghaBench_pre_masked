
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {int work; int users; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct xdp_umem *VAR_1)
{
 if (!VAR_1)
  return;

 if (FUNC_1(&VAR_1->users)) {
  FUNC_0(&VAR_1->work, VAR_0);
  FUNC_2(&VAR_1->work);
 }
}
