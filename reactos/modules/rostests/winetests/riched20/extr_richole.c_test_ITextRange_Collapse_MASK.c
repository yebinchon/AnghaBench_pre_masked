
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
 int FUNC_0 (int *,int,int,int **) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int **,int **,int *) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int *,int **,int **,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(void)
{
  HWND VAR_9;
  IRichEditOle *VAR_10 = ((void*)0);
  ITextDocument *VAR_11 = ((void*)0);
  ITextRange *VAR_12 = ((void*)0);
  HRESULT VAR_13;
  LONG VAR_14, VAR_15, VAR_16, VAR_17;
  static const CHAR VAR_18[] = "TestSomeText";

  FUNC_6(&VAR_9, &VAR_10, &VAR_11, ((void*)0));
  FUNC_5(VAR_9, VAR_3, 0, (LPARAM)VAR_18);

  VAR_14 = 4, VAR_15 = 8;
  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, VAR_7);
  FUNC_7(VAR_13 == VAR_2, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 4, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 4, "got wrong end value: %d\n", VAR_17);
  FUNC_4(VAR_12);

  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_7(VAR_13 == VAR_2, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 4, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 4, "got wrong end value: %d\n", VAR_17);
  FUNC_4(VAR_12);

  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, VAR_5);
  FUNC_7(VAR_13 == VAR_2, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 8, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 8, "got wrong end value: %d\n", VAR_17);
  FUNC_4(VAR_12);

  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, VAR_4);
  FUNC_7(VAR_13 == VAR_2, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 8, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 8, "got wrong end value: %d\n", VAR_17);
  FUNC_4(VAR_12);


  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, 256);
  FUNC_7(VAR_13 == VAR_2, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 4, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 4, "got wrong end value: %d\n", VAR_17);
  FUNC_4(VAR_12);

  VAR_14 = 6, VAR_15 = 6;
  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, VAR_4);
  FUNC_7(VAR_13 == VAR_1, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 6, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 6, "got wrong end value: %d\n", VAR_17);
  FUNC_4(VAR_12);

  VAR_14 = 8, VAR_15 = 8;
  VAR_13 = FUNC_0(VAR_11, VAR_14, VAR_15, &VAR_12);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_7(VAR_13 == VAR_1, "ITextRange_Collapse\n");
  VAR_13 = FUNC_3(VAR_12, &VAR_16);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_16 == 8, "got wrong start value: %d\n", VAR_16);
  VAR_13 = FUNC_2(VAR_12, &VAR_17);
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_17 == 8, "got wrong end value: %d\n", VAR_17);

  FUNC_8(&VAR_9, &VAR_10, &VAR_11, ((void*)0));

  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_7(VAR_13 == VAR_0, "got 0x%08x\n", VAR_13);

  VAR_13 = FUNC_1(VAR_12, VAR_8);
  FUNC_7(VAR_13 == VAR_0, "got 0x%08x\n", VAR_13);

  FUNC_4(VAR_12);
}
