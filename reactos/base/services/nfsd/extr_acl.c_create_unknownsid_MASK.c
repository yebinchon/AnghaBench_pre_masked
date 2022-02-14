
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WELL_KNOWN_SID_TYPE ;
typedef int * PSID ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,int,int,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(WELL_KNOWN_SID_TYPE VAR_4, PSID *VAR_5,
                             DWORD *VAR_6)
{
    int VAR_7;
    *VAR_6 = 0;
    *VAR_5 = ((void*)0);

    VAR_7 = FUNC_0(VAR_4, ((void*)0), *VAR_5, VAR_6);
    FUNC_2(VAR_0, "create_unknownsid: CreateWellKnownSid type %d returned %d "
            "GetLastError %d sid len %d needed\n", VAR_4, VAR_7,
            FUNC_1(), *VAR_6);
    if (VAR_7)
        return VAR_2;
    VAR_7 = FUNC_1();
    if (VAR_7 != VAR_1)
        return VAR_7;
    *VAR_5 = FUNC_5(*VAR_6);
    if (*VAR_5 == ((void*)0))
        return VAR_1;
    VAR_7 = FUNC_0(VAR_4, ((void*)0), *VAR_5, VAR_6);
    if (VAR_7)
        return VAR_3;
    FUNC_4(*VAR_5);
    VAR_7 = FUNC_1();
    FUNC_3("create_unknownsid: CreateWellKnownSid failed with %d\n", VAR_7);
    return VAR_7;
}
