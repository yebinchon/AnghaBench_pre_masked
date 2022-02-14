
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


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int,int **) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ,int,int) ;
 int VAR_3 ;
 int FUNC_10 (int *,int **,int **,int **) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int *,int **,int **,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_13(void)
{
  static const char VAR_5[] = "TestSomeText";
  IRichEditOle *VAR_6 = ((void*)0);
  ITextDocument *VAR_7 = ((void*)0);
  ITextSelection *VAR_8;
  ITextRange *VAR_9;
  LONG VAR_10;
  HRESULT VAR_11;
  HWND VAR_12;

  FUNC_10(&VAR_12, &VAR_6, &VAR_7, &VAR_8);
  FUNC_9(VAR_12, VAR_3, 0, (LPARAM)VAR_5);
  FUNC_9(VAR_12, VAR_1, 1, 2);

  VAR_11 = FUNC_2(VAR_7, 0, 4, &VAR_9);
  FUNC_11(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_3(VAR_9, VAR_4, ((void*)0));
  FUNC_11(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
  FUNC_0(VAR_9, 0, 13);

  VAR_11 = FUNC_5(VAR_8, VAR_4, ((void*)0));
  FUNC_11(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
  FUNC_1(VAR_8, 0, 13);

  FUNC_7(VAR_9, 1, 2);
  FUNC_8(VAR_8, 1, 2);

  VAR_10 = 0;
  VAR_11 = FUNC_3(VAR_9, VAR_4, &VAR_10);
  FUNC_11(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
  FUNC_11(VAR_10 == 12, "got %d\n", VAR_10);
  FUNC_0(VAR_9, 0, 13);

  VAR_10 = 0;
  VAR_11 = FUNC_5(VAR_8, VAR_4, &VAR_10);
  FUNC_11(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
  FUNC_11(VAR_10 == 12, "got %d\n", VAR_10);
  FUNC_1(VAR_8, 0, 13);

  FUNC_12(&VAR_12, &VAR_6, &VAR_7, ((void*)0));

  VAR_11 = FUNC_3(VAR_9, VAR_4, ((void*)0));
  FUNC_11(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_3(VAR_9, VAR_4, &VAR_10);
  FUNC_11(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_5(VAR_8, VAR_4, ((void*)0));
  FUNC_11(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_5(VAR_8, VAR_4, &VAR_10);
  FUNC_11(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  FUNC_6(VAR_8);
  FUNC_4(VAR_9);
}
