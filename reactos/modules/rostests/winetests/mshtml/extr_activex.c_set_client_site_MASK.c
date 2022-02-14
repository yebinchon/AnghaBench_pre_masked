
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleObject ;
typedef int IHlinkTarget ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int,char*,scalar_t__) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_11(IHTMLDocument2 *VAR_6, BOOL VAR_7)
{
    IOleObject *VAR_8;
    HRESULT VAR_9;

    if(!VAR_7 && VAR_5) {
        FUNC_6(VAR_5, VAR_1);
        FUNC_3(VAR_5, 0);
        FUNC_5(VAR_5, ((void*)0));
        FUNC_4(VAR_5);
        VAR_5 = ((void*)0);
    }

    VAR_9 = FUNC_0(VAR_6, &VAR_3, (void**)&VAR_8);
    FUNC_10(VAR_9 == VAR_4, "Could not et IOleObject: %08x\n", VAR_9);

    VAR_9 = FUNC_9(VAR_8, VAR_7 ? &VAR_0 : ((void*)0));
    FUNC_10(VAR_9 == VAR_4, "SetClientSite failed: %08x\n", VAR_9);

    if(VAR_7) {
        IHlinkTarget *VAR_10;

        VAR_9 = FUNC_7(VAR_8, &VAR_2, (void**)&VAR_10);
        FUNC_10(VAR_9 == VAR_4, "Could not get IHlinkTarget iface: %08x\n", VAR_9);

        VAR_9 = FUNC_1(VAR_10, 0, ((void*)0));
        FUNC_10(VAR_9 == VAR_4, "Navgate failed: %08x\n", VAR_9);

        FUNC_2(VAR_10);
    }

    FUNC_8(VAR_8);
}
