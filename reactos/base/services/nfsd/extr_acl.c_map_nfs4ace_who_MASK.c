
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SID_NAME_USE ;
typedef scalar_t__ PSID ;
typedef char* LPSTR ;
typedef int DWORD ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__,char*,int*,char*,int*,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int FUNC_11(PSID VAR_7, PSID VAR_8, PSID VAR_9, char *VAR_10, char *VAR_11)
{
    int VAR_12 = VAR_5;
    DWORD VAR_13 = 0, VAR_14 = 0;
    SID_NAME_USE VAR_15;
    LPSTR VAR_16 = ((void*)0), VAR_17 = ((void*)0);





    VAR_12 = 0;
    if (VAR_8) {
        if (FUNC_0(VAR_7, VAR_8)) {
            FUNC_3(VAR_3, "map_nfs4ace_who: this is owner's sid\n");
            FUNC_8(VAR_10, VAR_2, FUNC_9(VAR_2)+1);
            return VAR_6;
        }
    }
    if (VAR_9) {
        if (FUNC_0(VAR_7, VAR_9)) {
            FUNC_3(VAR_3, "map_nfs4ace_who: this is group's sid\n");
            FUNC_8(VAR_10, VAR_0, FUNC_9(VAR_0)+1);
            return VAR_6;
        }
    }
    VAR_12 = FUNC_6(VAR_7, VAR_10);
    if (VAR_12) {
        if (!FUNC_10(VAR_10, VAR_1, FUNC_9(VAR_1))) {
            VAR_13 = (DWORD)FUNC_9(VAR_1);
            goto add_domain;
        }
        else
            return VAR_6;
    }

    VAR_12 = FUNC_2(((void*)0), VAR_7, VAR_17, &VAR_13, VAR_16,
        &VAR_14, &VAR_15);
    FUNC_3(VAR_3, "map_nfs4ace_who: LookupAccountSid returned %d GetLastError "
            "%d name len %d domain len %d\n", VAR_12, FUNC_1(),
            VAR_13, VAR_14);
    if (VAR_12)
        return VAR_5;
    VAR_12 = FUNC_1();
    if (VAR_12 != VAR_4)
        return VAR_5;
    VAR_17 = FUNC_7(VAR_13);
    if (VAR_17 == ((void*)0)) {
        VAR_12 = FUNC_1();
        goto out;
    }
    VAR_16 = FUNC_7(VAR_14);
    if (VAR_16 == ((void*)0))
        goto out_free_who;
    VAR_12 = FUNC_2(((void*)0), VAR_7, VAR_17, &VAR_13, VAR_16,
                                &VAR_14, &VAR_15);
    FUNC_5(VAR_16);
    if (!VAR_12) {
        FUNC_4("map_nfs4ace_who: LookupAccountSid failed with %d\n",
                FUNC_1());
        goto out_free_who;
    }
    FUNC_8(VAR_10, VAR_17, VAR_13);
add_domain:
    FUNC_8(VAR_10+VAR_13, "@", sizeof(char));
    FUNC_8(VAR_10+VAR_13+1, VAR_11, FUNC_9(VAR_11)+1);
    FUNC_3(VAR_3, "map_nfs4ace_who: who=%s\n", VAR_10);
    if (VAR_17) FUNC_5(VAR_17);
    VAR_12 = VAR_6;
out:
    return VAR_12;
out_free_who:
    FUNC_5(VAR_17);
    VAR_12 = FUNC_1();
    goto out;
}
