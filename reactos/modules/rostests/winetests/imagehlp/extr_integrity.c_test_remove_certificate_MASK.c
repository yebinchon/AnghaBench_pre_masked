
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 (scalar_t__,int ,int*,int *,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (char*,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(int VAR_8)
{
    DWORD VAR_9 = 0, VAR_10 = 0;
    HANDLE VAR_11;
    BOOL VAR_12;

    VAR_11 = FUNC_1(VAR_7, VAR_3 | VAR_4, VAR_2, ((void*)0), VAR_6, VAR_1, ((void*)0));

    if (VAR_11 == VAR_5)
    {
        FUNC_6("Unable to open %s, skipping test\n", VAR_7);
        return;
    }

    VAR_12 = FUNC_4(VAR_11, VAR_0, &VAR_9, ((void*)0), 0);
    FUNC_3 (VAR_12, "Unable to enumerate certificates in file; err=%x\n", FUNC_2());
    VAR_12 = FUNC_5(VAR_11, VAR_8);
    FUNC_3 (VAR_12, "Unable to remove certificate from file; err=%x\n", FUNC_2());


    FUNC_4(VAR_11, VAR_0, &VAR_10, ((void*)0), 0);
    FUNC_3 (VAR_10 == VAR_9 - 1, "Certificate count mismatch; orig=%d new=%d\n", VAR_9, VAR_10);

    FUNC_0(VAR_11);
}
