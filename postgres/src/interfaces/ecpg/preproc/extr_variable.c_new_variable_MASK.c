
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int brace_level; struct variable* next; struct ECPGtype* type; int name; } ;
struct ECPGtype {int dummy; } ;


 struct variable* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

struct variable *
FUNC_2(const char *VAR_1, struct ECPGtype *VAR_2, int VAR_3)
{
 struct variable *VAR_4 = (struct variable *) FUNC_0(sizeof(struct variable));

 VAR_4->name = FUNC_1(VAR_1);
 VAR_4->type = VAR_2;
 VAR_4->brace_level = VAR_3;

 VAR_4->next = VAR_0;
 VAR_0 = VAR_4;

 return VAR_4;
}
