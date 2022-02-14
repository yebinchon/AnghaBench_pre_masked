
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_num; } ;


 char VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 while (VAR_0 == '\\') {
  FUNC_0 ();
  if (VAR_0 == '\n') {
   VAR_1->line_num++;
   FUNC_0 ();
  } else if (VAR_0 == '\r') {
   FUNC_0 ();
   if (VAR_0 != '\n') {
    goto fail;
   }
   VAR_1->line_num++;
   FUNC_0 ();
  } else {
fail:
   return 1;
  }
 }
 return 0;
}
