
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int root; struct tc_u_common* data; } ;
typedef void tc_u_hnode ;
struct tc_u_common {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (struct tc_u_common*,scalar_t__) ;
 void* FUNC_4 (void*,int ) ;

__attribute__((used)) static void *FUNC_5(struct tcf_proto *VAR_1, u32 VAR_2)
{
 struct tc_u_hnode *VAR_3;
 struct tc_u_common *VAR_4 = VAR_1->data;

 if (FUNC_0(VAR_2) == VAR_0)
  VAR_3 = FUNC_2(VAR_1->root);
 else
  VAR_3 = FUNC_3(VAR_4, FUNC_0(VAR_2));

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_1(VAR_2) == 0)
  return VAR_3;

 return FUNC_4(VAR_3, VAR_2);
}
