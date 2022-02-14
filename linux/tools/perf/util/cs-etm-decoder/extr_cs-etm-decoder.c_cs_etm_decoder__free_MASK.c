
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_decoder {int * dcd_tree; } ;


 int FUNC_0 (struct cs_etm_decoder*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cs_etm_decoder *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->dcd_tree);
 VAR_0->dcd_tree = ((void*)0);
 FUNC_0(VAR_0);
}
