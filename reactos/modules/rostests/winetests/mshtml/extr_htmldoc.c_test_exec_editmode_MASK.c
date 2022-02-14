
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IOleCommandTarget ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int * VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 void* VAR_28 ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(IUnknown *VAR_29, BOOL VAR_30)
{
    IOleCommandTarget *VAR_31;
    HRESULT VAR_32;

    VAR_32 = FUNC_6(VAR_29, &VAR_11, (void**)&VAR_31);
    FUNC_8(VAR_32 == VAR_21, "QueryInterface(IID_IOleCommandTarget) failed: %08x\n", VAR_32);
    if(FUNC_3(VAR_32))
        return;

    VAR_25 = VAR_24;

    if(VAR_30) {
        VAR_27 = VAR_18;
        FUNC_7(VAR_6);
    }
    FUNC_7(VAR_22);
    FUNC_7(VAR_4);
    FUNC_7(VAR_8);
    if(VAR_30)
        FUNC_7(VAR_7);
    FUNC_7(VAR_15);
    FUNC_7(VAR_14);
    FUNC_7(VAR_20);
    FUNC_7(VAR_16);
    FUNC_7(VAR_17);
    FUNC_7(VAR_5);
    if(VAR_30)
        FUNC_7(VAR_0);
    FUNC_7(VAR_13);
    FUNC_7(VAR_9);
    FUNC_7(VAR_23);
    FUNC_7(VAR_12);

    VAR_26 = ((void*)0);
    VAR_28 = VAR_24;

    VAR_32 = FUNC_4(VAR_31, &VAR_1, VAR_10,
            VAR_19, ((void*)0), ((void*)0));
    FUNC_8(VAR_32 == VAR_21, "Exec failed: %08x\n", VAR_32);

    if(VAR_30)
        FUNC_0(VAR_6);
    FUNC_0(VAR_22);
    FUNC_0(VAR_4);
    FUNC_0(VAR_8);
    if(VAR_30)
        FUNC_0(VAR_7);
    FUNC_0(VAR_15);
    FUNC_0(VAR_14);
    FUNC_0(VAR_20);
    FUNC_0(VAR_16);
    FUNC_2(VAR_17);
    FUNC_1(VAR_5);
    if(VAR_30)
        FUNC_0(VAR_0);
    FUNC_0(VAR_13);
    FUNC_0(VAR_9);
    FUNC_0(VAR_23);
    FUNC_0(VAR_12);

    FUNC_9(VAR_3|VAR_2);

    FUNC_5(VAR_31);

    VAR_32 = FUNC_4(VAR_31, &VAR_1, VAR_10,
            VAR_19, ((void*)0), ((void*)0));
    FUNC_8(VAR_32 == VAR_21, "Exec failed: %08x\n", VAR_32);
}
