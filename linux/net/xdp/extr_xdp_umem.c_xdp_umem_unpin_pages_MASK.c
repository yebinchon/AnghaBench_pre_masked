
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {int * pgs; int npgs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct xdp_umem *VAR_0)
{
 FUNC_1(VAR_0->pgs, VAR_0->npgs, 1);

 FUNC_0(VAR_0->pgs);
 VAR_0->pgs = ((void*)0);
}
