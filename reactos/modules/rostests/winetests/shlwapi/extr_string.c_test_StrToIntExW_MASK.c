
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ string; scalar_t__ str_to_int64_hex; scalar_t__ str_to_int64_ex; } ;
typedef TYPE_1__ StrToIntResult ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,int,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ,int*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_4(void)
{
  WCHAR VAR_3[256];
  const StrToIntResult *VAR_4 = VAR_2;
  int VAR_5;
  BOOL VAR_6;

  while (VAR_4->string)
  {
    VAR_5 = -1;
    FUNC_1(VAR_0, 0, VAR_4->string, -1, VAR_3, FUNC_0(VAR_3));
    VAR_6 = FUNC_2(VAR_3, 0, &VAR_5);
    FUNC_3(!VAR_6 || VAR_5 != -1, "No result returned from '%s'\n",
       VAR_4->string);
    if (VAR_6)
      FUNC_3(VAR_5 == (int)VAR_4->str_to_int64_ex, "converted '%s' wrong (%d)\n",
         VAR_4->string, VAR_5);
    VAR_4++;
  }

  VAR_4 = VAR_2;
  while (VAR_4->string)
  {
    VAR_5 = -1;
    FUNC_1(VAR_0, 0, VAR_4->string, -1, VAR_3, FUNC_0(VAR_3));
    VAR_6 = FUNC_2(VAR_3, VAR_1, &VAR_5);
    FUNC_3(!VAR_6 || VAR_5 != -1, "No result returned from '%s'\n",
       VAR_4->string);
    if (VAR_6)
      FUNC_3(VAR_5 == (int)VAR_4->str_to_int64_hex, "converted '%s' wrong (%d)\n",
         VAR_4->string, VAR_5);
    VAR_4++;
  }
}
