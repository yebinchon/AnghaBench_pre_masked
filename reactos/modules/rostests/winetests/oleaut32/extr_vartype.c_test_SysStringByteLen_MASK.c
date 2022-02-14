
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwLen; } ;
typedef TYPE_1__ INTERNAL_BSTR ;
typedef int BSTR ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
  INTERNAL_BSTR VAR_0;
  BSTR VAR_1 = FUNC_0(&VAR_0);

  VAR_0.dwLen = 0;
  FUNC_2 (FUNC_1(VAR_1) == 0, "Expected dwLen 0, got %d\n", FUNC_1(VAR_1));
  VAR_0.dwLen = 2;
  FUNC_2 (FUNC_1(VAR_1) == 2, "Expected dwLen 2, got %d\n", FUNC_1(VAR_1));
}
