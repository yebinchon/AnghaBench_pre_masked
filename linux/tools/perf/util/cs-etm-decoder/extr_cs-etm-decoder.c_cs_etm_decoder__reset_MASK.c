
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_decoder {int dcd_tree; int prev_return; } ;
typedef int ocsd_datapath_resp_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int *,int *) ;

int FUNC_2(struct cs_etm_decoder *VAR_2)
{
 ocsd_datapath_resp_t VAR_3;

 VAR_2->prev_return = VAR_1;

 VAR_3 = FUNC_1(VAR_2->dcd_tree, VAR_0,
          0, 0, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_3))
  return -1;

 return 0;
}
