
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {int main_window; } ;
typedef int GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ,int ,int ,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char**,char const*,int ) ;
 int FUNC_9 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_10(const char *VAR_5, va_list VAR_6)
{
 char *VAR_7;
 GtkWidget *VAR_8;

 if (!FUNC_7(VAR_3) ||
     FUNC_8(&VAR_7, VAR_5, VAR_6) < 0) {
  FUNC_2(VAR_4, "Error:\n");
  FUNC_9(VAR_4, VAR_5, VAR_6);
  FUNC_2(VAR_4, "\n");
  return -1;
 }

 VAR_8 = FUNC_5(FUNC_1(VAR_3->main_window),
     VAR_1,
     VAR_2,
     VAR_0,
     "<b>Error</b>\n\n%s", VAR_7);
 FUNC_4(FUNC_0(VAR_8));

 FUNC_6(VAR_8);
 FUNC_3(VAR_7);
 return 0;
}
