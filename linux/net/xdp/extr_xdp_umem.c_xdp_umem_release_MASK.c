
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {struct xdp_umem* pages; int * cq; int * fq; int id; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct xdp_umem*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (struct xdp_umem*) ;
 int FUNC_5 (struct xdp_umem*) ;
 int FUNC_6 (struct xdp_umem*) ;
 int FUNC_7 (struct xdp_umem*) ;
 int FUNC_8 (struct xdp_umem*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct xdp_umem *VAR_1)
{
 FUNC_2();
 FUNC_4(VAR_1);
 FUNC_3();

 FUNC_0(&VAR_0, VAR_1->id);

 if (VAR_1->fq) {
  FUNC_9(VAR_1->fq);
  VAR_1->fq = ((void*)0);
 }

 if (VAR_1->cq) {
  FUNC_9(VAR_1->cq);
  VAR_1->cq = ((void*)0);
 }

 FUNC_8(VAR_1);

 FUNC_6(VAR_1);
 FUNC_7(VAR_1);

 FUNC_1(VAR_1->pages);
 VAR_1->pages = ((void*)0);

 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
}
