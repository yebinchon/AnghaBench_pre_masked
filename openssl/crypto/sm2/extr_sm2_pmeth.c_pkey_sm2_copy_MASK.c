
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* data; } ;
struct TYPE_7__ {int md; int id_set; int id_len; int * id; int * gen_group; } ;
typedef TYPE_1__ SM2_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_2, const EVP_PKEY_CTX *VAR_3)
{
    SM2_PKEY_CTX *VAR_4, *VAR_5;

    if (!FUNC_5(VAR_2))
        return 0;
    VAR_5 = VAR_3->data;
    VAR_4 = VAR_2->data;
    if (VAR_5->gen_group != ((void*)0)) {
        VAR_4->gen_group = FUNC_0(VAR_5->gen_group);
        if (VAR_4->gen_group == ((void*)0)) {
            FUNC_4(VAR_2);
            return 0;
        }
    }
    if (VAR_5->id != ((void*)0)) {
        VAR_4->id = FUNC_1(VAR_5->id_len);
        if (VAR_4->id == ((void*)0)) {
            FUNC_2(VAR_1, VAR_0);
            FUNC_4(VAR_2);
            return 0;
        }
        FUNC_3(VAR_4->id, VAR_5->id, VAR_5->id_len);
    }
    VAR_4->id_len = VAR_5->id_len;
    VAR_4->id_set = VAR_5->id_set;
    VAR_4->md = VAR_5->md;

    return 1;
}
