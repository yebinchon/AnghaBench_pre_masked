
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int ITextSelection ;
typedef int ITextRange ;
typedef int ITextFont ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int,int) ;
 int VAR_6 ;
 int FUNC_9 (int *,int **,int **,int **) ;
 int FUNC_10 (int,char*,int,...) ;
 int FUNC_11 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_12(void)
{
  static const CHAR VAR_7[] = "TestSomeText";
  IRichEditOle *VAR_8 = ((void*)0);
  ITextDocument *VAR_9 = ((void*)0);
  ITextSelection *VAR_10, *VAR_11;
  ITextRange *VAR_12, *VAR_13;
  ITextFont *VAR_14;
  LONG VAR_15;
  HRESULT VAR_16;
  HWND VAR_17;

  FUNC_9(&VAR_17, &VAR_8, &VAR_9, &VAR_10);
  FUNC_8(VAR_17, VAR_6, 0, (LPARAM)VAR_7);
  FUNC_8(VAR_17, VAR_1, 1, 2);

  VAR_16 = FUNC_6(VAR_10, ((void*)0));
  FUNC_10(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

  FUNC_0(VAR_10, 2);

  VAR_16 = FUNC_6(VAR_10, &VAR_12);
  FUNC_10(VAR_16 == VAR_5, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_6(VAR_10, &VAR_13);
  FUNC_10(VAR_16 == VAR_5, "got 0x%08x\n", VAR_16);
  FUNC_10(VAR_12 != VAR_13, "got %p, %p\n", *VAR_12, VAR_13);

  FUNC_0(VAR_10, 2);
  FUNC_0(VAR_12, 1);
  FUNC_0(VAR_13, 1);

  FUNC_5(VAR_13);

  VAR_15 = 0;
  VAR_16 = FUNC_3(VAR_12, &VAR_15);
  FUNC_10(VAR_16 == VAR_5, "got 0x%08x\n", VAR_16);
  FUNC_10(VAR_15 == 1, "got %d\n", VAR_15);

  VAR_15 = 0;
  VAR_16 = FUNC_1(VAR_12, &VAR_15);
  FUNC_10(VAR_16 == VAR_5, "got 0x%08x\n", VAR_16);
  FUNC_10(VAR_15 == 2, "got %d\n", VAR_15);

  FUNC_8(VAR_17, VAR_1, 2, 3);

  VAR_15 = 0;
  VAR_16 = FUNC_3(VAR_12, &VAR_15);
  FUNC_10(VAR_16 == VAR_5, "got 0x%08x\n", VAR_16);
  FUNC_10(VAR_15 == 1, "got %d\n", VAR_15);

  VAR_15 = 0;
  VAR_16 = FUNC_1(VAR_12, &VAR_15);
  FUNC_10(VAR_16 == VAR_5, "got 0x%08x\n", VAR_16);
  FUNC_10(VAR_15 == 2, "got %d\n", VAR_15);

  VAR_16 = FUNC_4(VAR_12, &VAR_4, (void**)&VAR_11);
  FUNC_10(VAR_16 == VAR_3, "got 0x%08x\n", VAR_16);

  FUNC_11(&VAR_17, &VAR_8, &VAR_9, ((void*)0));

  VAR_16 = FUNC_6(VAR_10, ((void*)0));
  FUNC_10(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_6(VAR_10, &VAR_12);
  FUNC_10(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

  VAR_16 = FUNC_2(VAR_12, &VAR_14);
  FUNC_10(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

  FUNC_7(VAR_10);
  FUNC_5(VAR_12);
}
