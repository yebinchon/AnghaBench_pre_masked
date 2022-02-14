
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SID_NAME_USE ;
typedef int * PSID ;
typedef int * LPSTR ;
typedef int LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int *,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,int **,int *) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(DWORD *VAR_4, PSID *VAR_5, LPCSTR VAR_6)
{
    int VAR_7 = VAR_1;
    SID_NAME_USE VAR_8;
    LPSTR VAR_9 = ((void*)0);
    DWORD VAR_10 = 0;

    VAR_7 = FUNC_4(((void*)0), VAR_6, ((void*)0), VAR_4, ((void*)0), &VAR_10, &VAR_8);
    FUNC_6(VAR_0, "map_name_2_sid: LookupAccountName for %s returned %d "
            "GetLastError %d name len %d domain len %d\n", VAR_6, VAR_7,
            FUNC_1(), *VAR_4, VAR_10);
    if (VAR_7)
        return VAR_1;

    VAR_7 = FUNC_1();
    switch(VAR_7) {
    case 129:
        *VAR_5 = FUNC_9(*VAR_4);
        if (*VAR_5 == ((void*)0)) {
            VAR_7 = FUNC_1();
            goto out;
        }
        VAR_9 = (LPSTR) FUNC_9(VAR_10);
        if (VAR_9 == ((void*)0))
            goto out_free_sid;
        VAR_7 = FUNC_4(((void*)0), VAR_6, *VAR_5, VAR_4, VAR_9,
                                    &VAR_10, &VAR_8);
        FUNC_8(VAR_9);
        if (!VAR_7) {
            FUNC_7("map_name_2_sid: LookupAccountName for %s failed "
                    "with %d\n", VAR_6, FUNC_1());
            goto out_free_sid;
        } else {
        }
        VAR_7 = VAR_2;
        break;
    case 128:
        VAR_7 = FUNC_5(VAR_3, VAR_5, VAR_4);
        if (VAR_7)
            goto out_free_sid;
    }
out:
    return VAR_7;
out_free_sid:
    VAR_7 = FUNC_1();
    FUNC_8(*VAR_5);
    goto out;
}
