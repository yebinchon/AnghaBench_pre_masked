
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statement {struct statement* oldlocale; scalar_t__ clocale; struct statement* name; struct statement* command; int outlist; int inlist; } ;


 int FUNC_0 (struct statement*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct statement *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_1(VAR_0->inlist);
 FUNC_1(VAR_0->outlist);
 FUNC_0(VAR_0->command);
 FUNC_0(VAR_0->name);




 FUNC_0(VAR_0->oldlocale);

 FUNC_0(VAR_0);
}
