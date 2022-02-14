
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ECPGtype {int dummy; } ;
struct ECPGstruct_member {struct ECPGstruct_member* next; struct ECPGtype* type; int name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

void
FUNC_2(const char *VAR_0, struct ECPGtype *VAR_1, struct ECPGstruct_member **VAR_2)
{
 struct ECPGstruct_member *VAR_3,
      *VAR_4 =
 (struct ECPGstruct_member *) FUNC_0(sizeof(struct ECPGstruct_member));

 VAR_4->name = FUNC_1(VAR_0);
 VAR_4->type = VAR_1;
 VAR_4->next = ((void*)0);

 for (VAR_3 = *VAR_2; VAR_3 && VAR_3->next; VAR_3 = VAR_3->next);

 if (VAR_3)
  VAR_3->next = VAR_4;
 else
  *VAR_2 = VAR_4;
}
