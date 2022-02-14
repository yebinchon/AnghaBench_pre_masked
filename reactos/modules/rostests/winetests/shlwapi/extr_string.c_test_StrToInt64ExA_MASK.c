
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int str_to_int64_ex; int str_to_int64_hex; scalar_t__ string; } ;
typedef TYPE_1__ StrToIntResult ;
typedef int LONGLONG ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
  const StrToIntResult *VAR_2 = VAR_1;
  LONGLONG VAR_3;
  BOOL VAR_4;

  if (!&FUNC_1)
  {
    FUNC_2("StrToInt64ExA() is not available\n");
    return;
  }

  while (VAR_2->string)
  {
    VAR_3 = -1;
    VAR_4 = FUNC_1(VAR_2->string,0,&VAR_3);
    FUNC_0(!VAR_4 || VAR_3 != -1, "No result returned from '%s'\n",
       VAR_2->string);
    if (VAR_4)
      FUNC_0(VAR_3 == VAR_2->str_to_int64_ex, "converted '%s' wrong (%s)\n",
         VAR_2->string, FUNC_3(VAR_3));
    VAR_2++;
  }

  VAR_2 = VAR_1;
  while (VAR_2->string)
  {
    VAR_3 = -1;
    VAR_4 = FUNC_1(VAR_2->string,VAR_0,&VAR_3);
    FUNC_0(!VAR_4 || VAR_3 != -1, "No result returned from '%s'\n",
       VAR_2->string);
    if (VAR_4)
      FUNC_0(VAR_3 == VAR_2->str_to_int64_hex, "converted '%s' wrong (%s)\n",
         VAR_2->string, FUNC_3(VAR_3));
    VAR_2++;
  }
}
