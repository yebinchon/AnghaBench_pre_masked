
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int minus_42 ;
typedef int int_min ;
typedef char WCHAR ;
typedef int LONG ;
typedef int LCID ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,int ,int **) ;
 scalar_t__ FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
  static const WCHAR VAR_5[] = { '-','2','1','4','7','4','8','3','6','4','8','\0' };
  static const WCHAR VAR_6[] = { '-','4','2','\0' };
  BSTR VAR_7 = ((void*)0);
  HRESULT VAR_8;
  LONG VAR_9;
  LCID VAR_10;

  VAR_10 = FUNC_1(FUNC_0(VAR_0, VAR_3), VAR_2);




  VAR_9 = -2147483648;

  VAR_8 = FUNC_3(VAR_9, VAR_10, VAR_1, &VAR_7);
  FUNC_5(VAR_8 == VAR_4, "got hres 0x%08x\n", VAR_8);
  if (VAR_7)
  {
    FUNC_5(FUNC_4(VAR_7, VAR_5, sizeof(VAR_5)) == 0, "string different\n");
    FUNC_2(VAR_7);
  }

  VAR_9 = -42;
  VAR_8 = FUNC_3(VAR_9, VAR_10, VAR_1, &VAR_7);
  FUNC_5(VAR_8 == VAR_4, "got hres 0x%08x\n", VAR_8);
  if (VAR_7)
  {
    FUNC_5(FUNC_4(VAR_7, VAR_6, sizeof(VAR_6)) == 0, "string different\n");
    FUNC_2(VAR_7);
  }
}
