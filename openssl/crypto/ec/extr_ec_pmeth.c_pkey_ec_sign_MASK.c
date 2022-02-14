
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * md; } ;
struct TYPE_8__ {TYPE_2__* pkey; TYPE_4__* data; } ;
struct TYPE_6__ {int * ec; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef TYPE_4__ EC_PKEY_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (int,unsigned char const*,size_t,unsigned char*,unsigned int*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_3, unsigned char *VAR_4, size_t *VAR_5,
                        const unsigned char *VAR_6, size_t VAR_7)
{
    int VAR_8, VAR_9;
    unsigned int VAR_10;
    EC_PKEY_CTX *VAR_11 = VAR_3->data;
    EC_KEY *VAR_12 = VAR_3->pkey->pkey.ec;
    const int VAR_13 = FUNC_1(VAR_12);


    if (!FUNC_4(VAR_13 > 0))
        return 0;

    if (VAR_4 == ((void*)0)) {
        *VAR_5 = (size_t)VAR_13;
        return 1;
    }

    if (*VAR_5 < (size_t)VAR_13) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }

    VAR_9 = (VAR_11->md != ((void*)0)) ? FUNC_3(VAR_11->md) : VAR_2;

    VAR_8 = FUNC_0(VAR_9, VAR_6, VAR_7, VAR_4, &VAR_10, VAR_12);

    if (VAR_8 <= 0)
        return VAR_8;
    *VAR_5 = (size_t)VAR_10;
    return 1;
}
