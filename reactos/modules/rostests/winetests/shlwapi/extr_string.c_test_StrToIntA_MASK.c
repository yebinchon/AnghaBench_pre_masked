
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int str_to_int; scalar_t__ string; } ;
typedef TYPE_1__ StrToIntResult ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(void)
{
  const StrToIntResult *VAR_1 = VAR_0;
  int VAR_2;

  while (VAR_1->string)
  {
    VAR_2 = FUNC_0(VAR_1->string);
    FUNC_1(VAR_2 == VAR_1->str_to_int, "converted '%s' wrong (%d)\n",
       VAR_1->string, VAR_2);
    VAR_1++;
  }
}
