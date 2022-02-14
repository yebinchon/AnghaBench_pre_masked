
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int IUri ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int **) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ,int *,int,int *,scalar_t__,int *,int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_8(IUri *VAR_6, BYTE *VAR_7, DWORD *VAR_8, DWORD VAR_9)
{
    DWORD VAR_10;
    HRESULT VAR_11;
    DWORD VAR_12;

    if(VAR_9 == VAR_4)
        return VAR_1;

    VAR_11 = FUNC_3(VAR_6, &VAR_12);
    if(FUNC_0(VAR_11))
        return VAR_11;


    if(!FUNC_7(VAR_12) && VAR_12 != VAR_5) {
        BSTR VAR_13;

        VAR_11 = FUNC_1(VAR_6, &VAR_13);
        if(FUNC_0(VAR_11))
            return VAR_11;

        VAR_10 = FUNC_6(VAR_0, 0, VAR_13, -1, ((void*)0), 0, ((void*)0), ((void*)0))-1;

        if(VAR_10+sizeof(DWORD) > *VAR_8) {
            FUNC_5(VAR_13);
            return VAR_2;
        }

        FUNC_6(VAR_0, 0, VAR_13, -1, (LPSTR)VAR_7, VAR_10, ((void*)0), ((void*)0));
        FUNC_5(VAR_13);

        *(DWORD*)(VAR_7+VAR_10) = VAR_9;
    } else {
        BSTR VAR_14, VAR_15;
        DWORD VAR_16, VAR_17;
        BYTE *VAR_18;

        VAR_11 = FUNC_2(VAR_6, &VAR_14);
        if(FUNC_0(VAR_11))
            return VAR_11;


        if(VAR_12 == VAR_5 && !*VAR_14) {
            FUNC_5(VAR_14);
            return VAR_1;
        }

        VAR_11 = FUNC_4(VAR_6, &VAR_15);
        if(FUNC_0(VAR_11)) {
            FUNC_5(VAR_14);
            return VAR_11;
        }

        VAR_16 = FUNC_6(VAR_0, 0, VAR_14, -1, ((void*)0), 0, ((void*)0), ((void*)0))-1;
        VAR_17 = FUNC_6(VAR_0, 0, VAR_15, -1, ((void*)0), 0, ((void*)0), ((void*)0))-1;

        VAR_10 = VAR_16+VAR_17+sizeof(BYTE);

        if(VAR_10+sizeof(DWORD) > *VAR_8) {
            FUNC_5(VAR_14);
            FUNC_5(VAR_15);
            return VAR_2;
        }

        FUNC_6(VAR_0, 0, VAR_15, -1, (LPSTR)VAR_7, VAR_10, ((void*)0), ((void*)0));
        FUNC_5(VAR_15);

        VAR_18 = VAR_7+VAR_17;
        *VAR_18++ = ':';

        FUNC_6(VAR_0, 0, VAR_14, -1, (LPSTR)VAR_18, VAR_16, ((void*)0), ((void*)0));
        FUNC_5(VAR_14);

        VAR_18 += VAR_16;

        *(DWORD*)VAR_18 = VAR_9;
    }

    *VAR_8 = VAR_10+sizeof(DWORD);

    return VAR_3;
}
