
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statement {scalar_t__ oldlocale; int oldthreadlocale; } ;
typedef scalar_t__ locale_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct statement*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(struct statement *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;





 if (VAR_1->oldlocale)
  FUNC_2(VAR_0, VAR_1->oldlocale);
 FUNC_1(VAR_1);
}
