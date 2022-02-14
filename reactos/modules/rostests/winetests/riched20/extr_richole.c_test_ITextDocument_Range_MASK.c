
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int,int **) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *,int **,int **,int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_10(void)
{
  static const CHAR VAR_4[] = "TestSomeText";
  HWND VAR_5;
  IRichEditOle *VAR_6 = ((void*)0);
  ITextDocument *VAR_7 = ((void*)0);
  ITextRange *VAR_8, *VAR_9;
  HRESULT VAR_10;
  LONG VAR_11;

  FUNC_7(&VAR_5, &VAR_6, &VAR_7, ((void*)0));
  VAR_10 = FUNC_1(VAR_7, 0, 0, &VAR_8);
  FUNC_8(VAR_10 == VAR_2, "ITextDocument_Range fails 0x%x.\n", VAR_10);
  FUNC_0(VAR_8, 1);

  VAR_10 = FUNC_1(VAR_7, 0, 0, &VAR_9);
  FUNC_8(VAR_10 == VAR_2, "ITextDocument_Range fails 0x%x.\n", VAR_10);
  FUNC_8(VAR_9 != VAR_8, "A new pointer should be returned\n");
  FUNC_5(VAR_9);

  VAR_10 = FUNC_1(VAR_7, 0, 0, ((void*)0));
  FUNC_8(VAR_10 == VAR_1, "ITextDocument_Range should fail 0x%x.\n", VAR_10);

  FUNC_6(VAR_5, VAR_3, 0, (LPARAM)VAR_4);

  VAR_10 = FUNC_1(VAR_7, 8, 30, &VAR_9);
  FUNC_8(VAR_10 == VAR_2, "ITextDocument_Range fails 0x%x.\n", VAR_10);
  VAR_10 = FUNC_4(VAR_9, &VAR_11);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
  FUNC_8(VAR_11 == 8, "got %d\n", VAR_11);

  VAR_10 = FUNC_3(VAR_9, &VAR_11);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
  FUNC_8(VAR_11 == 13, "got %d\n", VAR_11);
  FUNC_5(VAR_9);

  FUNC_9(&VAR_5, &VAR_6, &VAR_7, ((void*)0));
  VAR_10 = FUNC_2(VAR_8, ((void*)0));
  FUNC_8(VAR_10 == VAR_0, "ITextRange after ITextDocument destroyed\n");
  FUNC_5(VAR_8);
}
