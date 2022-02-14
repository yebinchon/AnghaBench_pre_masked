
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_meta_info {int metaval; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ) ;

int FUNC_1(struct tcf_meta_info *VAR_1, void *VAR_2, gfp_t VAR_3)
{
 VAR_1->metaval = FUNC_0(VAR_2, sizeof(u32), VAR_3);
 if (!VAR_1->metaval)
  return -VAR_0;

 return 0;
}
