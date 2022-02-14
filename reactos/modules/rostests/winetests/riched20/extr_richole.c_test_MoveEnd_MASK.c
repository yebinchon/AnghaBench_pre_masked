
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


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int,int **) ;
 int FUNC_3 (int *,int ,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ,int,int) ;
 int VAR_4 ;
 int FUNC_10 (int *,int **,int **,int **) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int *,int **,int **,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(void)
{
  static const char VAR_6[] = "Word1 Word2";
  IRichEditOle *VAR_7 = ((void*)0);
  ITextDocument *VAR_8 = ((void*)0);
  ITextSelection *VAR_9;
  ITextRange *VAR_10;
  LONG VAR_11;
  HRESULT VAR_12;
  HWND VAR_13;

  FUNC_10(&VAR_13, &VAR_7, &VAR_8, &VAR_9);
  FUNC_9(VAR_13, VAR_4, 0, (LPARAM)VAR_6);
  FUNC_9(VAR_13, VAR_1, 1, 2);

  VAR_12 = FUNC_2(VAR_8, 1, 2, &VAR_10);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);

  VAR_12 = FUNC_3(VAR_10, VAR_5, 0, &VAR_11);
  FUNC_11(VAR_12 == VAR_2, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 0, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 1, 2);

  VAR_12 = FUNC_3(VAR_10, VAR_5, -1, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == -1, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 0, 0);

  VAR_12 = FUNC_3(VAR_10, VAR_5, 1, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 1, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 0, 12);

  VAR_12 = FUNC_3(VAR_10, VAR_5, 1, &VAR_11);
  FUNC_11(VAR_12 == VAR_2, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 0, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 0, 12);

  FUNC_7(VAR_10, 1, 2);

  VAR_12 = FUNC_3(VAR_10, VAR_5, 3, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 1, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 1, 12);

  FUNC_7(VAR_10, 2, 3);

  VAR_12 = FUNC_3(VAR_10, VAR_5, -3, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == -1, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 0, 0);

  VAR_12 = FUNC_3(VAR_10, VAR_5, -1, &VAR_11);
  FUNC_11(VAR_12 == VAR_2, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 0, "got %d\n", VAR_11);
  FUNC_0(VAR_10, 0, 0);

  VAR_12 = FUNC_5(VAR_9, VAR_5, 0, &VAR_11);
  FUNC_11(VAR_12 == VAR_2, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 0, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 1, 2);

  VAR_12 = FUNC_5(VAR_9, VAR_5, -1, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == -1, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 0, 0);

  VAR_12 = FUNC_5(VAR_9, VAR_5, 1, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 1, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 0, 12);

  VAR_12 = FUNC_5(VAR_9, VAR_5, 1, &VAR_11);
  FUNC_11(VAR_12 == VAR_2, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 0, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 0, 12);

  FUNC_8(VAR_9, 1, 2);

  VAR_12 = FUNC_5(VAR_9, VAR_5, 3, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 1, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 1, 12);

  FUNC_8(VAR_9, 2, 3);

  VAR_12 = FUNC_5(VAR_9, VAR_5, -3, &VAR_11);
  FUNC_11(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == -1, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 0, 0);

  VAR_12 = FUNC_5(VAR_9, VAR_5, -1, &VAR_11);
  FUNC_11(VAR_12 == VAR_2, "got 0x%08x\n", VAR_12);
  FUNC_11(VAR_11 == 0, "got %d\n", VAR_11);
  FUNC_1(VAR_9, 0, 0);

  FUNC_12(&VAR_13, &VAR_7, &VAR_8, ((void*)0));

  VAR_12 = FUNC_3(VAR_10, VAR_5, 1, ((void*)0));
  FUNC_11(VAR_12 == VAR_0, "got 0x%08x\n", VAR_12);

  VAR_12 = FUNC_3(VAR_10, VAR_5, 1, &VAR_11);
  FUNC_11(VAR_12 == VAR_0, "got 0x%08x\n", VAR_12);

  VAR_12 = FUNC_5(VAR_9, VAR_5, 1, ((void*)0));
  FUNC_11(VAR_12 == VAR_0, "got 0x%08x\n", VAR_12);

  VAR_12 = FUNC_5(VAR_9, VAR_5, 1, &VAR_11);
  FUNC_11(VAR_12 == VAR_0, "got 0x%08x\n", VAR_12);

  FUNC_6(VAR_9);
  FUNC_4(VAR_10);
}
