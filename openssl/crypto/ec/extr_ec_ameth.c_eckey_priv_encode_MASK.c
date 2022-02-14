
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ec; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_KEY ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ,int,void*,unsigned char*,int) ;
 int FUNC_7 (int*,void**,int *) ;
 int FUNC_8 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_9(PKCS8_PRIV_KEY_INFO *VAR_6, const EVP_PKEY *VAR_7)
{
    EC_KEY VAR_8 = *(VAR_7->pkey.ec);
    unsigned char *VAR_9, *VAR_10;
    int VAR_11, VAR_12;
    void *VAR_13;
    unsigned int VAR_14;

    if (!FUNC_7(&VAR_12, &VAR_13, &VAR_8)) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }







    VAR_14 = FUNC_0(&VAR_8);
    FUNC_1(&VAR_8, VAR_14 | VAR_1);

    VAR_11 = FUNC_8(&VAR_8, ((void*)0));
    if (!VAR_11) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }
    VAR_9 = FUNC_5(VAR_11);
    if (VAR_9 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_4);
        return 0;
    }
    VAR_10 = VAR_9;
    if (!FUNC_8(&VAR_8, &VAR_10)) {
        FUNC_4(VAR_9);
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }

    if (!FUNC_6(VAR_6, FUNC_3(VAR_5), 0,
                         VAR_12, VAR_13, VAR_9, VAR_11)) {
        FUNC_4(VAR_9);
        return 0;
    }

    return 1;
}
