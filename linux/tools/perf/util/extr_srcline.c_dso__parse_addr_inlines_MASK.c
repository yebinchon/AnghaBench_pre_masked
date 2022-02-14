
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct inline_node {int dummy; } ;
struct dso {int dummy; } ;


 struct inline_node* FUNC_0 (char const*,int ,struct dso*,struct symbol*) ;
 char* FUNC_1 (struct dso*) ;

struct inline_node *FUNC_2(struct dso *VAR_0, u64 VAR_1,
         struct symbol *VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_3, VAR_1, VAR_0, VAR_2);
}
