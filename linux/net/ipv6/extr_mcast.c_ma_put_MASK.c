
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmcaddr6 {int idev; int mca_refcnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ifmcaddr6 *VAR_0)
{
 if (FUNC_2(&VAR_0->mca_refcnt)) {
  FUNC_0(VAR_0->idev);
  FUNC_1(VAR_0);
 }
}
