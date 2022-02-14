
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int new_val ;
typedef scalar_t__ WCHAR ;
typedef int IMMDevice ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int ERole ;
typedef int EDataFlow ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,scalar_t__**) ;
 scalar_t__ FUNC_4 (int ,scalar_t__ const*,int ,int *,int *,int*) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_7 (int ,int ,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_8(EDataFlow VAR_3, ERole VAR_4, HKEY VAR_5,
                              const WCHAR *VAR_6, WCHAR *VAR_7, IMMDevice *VAR_8)
{
    WCHAR VAR_9[64], *VAR_10;
    DWORD VAR_11;
    HRESULT VAR_12;

    VAR_11 = sizeof(VAR_9);
    if(FUNC_4(VAR_5, VAR_6, 0, ((void*)0),
                (BYTE*)VAR_9, &VAR_11) != VAR_0){
        if(VAR_7[0] != 0){

            if(VAR_8){
                VAR_12 = FUNC_3(VAR_8, &VAR_10);
                if(FUNC_2(VAR_12)){
                    FUNC_1("GetId failed: %08x\n", VAR_12);
                    return VAR_1;
                }
            }else
                VAR_10 = ((void*)0);

            FUNC_7(VAR_3, VAR_4, VAR_10);
            VAR_7[0] = 0;
            FUNC_0(VAR_10);

            return VAR_2;
        }


        return VAR_1;
    }

    if(!FUNC_5(VAR_7, VAR_9)){

        return VAR_1;
    }

    if(VAR_9[0] != 0){

        FUNC_7(VAR_3, VAR_4, VAR_9);
        FUNC_6(VAR_7, VAR_9, sizeof(VAR_9));
        return VAR_2;
    }


    if(VAR_8){
        VAR_12 = FUNC_3(VAR_8, &VAR_10);
        if(FUNC_2(VAR_12)){
            FUNC_1("GetId failed: %08x\n", VAR_12);
            return VAR_1;
        }
    }else
        VAR_10 = ((void*)0);

    FUNC_7(VAR_3, VAR_4, VAR_10);
    VAR_7[0] = 0;
    FUNC_0(VAR_10);

    return VAR_2;
}
