
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_meta_info {int metaid; scalar_t__ metaval; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,int ,int,scalar_t__*) ;

int FUNC_2(u32 VAR_0, void *VAR_1, struct tcf_meta_info *VAR_2)
{
 u32 VAR_3 = VAR_0;

 if (VAR_2->metaval)
  VAR_3 = *(u32 *)VAR_2->metaval;
 else if (VAR_0)
  VAR_3 = VAR_0;

 if (!VAR_3)
  return 0;

 VAR_3 = FUNC_0(VAR_3);
 return FUNC_1(VAR_1, VAR_2->metaid, 4, &VAR_3);
}
