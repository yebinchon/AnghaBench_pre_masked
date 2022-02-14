
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ECPGstruct_member {struct ECPGstruct_member* type; struct ECPGstruct_member* name; struct ECPGstruct_member* next; } ;


 int FUNC_0 (struct ECPGstruct_member*) ;

void
FUNC_1(struct ECPGstruct_member *VAR_0)
{
 while (VAR_0)
 {
  struct ECPGstruct_member *VAR_1 = VAR_0;

  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1->type);
  FUNC_0(VAR_1);
 }
}
