
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int ITextSelection ;
typedef int ITextRange ;
typedef int ITextFont ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int,int **) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ,int ,int,int) ;
 int VAR_4 ;
 int FUNC_11 (int *,int **,int **,int **) ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int FUNC_13 (int *,int **,int **,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_14(void)
{
  static const CHAR VAR_7[] = "TestSomeText";
  IRichEditOle *VAR_8 = ((void*)0);
  ITextDocument *VAR_9 = ((void*)0);
  ITextSelection *VAR_10;
  ITextRange *VAR_11, *VAR_12;
  ITextFont *VAR_13, *VAR_14;
  LONG VAR_15;
  HRESULT VAR_16;
  HWND VAR_17;

  FUNC_11(&VAR_17, &VAR_8, &VAR_9, &VAR_10);
  FUNC_10(VAR_17, VAR_4, 0, (LPARAM)VAR_7);
  FUNC_10(VAR_17, VAR_1, 1, 2);

  VAR_16 = FUNC_1(VAR_9, 0, 4, &VAR_11);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_1(VAR_9, 5, 2, &VAR_12);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);

  FUNC_0(VAR_11, 1);
  VAR_16 = FUNC_5(VAR_11, &VAR_13);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);
  FUNC_0(VAR_11, 2);

  FUNC_0(VAR_12, 1);
  VAR_16 = FUNC_5(VAR_12, &VAR_14);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);
  FUNC_0(VAR_12, 2);

  VAR_16 = FUNC_7(VAR_11, ((void*)0));
  FUNC_12(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);


  FUNC_0(VAR_11, 2);
  VAR_16 = FUNC_7(VAR_11, VAR_13);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);
  FUNC_0(VAR_11, 2);

  FUNC_0(VAR_12, 2);
  FUNC_0(VAR_11, 2);
  VAR_16 = FUNC_7(VAR_11, VAR_14);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);
  FUNC_0(VAR_12, 2);
  FUNC_0(VAR_11, 2);


  VAR_15 = VAR_6;
  VAR_16 = FUNC_2(VAR_13, &VAR_15);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);
  FUNC_12(VAR_15 == VAR_5, "got %d\n", VAR_15);


  VAR_16 = FUNC_4(VAR_14, VAR_6);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_7(VAR_11, VAR_14);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);

  VAR_15 = VAR_5;
  VAR_16 = FUNC_2(VAR_13, &VAR_15);
  FUNC_12(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);
  FUNC_12(VAR_15 == VAR_6, "got %d\n", VAR_15);

  FUNC_13(&VAR_17, &VAR_8, &VAR_9, ((void*)0));

  VAR_16 = FUNC_7(VAR_11, ((void*)0));
  FUNC_12(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_7(VAR_11, VAR_13);
  FUNC_12(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_9(VAR_10, ((void*)0));
  FUNC_12(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_9(VAR_10, VAR_13);
  FUNC_12(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

  FUNC_3(VAR_13);
  FUNC_3(VAR_14);
  FUNC_6(VAR_11);
  FUNC_6(VAR_12);
  FUNC_8(VAR_10);
}
