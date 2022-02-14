
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_7__ {TYPE_1__* rsa; } ;
struct TYPE_8__ {TYPE_2__ pkey; } ;
struct TYPE_6__ {int * pss; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef int EVP_MD ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int **) ;
 int FUNC_3 (void*,int *,int *,int **) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *,int const**,int const**,int*) ;

__attribute__((used)) static int FUNC_12(EVP_PKEY *VAR_5, int VAR_6, long VAR_7, void *VAR_8)
{
    X509_ALGOR *VAR_9 = ((void*)0);
    const EVP_MD *VAR_10;
    const EVP_MD *VAR_11;
    int VAR_12;

    switch (VAR_6) {

    case 128:
        if (VAR_7 == 0)
            FUNC_3(VAR_8, ((void*)0), ((void*)0), &VAR_9);
        break;

    case 129:
        if (FUNC_6(VAR_5))
            return -2;
        if (VAR_7 == 0)
            FUNC_2(VAR_8, &VAR_9);
        break;

    case 131:
        if (VAR_7 == 0)
            return FUNC_9(VAR_8);
        else if (VAR_7 == 1)
            return FUNC_10(VAR_8);
        break;

    case 133:
        if (FUNC_6(VAR_5))
            return -2;
        if (VAR_7 == 0)
            return FUNC_8(VAR_8);
        else if (VAR_7 == 1)
            return FUNC_7(VAR_8);
        break;

    case 132:
        if (FUNC_6(VAR_5))
            return -2;
        *(int *)VAR_8 = VAR_0;
        return 1;


    case 130:
        if (VAR_5->pkey.rsa->pss != ((void*)0)) {
            if (!FUNC_11(VAR_5->pkey.rsa->pss, &VAR_10, &VAR_11,
                                   &VAR_12)) {
                FUNC_4(0, VAR_1);
                return 0;
            }
            *(int *)VAR_8 = FUNC_0(VAR_10);

            return 2;
        }
        *(int *)VAR_8 = VAR_3;
        return 1;

    default:
        return -2;

    }

    if (VAR_9)
        FUNC_5(VAR_9, FUNC_1(VAR_2), VAR_4, 0);

    return 1;

}
