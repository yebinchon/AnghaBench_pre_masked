
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {char* font; int pango_markup; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char**,int) ;
 void* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

struct cmd_results *FUNC_7(int VAR_3, char **VAR_4) {
 struct cmd_results *VAR_5 = ((void*)0);
 if ((VAR_5 = FUNC_0(VAR_3, "font", VAR_1, 1))) {
  return VAR_5;
 }
 char *VAR_6 = FUNC_4(VAR_4, VAR_3);
 FUNC_3(VAR_2->font);

 if (FUNC_6(VAR_6, "pango:", 6) == 0) {
  VAR_2->pango_markup = 1;
  VAR_2->font = FUNC_5(VAR_6 + 6);
 } else {
  VAR_2->pango_markup = 0;
  VAR_2->font = FUNC_5(VAR_6);
 }

 FUNC_3(VAR_6);
 FUNC_2(1);
 return FUNC_1(VAR_0, ((void*)0));
}
