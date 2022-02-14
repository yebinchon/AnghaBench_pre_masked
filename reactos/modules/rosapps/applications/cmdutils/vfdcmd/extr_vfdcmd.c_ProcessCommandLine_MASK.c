
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_args; int (* func ) (char const**) ;int hint; } ;
typedef scalar_t__ DWORD ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*) ;
 int VAR_5 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const**) ;

int FUNC_8(int VAR_6, const char **VAR_7)
{
 int VAR_8;
 DWORD VAR_9;




 VAR_8 = FUNC_0(*VAR_7);

 if (VAR_8 < 0) {



  return VAR_4;
 }

 if (*(++VAR_7) &&
  (!FUNC_6(*VAR_7, "/?") ||
  !FUNC_4(*VAR_7, "/h"))) {



  FUNC_1(VAR_0[VAR_8].hint);
  return VAR_4;
 }

 if (--VAR_6 > VAR_0[VAR_8].max_args) {



  FUNC_1(VAR_3);
  FUNC_1(VAR_0[VAR_8].hint);
  return VAR_4;
 }



 VAR_9 = FUNC_3(&VAR_5);

 if (VAR_9 != VAR_1) {
  FUNC_1(VAR_2);
  FUNC_5("%s", FUNC_2(VAR_9));
  return VAR_4;
 }



 return (*VAR_0[VAR_8].func)(VAR_7);
}
