
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int LPARAM ;
typedef int LONG ;
typedef int ITextSelection ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int,int) ;
 int VAR_5 ;
 int FUNC_3 (int *,int **,int **,int **) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *,int **,int **,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_6(void)
{
  HWND VAR_11;
  IRichEditOle *VAR_12 = ((void*)0);
  ITextDocument *VAR_13 = ((void*)0);
  ITextSelection *VAR_14 = ((void*)0);
  HRESULT VAR_15;
  LONG VAR_16, VAR_17, VAR_18, VAR_19;
  static const CHAR VAR_20[] = "TestSomeText";

  FUNC_3(&VAR_11, &VAR_12, &VAR_13, &VAR_14);
  FUNC_2(VAR_11, VAR_5, 0, (LPARAM)VAR_20);

  VAR_16 = 4, VAR_17 = 8;
  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, VAR_9);
  FUNC_4(VAR_15 == VAR_4, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 4, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 4, "got wrong end value: %d\n", VAR_19);

  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, VAR_8);
  FUNC_4(VAR_15 == VAR_4, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 4, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 4, "got wrong end value: %d\n", VAR_19);

  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, VAR_7);
  FUNC_4(VAR_15 == VAR_4, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 8, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 8, "got wrong end value: %d\n", VAR_19);

  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, VAR_6);
  FUNC_4(VAR_15 == VAR_4, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 8, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 8, "got wrong end value: %d\n", VAR_19);


  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, 256);
  FUNC_4(VAR_15 == VAR_4, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 4, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 4, "got wrong end value: %d\n", VAR_19);

  VAR_16 = 6, VAR_17 = 6;
  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, VAR_6);
  FUNC_4(VAR_15 == VAR_3, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 6, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 6, "got wrong end value: %d\n", VAR_19);

  VAR_16 = 8, VAR_17 = 8;
  FUNC_2(VAR_11, VAR_2, VAR_16, VAR_17);
  VAR_15 = FUNC_0(VAR_14, VAR_8);
  FUNC_4(VAR_15 == VAR_3, "ITextSelection_Collapse\n");
  FUNC_2(VAR_11, VAR_1, (LPARAM)&VAR_18, (WPARAM)&VAR_19);
  FUNC_4(VAR_18 == 8, "got wrong start value: %d\n", VAR_18);
  FUNC_4(VAR_19 == 8, "got wrong end value: %d\n", VAR_19);

  FUNC_5(&VAR_11, &VAR_12, &VAR_13, ((void*)0));

  VAR_15 = FUNC_0(VAR_14, VAR_8);
  FUNC_4(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);

  VAR_15 = FUNC_0(VAR_14, VAR_10);
  FUNC_4(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);

  FUNC_1(VAR_14);
}
