
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleObject ;
typedef int IOleDocumentView ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(IOleObject *VAR_9)
{
    IOleDocumentView *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_3(VAR_9, &VAR_0, (void **)&VAR_10);
    FUNC_5(VAR_11 == VAR_4, "IOleObject_QueryInterface failed with error 0x%08x\n", VAR_11);

    FUNC_4(VAR_3);
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
    FUNC_4(VAR_2);
    FUNC_4(VAR_1);
    VAR_8 = ((void*)0);

    VAR_11 = FUNC_2(VAR_10, VAR_7);
    FUNC_5(VAR_11 == VAR_4, "IOleDocumentView_UIActivate failed with error 0x%08x\n", VAR_11);

    FUNC_0(VAR_3);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    FUNC_0(VAR_2);
    FUNC_0(VAR_1);

    FUNC_1(VAR_10);
}
