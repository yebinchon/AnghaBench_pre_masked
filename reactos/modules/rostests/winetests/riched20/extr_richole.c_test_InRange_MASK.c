
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int ITextSelection ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int,int **) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,int **,int **,int **) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int *,int **,int **,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_9(void)
{
  static const CHAR VAR_7[] = "TestSomeText";
  ITextRange *VAR_8, *VAR_9, *VAR_10;
  IRichEditOle *VAR_11 = ((void*)0);
  ITextDocument *VAR_12 = ((void*)0);
  ITextSelection *VAR_13;
  LONG VAR_14;
  HRESULT VAR_15;
  HWND VAR_16;

  FUNC_6(&VAR_16, &VAR_11, &VAR_12, &VAR_13);
  FUNC_5(VAR_16, VAR_4, 0, (LPARAM)VAR_7);
  FUNC_5(VAR_16, VAR_1, 1, 2);

  VAR_15 = FUNC_0(VAR_12, 0, 4, &VAR_8);
  FUNC_7(VAR_15 == VAR_3, "got 0x%08x\n", VAR_15);

  VAR_15 = FUNC_0(VAR_12, 0, 4, &VAR_9);
  FUNC_7(VAR_15 == VAR_3, "got 0x%08x\n", VAR_15);


  VAR_15 = FUNC_0(VAR_12, 1, 2, &VAR_10);
  FUNC_7(VAR_15 == VAR_3, "got 0x%08x\n", VAR_15);

  VAR_15 = FUNC_1(VAR_8, ((void*)0), ((void*)0));
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_14);
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);

  VAR_15 = FUNC_1(VAR_8, VAR_9, ((void*)0));
  FUNC_7(VAR_15 == VAR_3, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_5;
  VAR_15 = FUNC_1(VAR_8, VAR_9, &VAR_14);
  FUNC_7(VAR_15 == VAR_3, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_6, "got %d\n", VAR_14);


  VAR_15 = FUNC_3(VAR_13, ((void*)0), ((void*)0));
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_3(VAR_13, ((void*)0), &VAR_14);
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);

  VAR_15 = FUNC_3(VAR_13, VAR_9, ((void*)0));
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_3(VAR_13, VAR_9, &VAR_14);
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_3(VAR_13, VAR_10, &VAR_14);
  FUNC_7(VAR_15 == VAR_2, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);


  VAR_14 = VAR_5;
  VAR_15 = FUNC_3(VAR_13, (ITextRange*)VAR_13, &VAR_14);
  FUNC_7(VAR_15 == VAR_3, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_6, "got %d\n", VAR_14);

  FUNC_8(&VAR_16, &VAR_11, &VAR_12, ((void*)0));

  VAR_15 = FUNC_1(VAR_8, ((void*)0), ((void*)0));
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_14);
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);

  VAR_15 = FUNC_1(VAR_8, VAR_9, ((void*)0));
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_1(VAR_8, VAR_9, &VAR_14);
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);


  VAR_15 = FUNC_3(VAR_13, ((void*)0), ((void*)0));
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_3(VAR_13, ((void*)0), &VAR_14);
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);

  VAR_15 = FUNC_3(VAR_13, VAR_9, ((void*)0));
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);

  VAR_14 = VAR_6;
  VAR_15 = FUNC_3(VAR_13, VAR_9, &VAR_14);
  FUNC_7(VAR_15 == VAR_0, "got 0x%08x\n", VAR_15);
  FUNC_7(VAR_14 == VAR_5, "got %d\n", VAR_14);

  FUNC_2(VAR_8);
  FUNC_2(VAR_9);
  FUNC_2(VAR_10);
  FUNC_4(VAR_13);
}
