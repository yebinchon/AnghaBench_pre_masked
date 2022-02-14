
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int X509_STORE_CTX ;


 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;



 int FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(int VAR_1, X509_STORE_CTX *VAR_2)
{
    char *VAR_3, VAR_4[256];

    VAR_3 = FUNC_0(FUNC_4(FUNC_1(VAR_2)),
                          VAR_4, sizeof(VAR_4));
    if (VAR_3 != ((void*)0)) {
        if (VAR_1)
            FUNC_7("depth=%d %s\n", FUNC_3(VAR_2), VAR_4);
        else {
            FUNC_6(VAR_0, "depth=%d error=%d %s\n",
                    FUNC_3(VAR_2),
                    FUNC_2(VAR_2), VAR_4);
        }
    }

    if (VAR_1 == 0) {
        int VAR_5 = FUNC_2(VAR_2);

        switch (VAR_5) {
        default:
            FUNC_6(VAR_0, "Error string: %s\n",
                    FUNC_5(VAR_5));
            break;
        case 129:
        case 130:
        case 128:
            VAR_1 = 1;
            break;
        }
    }

    return VAR_1;
}
