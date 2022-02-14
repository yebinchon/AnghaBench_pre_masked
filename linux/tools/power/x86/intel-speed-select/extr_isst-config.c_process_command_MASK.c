
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* feature; char* command; int (* process_fn ) () ;} ;
struct TYPE_3__ {char* feature; int (* process_fn ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (int,size_t,char**) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(int VAR_4, char **VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 char *VAR_8 = VAR_5[VAR_2];
 char *VAR_9 = VAR_5[VAR_2 + 1];

 if (!VAR_8 || !VAR_9)
  return;

 FUNC_1("feature name [%s] command [%s]\n", VAR_8, VAR_9);
 if (!FUNC_5(VAR_9, "-h") || !FUNC_5(VAR_9, "--help")) {
  while (VAR_1[VAR_6].feature) {
   if (!FUNC_5(VAR_1[VAR_6].feature, VAR_8)) {
    VAR_1[VAR_6].process_fn();
    FUNC_2(0);
   }
   ++VAR_6;
  }
 }

 FUNC_0();

 VAR_6 = 0;
 while (VAR_0[VAR_6].feature) {
  if (!FUNC_5(VAR_0[VAR_6].feature, VAR_8) &&
      !FUNC_5(VAR_0[VAR_6].command, VAR_9)) {
   FUNC_4(VAR_4, VAR_2 + 1, VAR_5);
   VAR_0[VAR_6].process_fn();
   VAR_7 = 1;
   break;
  }
  ++VAR_6;
 }

 if (!VAR_7)
  FUNC_3(VAR_3, "Invalid command\n");
}
