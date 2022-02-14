
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int IUnknown ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int IOleWindow ;
typedef int IOleInPlaceSite ;
typedef int IOleClientSite ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,int **,int **,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_11(void)
{
  HWND VAR_6;
  IRichEditOle *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
  ITextDocument *VAR_9 = ((void*)0);
  IOleClientSite *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
  IOleWindow *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
  IOleInPlaceSite *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
  HRESULT VAR_17;
  LONG VAR_18, VAR_19;

  FUNC_7(&VAR_6, &VAR_7, &VAR_9, ((void*)0));
  VAR_17 = FUNC_6(VAR_7, &VAR_10);
  FUNC_9(VAR_17 == VAR_5, "IRichEditOle_QueryInterface: 0x%08x\n", VAR_17);
  FUNC_0(VAR_10, 1);

  VAR_17 = FUNC_1(VAR_10, &VAR_4, (void **)&VAR_8);
  FUNC_9(VAR_17 == VAR_0, "IOleClientSite_QueryInterface: %x\n", VAR_17);

  VAR_17 = FUNC_6(VAR_7, &VAR_11);
  FUNC_9(VAR_17 == VAR_5, "got 0x%08x\n", VAR_17);
  FUNC_9(VAR_10 != VAR_11, "got %p, %p\n", VAR_10, VAR_11);
  FUNC_2(VAR_11);

  VAR_17 = FUNC_1(VAR_10, &VAR_1, (void **)&VAR_11);
  FUNC_9(VAR_17 == VAR_5, "IOleClientSite_QueryInterface: 0x%08x\n", VAR_17);
  FUNC_9(VAR_10 == VAR_11, "Should not return a new pointer.\n");
  FUNC_0(VAR_10, 2);


  VAR_17 = FUNC_1(VAR_10, &VAR_3, (void **)&VAR_13);
  FUNC_9(VAR_17 == VAR_5, "IOleClientSite_QueryInterface: 0x%08x\n", VAR_17);
  VAR_18 = FUNC_8((IUnknown *)VAR_10);
  VAR_19 = FUNC_8((IUnknown *)VAR_13);
  FUNC_9(VAR_18 == VAR_19, "got wrong ref count.\n");

  VAR_17 = FUNC_1(VAR_10, &VAR_3, (void **)&VAR_14);
  FUNC_9(VAR_17 == VAR_5, "IOleClientSite_QueryInterface: 0x%08x\n", VAR_17);
  FUNC_9(VAR_13 == VAR_14, "Should not return a new pointer.\n");
  VAR_18 = FUNC_8((IUnknown *)VAR_10);
  VAR_19 = FUNC_8((IUnknown *)VAR_13);
  FUNC_9(VAR_18 == VAR_19, "got wrong ref count.\n");

  VAR_17 = FUNC_4(VAR_13, &VAR_1, (void **)&VAR_12);
  FUNC_9(VAR_17 == VAR_5, "IOleWindow_QueryInterface: 0x%08x\n", VAR_17);
  FUNC_9(VAR_12 == VAR_11, "got wrong pointer\n");


  VAR_17 = FUNC_1(VAR_10, &VAR_2, (void **)&VAR_15);
  FUNC_9(VAR_17 == VAR_5, "IOleClientSite_QueryInterface: 0x%08x\n", VAR_17);
  VAR_18 = FUNC_8((IUnknown *)VAR_15);
  VAR_19 = FUNC_8((IUnknown *)VAR_10);
  FUNC_9(VAR_18 == VAR_19, "got wrong ref count.\n");

  VAR_17 = FUNC_1(VAR_10, &VAR_2, (void **)&VAR_16);
  FUNC_9(VAR_17 == VAR_5, "IOleClientSite_QueryInterface: 0x%08x\n", VAR_17);
  FUNC_9(VAR_15 == VAR_16, "Should not return a new pointer.\n");
  FUNC_3(VAR_16);

  VAR_17 = FUNC_4(VAR_13, &VAR_2, (void **)&VAR_16);
  FUNC_9(VAR_17 == VAR_5, "IOleWindow_QueryInterface: 0x%08x\n", VAR_17);
  VAR_18 = FUNC_8((IUnknown *)VAR_16);
  VAR_19 = FUNC_8((IUnknown *)VAR_13);
  FUNC_9(VAR_18 == VAR_19, "got wrong ref count.\n");

  FUNC_3(VAR_16);
  FUNC_3(VAR_15);
  FUNC_5(VAR_14);
  FUNC_5(VAR_13);
  FUNC_2(VAR_12);
  FUNC_2(VAR_11);
  FUNC_2(VAR_10);
  FUNC_10(&VAR_6, &VAR_7, &VAR_9, ((void*)0));
}
