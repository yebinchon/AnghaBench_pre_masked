
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int IUnknown ;
typedef int ITextSelection ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
  IRichEditOle *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
  ITextDocument *VAR_14 = ((void*)0);
  ITextSelection *VAR_15 = ((void*)0), *VAR_16;
  IUnknown *VAR_17;
  HRESULT VAR_18;
  LRESULT VAR_19;
  HWND VAR_20;
  ULONG VAR_21;

  VAR_20 = FUNC_11(((void*)0));
  if (!VAR_20) {
    FUNC_13("Couldn't create window\n");
    return;
  }

  VAR_19 = FUNC_10(VAR_20, VAR_1, 0, (LPARAM)&VAR_12);
  FUNC_12(VAR_19, "SendMessage\n");
  FUNC_12(VAR_12 != ((void*)0), "EM_GETOLEINTERFACE\n");
  FUNC_1(VAR_12, 2);

  VAR_19 = FUNC_10(VAR_20, VAR_1, 0, (LPARAM)&VAR_13);
  FUNC_12(VAR_19 == 1, "SendMessage\n");
  FUNC_12(VAR_13 == VAR_12, "Should not return a new IRichEditOle interface\n");
  FUNC_1(VAR_12, 3);

  VAR_18 = FUNC_2(VAR_12, &VAR_8,
                                 (void **) &VAR_14);
  FUNC_12(VAR_18 == VAR_11, "IRichEditOle_QueryInterface\n");
  FUNC_12(VAR_14 != ((void*)0), "IRichEditOle_QueryInterface\n");

  VAR_18 = FUNC_4(VAR_14, ((void*)0));
  FUNC_12(VAR_18 == VAR_2, "ITextDocument_GetSelection: 0x%x\n", VAR_18);

  FUNC_1(VAR_14, 4);

  VAR_18 = FUNC_4(VAR_14, &VAR_15);
  FUNC_12(VAR_18 == VAR_11, "got 0x%08x\n", VAR_18);

  FUNC_1(VAR_14, 4);
  FUNC_1(VAR_15, 2);

  VAR_18 = FUNC_4(VAR_14, &VAR_16);
  FUNC_12(VAR_18 == VAR_11, "got 0x%08x\n", VAR_18);
  FUNC_12(VAR_16 == VAR_15, "got %p, %p\n", VAR_15, VAR_16);

  FUNC_1(VAR_14, 4);
  FUNC_1(VAR_15, 3);

  FUNC_8(VAR_16);

  VAR_17 = ((void*)0);
  VAR_18 = FUNC_7(VAR_15, &VAR_10, (void **) &VAR_17);
  FUNC_12(VAR_18 == VAR_11, "ITextSelection_QueryInterface\n");
  FUNC_12(VAR_17 != ((void*)0), "ITextSelection_QueryInterface\n");
  FUNC_9(VAR_17);

  VAR_17 = ((void*)0);
  VAR_18 = FUNC_7(VAR_15, &VAR_9, (void **) &VAR_17);
  FUNC_12(VAR_18 == VAR_11, "ITextSelection_QueryInterface\n");
  FUNC_12(VAR_17 != ((void*)0), "ITextSelection_QueryInterface\n");
  FUNC_9(VAR_17);

  VAR_17 = ((void*)0);
  VAR_18 = FUNC_7(VAR_15, &VAR_4, (void **) &VAR_17);
  FUNC_12(VAR_18 == VAR_11, "ITextSelection_QueryInterface\n");
  FUNC_12(VAR_17 != ((void*)0), "ITextSelection_QueryInterface\n");
  FUNC_9(VAR_17);

  VAR_17 = ((void*)0);
  VAR_18 = FUNC_2(VAR_12, &VAR_5, (void **) &VAR_17);
  FUNC_12(VAR_18 == VAR_3, "IRichEditOle_QueryInterface\n");

  VAR_17 = ((void*)0);
  VAR_18 = FUNC_2(VAR_12, &VAR_7, (void **) &VAR_17);
  FUNC_12(VAR_18 == VAR_3, "IRichEditOle_QueryInterface\n");

  VAR_17 = ((void*)0);
  VAR_18 = FUNC_2(VAR_12, &VAR_6, (void **) &VAR_17);
  FUNC_12(VAR_18 == VAR_3, "IRichEditOle_QueryInterface\n");

  FUNC_5(VAR_14);
  FUNC_3(VAR_12);
  VAR_21 = FUNC_3(VAR_12);
  FUNC_12(VAR_21 == 1, "got wrong ref count: %d\n", VAR_21);
  FUNC_0(VAR_20);



  VAR_18 = FUNC_6(VAR_15, ((void*)0));
  FUNC_12(VAR_18 == VAR_0, "ITextSelection after ITextDocument destroyed\n");

  FUNC_8(VAR_15);
}
