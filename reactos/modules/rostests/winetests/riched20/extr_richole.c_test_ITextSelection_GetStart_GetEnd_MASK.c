
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int ITextSelection ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,int **,int **,int **) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_9(void)
{
  HWND VAR_5;
  IRichEditOle *VAR_6 = ((void*)0);
  ITextDocument *VAR_7 = ((void*)0);
  ITextSelection *VAR_8 = ((void*)0);
  HRESULT VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13;
  static const CHAR VAR_14[] = "TestSomeText";

  FUNC_6(&VAR_5, &VAR_6, &VAR_7, &VAR_8);
  FUNC_5(VAR_5, VAR_4, 0, (LPARAM)VAR_14);

  VAR_10 = 2, VAR_11 = 5;
  FUNC_5(VAR_5, VAR_1, VAR_10, VAR_11);
  VAR_12 = 0xdeadbeef;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetStart\n");
  FUNC_7(VAR_12 == 2, "got wrong start value: %d\n", VAR_12);
  VAR_13 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetEnd\n");
  FUNC_7(VAR_13 == 5, "got wrong end value: %d\n", VAR_13);

  VAR_10 = 5, VAR_11 = 2;
  FUNC_5(VAR_5, VAR_1, VAR_10, VAR_11);
  VAR_12 = 0xdeadbeef;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetStart\n");
  FUNC_7(VAR_12 == 2, "got wrong start value: %d\n", VAR_12);
  VAR_13 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetEnd\n");
  FUNC_7(VAR_13 == 5, "got wrong end value: %d\n", VAR_13);

  VAR_10 = 0, VAR_11 = -1;
  FUNC_5(VAR_5, VAR_1, VAR_10, VAR_11);
  VAR_12 = 0xdeadbeef;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetStart\n");
  FUNC_7(VAR_12 == 0, "got wrong start value: %d\n", VAR_12);
  VAR_13 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetEnd\n");
  FUNC_7(VAR_13 == 13, "got wrong end value: %d\n", VAR_13);

  VAR_10 = 13, VAR_11 = 13;
  FUNC_5(VAR_5, VAR_1, VAR_10, VAR_11);
  VAR_12 = 0xdeadbeef;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetStart\n");
  FUNC_7(VAR_12 == 12, "got wrong start value: %d\n", VAR_12);
  VAR_13 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "ITextSelection_GetEnd\n");
  FUNC_7(VAR_13 == 12, "got wrong end value: %d\n", VAR_13);


  VAR_9 = FUNC_4(VAR_8, 0);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);


  VAR_9 = FUNC_4(VAR_8, 0);
  FUNC_7(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_4(VAR_8, 1);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);



  VAR_9 = FUNC_4(VAR_8, -1);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_4(VAR_8, -1);
  FUNC_7(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_4(VAR_8, 0);
  FUNC_7(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

  VAR_12 = -1;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 0, "got %d\n", VAR_12);


  VAR_9 = FUNC_4(VAR_8, 1);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_3(VAR_8, 3);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_4(VAR_8, 10);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_12 = 0;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 10, "got %d\n", VAR_12);

  VAR_13 = 0;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == 10, "got %d\n", VAR_13);


  VAR_9 = FUNC_4(VAR_8, 50);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_12 = 0;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 12, "got %d\n", VAR_12);

  VAR_13 = 0;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == 12, "got %d\n", VAR_13);


  VAR_9 = FUNC_4(VAR_8, 0);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);


  VAR_9 = FUNC_3(VAR_8, 5);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_3(VAR_8, 5);
  FUNC_7(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);


  VAR_9 = FUNC_3(VAR_8, -1);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_13 = -1;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == 0, "got %d\n", VAR_13);

  VAR_12 = -1;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 0, "got %d\n", VAR_12);


  VAR_9 = FUNC_4(VAR_8, 3);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_3(VAR_8, 1);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_12 = 0;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 1, "got %d\n", VAR_12);

  VAR_13 = 0;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == 1, "got %d\n", VAR_13);


  VAR_9 = FUNC_3(VAR_8, 50);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_12 = 0;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 1, "got %d\n", VAR_12);

  VAR_13 = 0;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == 13, "got %d\n", VAR_13);


  VAR_9 = FUNC_3(VAR_8, 0);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

  VAR_12 = 0;
  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == 0, "got %d\n", VAR_12);

  VAR_13 = 0;
  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == 0, "got %d\n", VAR_13);

  FUNC_8(&VAR_5, &VAR_6, &VAR_7, ((void*)0));


  VAR_9 = FUNC_1(VAR_8, ((void*)0));
  FUNC_7(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_1(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_0(VAR_8, ((void*)0));
  FUNC_7(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_0(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  FUNC_2(VAR_8);
}
