
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * byte_size_64; scalar_t__ value; } ;
typedef TYPE_1__ StrFormatSizeResult ;
typedef char* LPSTR ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
  LPSTR VAR_1;
  const StrFormatSizeResult* VAR_2 = VAR_0;

  while(VAR_2->value)
  {
    VAR_1 = FUNC_1(VAR_2->byte_size_64);

    FUNC_2(VAR_1 != ((void*)0), "Dup failed\n");
    if (VAR_1)
    {
      FUNC_2(!FUNC_3(VAR_2->byte_size_64, VAR_1), "Copied string wrong\n");
      FUNC_0(VAR_1);
    }
    VAR_2++;
  }




  VAR_1 = FUNC_1(((void*)0));
  FUNC_2(VAR_1 == ((void*)0) || *VAR_1 == '\0', "NULL string returned %p\n", VAR_1);
  FUNC_0(VAR_1);
}
