
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct __ip6_tnl_parm {int erspan_ver; int hwid; void* dir; int index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;

__attribute__((used)) static void FUNC_3(struct nlattr *VAR_4[],
      struct __ip6_tnl_parm *VAR_5)
{
 if (!VAR_4)
  return;

 VAR_5->erspan_ver = 1;
 if (VAR_4[VAR_3])
  VAR_5->erspan_ver = FUNC_2(VAR_4[VAR_3]);

 if (VAR_5->erspan_ver == 1) {
  if (VAR_4[VAR_2])
   VAR_5->index = FUNC_1(VAR_4[VAR_2]);
 } else if (VAR_5->erspan_ver == 2) {
  if (VAR_4[VAR_0])
   VAR_5->dir = FUNC_2(VAR_4[VAR_0]);
  if (VAR_4[VAR_1])
   VAR_5->hwid = FUNC_0(VAR_4[VAR_1]);
 }
}
