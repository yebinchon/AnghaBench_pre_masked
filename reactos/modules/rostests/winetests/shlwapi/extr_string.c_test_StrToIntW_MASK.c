
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int str_to_int; scalar_t__ string; } ;
typedef TYPE_1__ StrToIntResult ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,int,int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(void)
{
  WCHAR VAR_2[256];
  const StrToIntResult *VAR_3 = VAR_1;
  int VAR_4;

  while (VAR_3->string)
  {
    FUNC_1(VAR_0, 0, VAR_3->string, -1, VAR_2, FUNC_0(VAR_2));
    VAR_4 = FUNC_2(VAR_2);
    FUNC_3(VAR_4 == VAR_3->str_to_int, "converted '%s' wrong (%d)\n",
       VAR_3->string, VAR_4);
    VAR_3++;
  }
}
