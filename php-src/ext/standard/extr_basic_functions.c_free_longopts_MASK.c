
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char opt_char; int * opt_name; } ;
typedef TYPE_1__ opt_struct ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(opt_struct *VAR_0)
{
 opt_struct *VAR_1;

 if (VAR_0) {
  for (VAR_1 = VAR_0; VAR_1 && VAR_1->opt_char != '-'; VAR_1++) {
   if (VAR_1->opt_name != ((void*)0)) {
    FUNC_0((char *)(VAR_1->opt_name));
   }
  }
 }
}
