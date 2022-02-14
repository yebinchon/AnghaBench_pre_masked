
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int * FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (char*,int,int const*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (char const*,char const*) ;

__attribute__((used)) static void FUNC_11(void)
{
    int VAR_3 = FUNC_2(0);
    int VAR_4;
    char *VAR_5 = ((void*)0);
    int VAR_6 = 0;


    for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
        const ASN1_OBJECT *VAR_7 = FUNC_4(VAR_4);
        const char *VAR_8 = FUNC_5(VAR_4);
        const char *VAR_9 = FUNC_3(VAR_4);
        int VAR_10 = 0;






        FUNC_1();

        if (FUNC_6(VAR_7) == VAR_0)
            continue;

        if ((VAR_10 = FUNC_7(((void*)0), 0, VAR_7, 1)) == 0) {
            FUNC_0(VAR_2, "# None-OID object: %s, %s\n", VAR_8, VAR_9);
            continue;
        }
        if (VAR_10 < 0)
            break;

        if (VAR_10 > VAR_6) {
            VAR_5 = FUNC_9(VAR_5, VAR_10 + 1);
            if (VAR_5 == ((void*)0)) {
                FUNC_0(VAR_1, "ERROR: Memory allocation\n");
                break;
            }
            VAR_6 = VAR_10 + 1;
        }
        if (FUNC_7(VAR_5, VAR_6, VAR_7, 1) < 0)
            break;
        if (VAR_9 == ((void*)0) || FUNC_10(VAR_8, VAR_9) == 0)
            FUNC_0(VAR_2, "%s = %s\n", VAR_8, VAR_5);
        else
            FUNC_0(VAR_2, "%s = %s, %s\n", VAR_8, VAR_9, VAR_5);
    }

    FUNC_8(VAR_5);
}
