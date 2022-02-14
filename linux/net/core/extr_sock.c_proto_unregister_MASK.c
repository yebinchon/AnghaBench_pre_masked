
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto {TYPE_1__* twsk_prot; int rsk_prot; int * slab; int node; } ;
struct TYPE_2__ {int * twsk_slab; int twsk_slab_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct proto*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct proto *VAR_1)
{
 FUNC_3(&VAR_0);
 FUNC_5(VAR_1);
 FUNC_2(&VAR_1->node);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_1->slab);
 VAR_1->slab = ((void*)0);

 FUNC_6(VAR_1->rsk_prot);

 if (VAR_1->twsk_prot != ((void*)0) && VAR_1->twsk_prot->twsk_slab != ((void*)0)) {
  FUNC_1(VAR_1->twsk_prot->twsk_slab);
  FUNC_0(VAR_1->twsk_prot->twsk_slab_name);
  VAR_1->twsk_prot->twsk_slab = ((void*)0);
 }
}
