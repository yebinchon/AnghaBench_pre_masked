
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int ITextSelection ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int,int) ;
 int VAR_3 ;
 int FUNC_7 (int *,int **,int **,int **) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_10(void)
{
  static const CHAR VAR_4[] = "TestSomeText";
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextSelection *VAR_7;
  ITextRange *VAR_8;
  LONG VAR_9;
  HRESULT VAR_10;
  HWND VAR_11;

  FUNC_7(&VAR_11, &VAR_5, &VAR_6, &VAR_7);
  FUNC_6(VAR_11, VAR_3, 0, (LPARAM)VAR_4);
  FUNC_6(VAR_11, VAR_1, 1, 2);

  VAR_10 = FUNC_0(VAR_6, 0, 4, &VAR_8);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

  VAR_10 = FUNC_2(VAR_8);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

  VAR_9 = 1;
  VAR_10 = FUNC_3(VAR_7, &VAR_9);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
  FUNC_8(VAR_9 == 0, "got %d\n", VAR_9);

  VAR_10 = FUNC_2(VAR_8);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

  VAR_10 = FUNC_5(VAR_7);
  FUNC_8(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

  FUNC_9(&VAR_11, &VAR_5, &VAR_6, ((void*)0));

  VAR_10 = FUNC_2(VAR_8);
  FUNC_8(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

  VAR_10 = FUNC_5(VAR_7);
  FUNC_8(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

  FUNC_1(VAR_8);
  FUNC_4(VAR_7);
}
