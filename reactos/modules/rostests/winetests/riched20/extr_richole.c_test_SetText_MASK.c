
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPARAM ;
typedef int LONG ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;
typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int **) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int * FUNC_6 (char const*) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (int *,int **,int **,int *) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_12(void)
{
  static const CHAR VAR_3[] = "TestSomeText";
  static const WCHAR VAR_4[] = {'a','b','c','d','e','f','g','h','i',0};
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextRange *VAR_7, *VAR_8;
  LONG VAR_9;
  HRESULT VAR_10;
  HWND VAR_11;
  BSTR VAR_12;

  FUNC_9(&VAR_11, &VAR_5, &VAR_6, ((void*)0));
  FUNC_5(VAR_11, VAR_2, 0, (LPARAM)VAR_3);

  VAR_10 = FUNC_0(VAR_6, 0, 4, &VAR_7);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

  VAR_10 = FUNC_0(VAR_6, 0, 4, &VAR_8);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

  VAR_9 = 1;
  VAR_10 = FUNC_2(VAR_8, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 0, "got %d\n", VAR_9);

  VAR_9 = 0;
  VAR_10 = FUNC_1(VAR_8, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 4, "got %d\n", VAR_9);

  VAR_10 = FUNC_4(VAR_7, ((void*)0));
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

  VAR_9 = 1;
  VAR_10 = FUNC_1(VAR_8, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 0, "got %d\n", VAR_9);

  VAR_12 = FUNC_6(VAR_4);
  VAR_10 = FUNC_4(VAR_7, VAR_12);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_8(VAR_12);

  VAR_9 = 1;
  VAR_10 = FUNC_2(VAR_7, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 0, "got %d\n", VAR_9);

  VAR_9 = 0;
  VAR_10 = FUNC_1(VAR_7, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 9, "got %d\n", VAR_9);

  VAR_9 = 1;
  VAR_10 = FUNC_2(VAR_8, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 0, "got %d\n", VAR_9);

  VAR_9 = 0;
  VAR_10 = FUNC_1(VAR_8, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 0, "got %d\n", VAR_9);

  VAR_12 = FUNC_7(((void*)0), 0);
  VAR_10 = FUNC_4(VAR_7, VAR_12);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  VAR_9 = 1;
  VAR_10 = FUNC_1(VAR_7, &VAR_9);
  FUNC_10(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
  FUNC_10(VAR_9 == 0, "got %d\n", VAR_9);
  FUNC_8(VAR_12);

  FUNC_3(VAR_8);
  FUNC_11(&VAR_11, &VAR_5, &VAR_6, ((void*)0));

  VAR_10 = FUNC_4(VAR_7, ((void*)0));
  FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

  VAR_12 = FUNC_7(((void*)0), 0);
  VAR_10 = FUNC_4(VAR_7, VAR_12);
  FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);
  FUNC_8(VAR_12);

  FUNC_3(VAR_7);
}
