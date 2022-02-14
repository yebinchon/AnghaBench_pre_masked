
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cs_etm_decoder {int dcd_tree; int mem_access; } ;
typedef int cs_etm_mem_cb_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,struct cs_etm_decoder*) ;

int FUNC_1(struct cs_etm_decoder *VAR_2,
          u64 VAR_3, u64 VAR_4,
          cs_etm_mem_cb_type VAR_5)
{
 VAR_2->mem_access = VAR_5;

 if (FUNC_0(VAR_2->dcd_tree, VAR_3, VAR_4,
            VAR_0,
            VAR_1,
            VAR_2))
  return -1;

 return 0;
}
