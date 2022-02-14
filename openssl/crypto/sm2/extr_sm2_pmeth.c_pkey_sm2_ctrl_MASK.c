
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {void* id; size_t id_len; int id_set; int * md; int * gen_group; } ;
typedef TYPE_1__ SM2_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,void*,int) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY_CTX *VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
    SM2_PKEY_CTX *VAR_8 = VAR_4->data;
    EC_GROUP *VAR_9;
    uint8_t *VAR_10;

    switch (VAR_5) {
    case 134:
        VAR_9 = FUNC_1(VAR_6);
        if (VAR_9 == ((void*)0)) {
            FUNC_5(VAR_1, VAR_2);
            return 0;
        }
        FUNC_0(VAR_8->gen_group);
        VAR_8->gen_group = VAR_9;
        return 1;

    case 133:
        if (VAR_8->gen_group == ((void*)0)) {
            FUNC_5(VAR_1, VAR_3);
            return 0;
        }
        FUNC_2(VAR_8->gen_group, VAR_6);
        return 1;

    case 129:
        VAR_8->md = VAR_7;
        return 1;

    case 130:
        *(const EVP_MD **)VAR_7 = VAR_8->md;
        return 1;

    case 128:
        if (VAR_6 > 0) {
            VAR_10 = FUNC_4(VAR_6);
            if (VAR_10 == ((void*)0)) {
                FUNC_5(VAR_1, VAR_0);
                return 0;
            }
            FUNC_6(VAR_10, VAR_7, VAR_6);
            FUNC_3(VAR_8->id);
            VAR_8->id = VAR_10;
        } else {

            FUNC_3(VAR_8->id);
            VAR_8->id = ((void*)0);
        }
        VAR_8->id_len = (size_t)VAR_6;
        VAR_8->id_set = 1;
        return 1;

    case 132:
        FUNC_6(VAR_7, VAR_8->id, VAR_8->id_len);
        return 1;

    case 131:
        *(size_t *)VAR_7 = VAR_8->id_len;
        return 1;

    case 135:

        return 1;

    default:
        return -2;
    }
}
