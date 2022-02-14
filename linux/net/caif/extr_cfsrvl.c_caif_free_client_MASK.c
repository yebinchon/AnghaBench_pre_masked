
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfsrvl {int layer; int (* release ) (int *) ;} ;
struct cflayer {int * dn; } ;


 struct cfsrvl* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cflayer *VAR_0)
{
 struct cfsrvl *VAR_1;
 if (VAR_0 == ((void*)0) || VAR_0->dn == ((void*)0))
  return;
 VAR_1 = FUNC_0(VAR_0->dn);
 VAR_1->release(&VAR_1->layer);
}
