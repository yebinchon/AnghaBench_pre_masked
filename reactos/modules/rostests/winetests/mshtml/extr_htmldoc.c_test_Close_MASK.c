
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleObject ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_10, BOOL VAR_11)
{
    IOleObject *VAR_12 = ((void*)0);
    HRESULT VAR_13;

    VAR_13 = FUNC_2(VAR_10, &VAR_4, (void**)&VAR_12);
    FUNC_6(VAR_13 == VAR_7, "QueryInterface(IID_IOleObject) failed: %08x\n", VAR_13);
    if(FUNC_1(VAR_13))
        return;

    FUNC_5(VAR_3);
    FUNC_5(VAR_5);
    VAR_9 = VAR_2;
    VAR_13 = FUNC_3(VAR_12, VAR_6);
    FUNC_6(VAR_13 == VAR_7, "Close failed: %08x\n", VAR_13);
    FUNC_0(VAR_3);
    FUNC_0(VAR_5);
    VAR_8 = VAR_2;

    if(VAR_11)
        FUNC_7(VAR_12, VAR_1|VAR_0);

    FUNC_4(VAR_12);
}
