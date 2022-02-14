
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* val; int len; } ;
struct property {TYPE_1__ val; } ;
struct node {int dummy; } ;


 struct property* FUNC_0 (struct node*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int) ;

__attribute__((used)) static bool FUNC_3(struct node *VAR_0, const char *VAR_1)
{
 struct property *VAR_2;
 const char *VAR_3, *VAR_4;

 VAR_2 = FUNC_0(VAR_0, "compatible");
 if (!VAR_2)
  return 0;

 for (VAR_3 = VAR_2->val.val, VAR_4 = VAR_3 + VAR_2->val.len; VAR_3 < VAR_4;
      VAR_3 += FUNC_2(VAR_3, VAR_4 - VAR_3) + 1) {
  if (FUNC_1(VAR_3, VAR_1))
   return 1;
 }
 return 0;
}
