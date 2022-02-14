
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ,void*,int ,int) ;
 int FUNC_4 (int *) ;
 char const* FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int * FUNC_11 (char const*) ;

ENGINE *FUNC_12(const char *VAR_3, int VAR_4)
{
    ENGINE *VAR_5 = ((void*)0);


    if (VAR_3 != ((void*)0)) {
        if (FUNC_10(VAR_3, "auto") == 0) {
            FUNC_0(VAR_2, "enabling auto ENGINE support\n");
            FUNC_6();
            return ((void*)0);
        }
        if ((VAR_5 = FUNC_1(VAR_3)) == ((void*)0)
            && (VAR_5 = FUNC_11(VAR_3)) == ((void*)0)) {
            FUNC_0(VAR_2, "invalid engine \"%s\"\n", VAR_3);
            FUNC_8(VAR_2);
            return ((void*)0);
        }
        if (VAR_4) {
            FUNC_2(VAR_5, VAR_0, 0, VAR_2, 0);
        }
        FUNC_3(VAR_5, "SET_USER_INTERFACE", 0, (void *)FUNC_9(),
                        0, 1);
        if (!FUNC_7(VAR_5, VAR_1)) {
            FUNC_0(VAR_2, "can't use that engine\n");
            FUNC_8(VAR_2);
            FUNC_4(VAR_5);
            return ((void*)0);
        }

        FUNC_0(VAR_2, "engine \"%s\" set.\n", FUNC_5(VAR_5));
    }

    return VAR_5;
}
