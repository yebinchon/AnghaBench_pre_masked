
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWinInetHttpInfo ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int,int*,int*,int *,int *) ;
 int FUNC_1 (int *,int ,int*,int*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int,char*,int,...) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void FUNC_3(IWinInetHttpInfo *VAR_18, DWORD VAR_19)
{
    DWORD VAR_20, VAR_21;
    HRESULT VAR_22, VAR_23;


    if(VAR_19 == VAR_5)
        return;

    if(VAR_17==VAR_7 && VAR_16==VAR_0
            && VAR_19!=VAR_3)
        VAR_23 = VAR_6;
    else if(VAR_17 == VAR_7)
        VAR_23 = VAR_14;
    else
        VAR_23 = VAR_15;

    VAR_21 = sizeof(DWORD);
    VAR_22 = FUNC_0(VAR_18, VAR_9|VAR_8,
            &VAR_20, &VAR_21, ((void*)0), ((void*)0));
    FUNC_2(VAR_22 == VAR_23 || ((VAR_19 == VAR_1 || VAR_19 == VAR_4) && VAR_22 == VAR_14),
       "progress %u: hres = %x, expected %x\n", VAR_19, VAR_22, VAR_23);
    if(VAR_22 == VAR_15) {
        if(VAR_16 == VAR_0 && VAR_19 != VAR_3 && VAR_19 != VAR_2)
            FUNC_2(VAR_20 == 0, "progress %u: status = %d\n", VAR_19, VAR_20);
        else
            FUNC_2(VAR_20 == VAR_10, "progress %u: status = %d\n", VAR_19, VAR_20);
        FUNC_2(VAR_21 == sizeof(DWORD), "size = %d\n", VAR_21);
    }

    VAR_21 = sizeof(DWORD);
    VAR_22 = FUNC_1(VAR_18, VAR_13, &VAR_20, &VAR_21);
    if(VAR_17 == VAR_7) {
        if(VAR_16==VAR_0 && VAR_19!=VAR_3)
            FUNC_2(VAR_22 == VAR_6, "hres = %x\n", VAR_22);
        else
            FUNC_2(VAR_22 == VAR_15, "hres = %x\n", VAR_22);

        if(VAR_22 == VAR_15)
            FUNC_2(VAR_20 == VAR_11, "status = %d\n", VAR_20);
    } else {
        FUNC_2(VAR_22 == VAR_15, "hres = %x\n", VAR_22);
        FUNC_2(VAR_20 == VAR_12, "status = %d\n", VAR_20);
    }
}
