
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int byte_size_64; scalar_t__ value; } ;
typedef TYPE_1__ StrFormatSizeResult ;
typedef int * LPWSTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
  WCHAR VAR_2[256];
  WCHAR VAR_3[256];
  const StrFormatSizeResult* VAR_4 = VAR_1;
  LPWSTR VAR_5;

  while(VAR_4->value)
  {
    FUNC_1(VAR_0, 0, VAR_4->byte_size_64, -1, VAR_2, FUNC_0(VAR_2));

    VAR_5 = FUNC_3(VAR_3, VAR_2);
    FUNC_4(!FUNC_2(VAR_2, VAR_3) && VAR_5 == VAR_3, "Copied string %s wrong\n", VAR_4->byte_size_64);
    VAR_4++;
  }
}
