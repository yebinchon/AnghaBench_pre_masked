
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE_CTX ;
typedef int X509 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_11(int VAR_3, X509_STORE_CTX *VAR_4)
{
    int VAR_5 = FUNC_5(VAR_4);
    X509 *VAR_6 = FUNC_4(VAR_4);

    if (!VAR_3) {
        if (VAR_6 != ((void*)0)) {
            FUNC_2(VAR_1,
                            FUNC_7(VAR_6),
                            0, FUNC_9());
            FUNC_0(VAR_1, "\n");
        }
        FUNC_0(VAR_1, "%serror %d at %d depth lookup: %s\n",
               FUNC_3(VAR_4) ? "[CRL path] " : "",
               VAR_5,
               FUNC_6(VAR_4),
               FUNC_8(VAR_5));







        switch (VAR_5) {
        case 130:
            FUNC_10(VAR_4);

        case 137:

        case 134:

        case 133:
        case 132:
        case 129:
        case 131:
        case 136:
        case 135:
        case 128:
            VAR_3 = 1;
        }

        return VAR_3;

    }
    if (VAR_5 == VAR_0 && VAR_3 == 2)
        FUNC_10(VAR_4);
    if (!VAR_2)
        FUNC_1();
    return VAR_3;
}
