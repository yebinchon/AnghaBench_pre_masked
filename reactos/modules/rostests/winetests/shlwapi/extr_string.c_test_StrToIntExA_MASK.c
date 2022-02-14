
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ string; scalar_t__ str_to_int64_hex; scalar_t__ str_to_int64_ex; } ;
typedef TYPE_1__ StrToIntResult ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_2(void)
{
  const StrToIntResult *VAR_2 = VAR_1;
  int VAR_3;
  BOOL VAR_4;

  while (VAR_2->string)
  {
    VAR_3 = -1;
    VAR_4 = FUNC_0(VAR_2->string,0,&VAR_3);
    FUNC_1(!VAR_4 || VAR_3 != -1, "No result returned from '%s'\n",
       VAR_2->string);
    if (VAR_4)
      FUNC_1(VAR_3 == (int)VAR_2->str_to_int64_ex, "converted '%s' wrong (%d)\n",
         VAR_2->string, VAR_3);
    VAR_2++;
  }

  VAR_2 = VAR_1;
  while (VAR_2->string)
  {
    VAR_3 = -1;
    VAR_4 = FUNC_0(VAR_2->string,VAR_0,&VAR_3);
    FUNC_1(!VAR_4 || VAR_3 != -1, "No result returned from '%s'\n",
       VAR_2->string);
    if (VAR_4)
      FUNC_1(VAR_3 == (int)VAR_2->str_to_int64_hex, "converted '%s' wrong (%d)\n",
         VAR_2->string, VAR_3);
    VAR_2++;
  }
}
