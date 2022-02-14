
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int ITextSelection ;
typedef int ITextRange ;
typedef int ITextPara ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int *,int **,int **,int **) ;
 int FUNC_9 (int,char*,int ,...) ;
 int FUNC_10 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_11(void)
{
  static const CHAR VAR_4[] = "TestSomeText";
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextSelection *VAR_7;
  ITextRange *VAR_8 = ((void*)0);
  ITextPara *VAR_9, *VAR_10;
  HRESULT VAR_11;
  HWND VAR_12;

  FUNC_8(&VAR_12, &VAR_5, &VAR_6, &VAR_7);
  FUNC_7(VAR_12, VAR_3, 0, (LPARAM)VAR_4);

  FUNC_0(VAR_5, 3);
  FUNC_0(VAR_6, 3);

  VAR_11 = FUNC_1(VAR_6, 0, 4, &VAR_8);
  FUNC_9(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

  FUNC_0(VAR_5, 3);
  FUNC_0(VAR_6, 3);
  FUNC_0(VAR_8, 1);

  VAR_11 = FUNC_3(VAR_8, ((void*)0));
  FUNC_9(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_3(VAR_8, &VAR_9);
  FUNC_9(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

  FUNC_0(VAR_5, 3);
  FUNC_0(VAR_6, 3);
  FUNC_0(VAR_8, 2);
  FUNC_0(VAR_9, 1);

  VAR_11 = FUNC_3(VAR_8, &VAR_10);
  FUNC_9(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
  FUNC_9(VAR_9 != VAR_10, "got %p, %p\n", *VAR_9, VAR_10);

  FUNC_0(VAR_5, 3);
  FUNC_0(VAR_6, 3);
  FUNC_0(VAR_8, 3);
  FUNC_0(VAR_9, 1);
  FUNC_0(VAR_10, 1);

  FUNC_2(VAR_9);
  FUNC_2(VAR_10);

  FUNC_0(VAR_5, 3);
  FUNC_0(VAR_6, 3);
  FUNC_0(VAR_7, 2);

  VAR_11 = FUNC_5(VAR_7, &VAR_9);
  FUNC_9(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

  FUNC_0(VAR_5, 3);
  FUNC_0(VAR_6, 3);
  FUNC_0(VAR_7, 3);
  FUNC_0(VAR_9, 1);

  VAR_11 = FUNC_5(VAR_7, &VAR_10);
  FUNC_9(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
  FUNC_9(VAR_9 != VAR_10, "got %p, %p\n", *VAR_9, VAR_10);

  FUNC_2(VAR_9);
  FUNC_2(VAR_10);
  FUNC_10(&VAR_12, &VAR_5, &VAR_6, ((void*)0));

  VAR_11 = FUNC_3(VAR_8, ((void*)0));
  FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_3(VAR_8, &VAR_9);
  FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_5(VAR_7, ((void*)0));
  FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_5(VAR_7, &VAR_9);
  FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  FUNC_6(VAR_7);
  FUNC_4(VAR_8);
}
