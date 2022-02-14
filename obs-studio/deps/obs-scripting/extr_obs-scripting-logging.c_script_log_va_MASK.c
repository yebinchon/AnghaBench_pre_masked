
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {char* array; } ;
struct TYPE_6__ {int type; TYPE_1__ file; } ;
typedef TYPE_2__ obs_script_t ;
typedef int msg ;





 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*) ;
 int VAR_0 ;
 size_t FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*,int,char const*,int ) ;

void FUNC_4(obs_script_t *VAR_1, int VAR_2, const char *VAR_3,
     va_list VAR_4)
{
 char VAR_5[2048];
 const char *VAR_6 = "(Unknown)";
 size_t VAR_7;

 if (VAR_1) {
  switch (VAR_1->type) {
  case 128:
   VAR_6 = "(Unknown language)";
   break;
  case 130:
   VAR_6 = "Lua";
   break;
  case 129:
   VAR_6 = "Python";
   break;
  }

  VAR_7 = FUNC_2(VAR_5, sizeof(VAR_5), "[%s: %s] ", VAR_6,
         VAR_1->file.array);
 } else {
  VAR_7 = FUNC_2(VAR_5, sizeof(VAR_5), "[Unknown Script] ");
 }

 FUNC_3(VAR_5 + VAR_7, sizeof(VAR_5) - VAR_7, VAR_3, VAR_4);

 if (&FUNC_1)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5 + VAR_7);
 FUNC_0(VAR_2, "%s", VAR_5);
}
