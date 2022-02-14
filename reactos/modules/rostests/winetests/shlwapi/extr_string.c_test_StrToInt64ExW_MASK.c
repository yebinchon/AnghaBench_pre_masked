
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int str_to_int64_ex; int str_to_int64_hex; scalar_t__ string; } ;
typedef TYPE_1__ StrToIntResult ;
typedef int LONGLONG ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,int,int *,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
  WCHAR VAR_3[256];
  const StrToIntResult *VAR_4 = VAR_2;
  LONGLONG VAR_5;
  BOOL VAR_6;

  if (!&FUNC_3)
  {
    FUNC_4("StrToInt64ExW() is not available\n");
    return;
  }

  while (VAR_4->string)
  {
    VAR_5 = -1;
    FUNC_1(VAR_0, 0, VAR_4->string, -1, VAR_3, FUNC_0(VAR_3));
    VAR_6 = FUNC_3(VAR_3, 0, &VAR_5);
    FUNC_2(!VAR_6 || VAR_5 != -1, "No result returned from '%s'\n",
       VAR_4->string);
    if (VAR_6)
      FUNC_2(VAR_5 == VAR_4->str_to_int64_ex, "converted '%s' wrong (%s)\n",
         VAR_4->string, FUNC_5(VAR_5));
    VAR_4++;
  }

  VAR_4 = VAR_2;
  while (VAR_4->string)
  {
    VAR_5 = -1;
    FUNC_1(VAR_0, 0, VAR_4->string, -1, VAR_3, FUNC_0(VAR_3));
    VAR_6 = FUNC_3(VAR_3, VAR_1, &VAR_5);
    FUNC_2(!VAR_6 || VAR_5 != -1, "No result returned from '%s'\n",
       VAR_4->string);
    if (VAR_6)
      FUNC_2(VAR_5 == VAR_4->str_to_int64_hex, "converted '%s' wrong (%s)\n",
         VAR_4->string, FUNC_5(VAR_5));
    VAR_4++;
  }
}
