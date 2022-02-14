
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* dfinal ) (int ,unsigned char*,size_t*,size_t) ;int (* final ) (TYPE_1__*,unsigned char*) ;int ctx_size; int (* cleanup ) (TYPE_1__*) ;int * prov; } ;
struct TYPE_7__ {TYPE_4__* digest; int md_data; int provctx; } ;
typedef TYPE_1__ EVP_MD_CTX ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 size_t FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 size_t VAR_4 ;
 int FUNC_5 (int ,unsigned char*,size_t*,size_t) ;
 int FUNC_6 (TYPE_1__*,unsigned char*) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(EVP_MD_CTX *VAR_5, unsigned char *VAR_6, unsigned int *VAR_7)
{
    int VAR_8;
    size_t VAR_9 = 0;
    size_t VAR_10 = FUNC_1(VAR_5->digest);

    if (VAR_5->digest == ((void*)0) || VAR_5->digest->prov == ((void*)0))
        goto legacy;

    if (VAR_5->digest->dfinal == ((void*)0)) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }

    VAR_8 = VAR_5->digest->dfinal(VAR_5->provctx, VAR_6, &VAR_9, VAR_10);

    if (VAR_7 != ((void*)0)) {
        if (VAR_9 <= VAR_4) {
            *VAR_7 = (int)VAR_9;
        } else {
            FUNC_2(VAR_0, VAR_3);
            VAR_8 = 0;
        }
    }

    return VAR_8;


 legacy:
    FUNC_3(VAR_10 <= VAR_1);
    VAR_8 = VAR_5->digest->final(VAR_5, VAR_6);
    if (VAR_7 != ((void*)0))
        *VAR_7 = VAR_10;
    if (VAR_5->digest->cleanup) {
        VAR_5->digest->cleanup(VAR_5);
        FUNC_0(VAR_5, VAR_2);
    }
    FUNC_4(VAR_5->md_data, VAR_5->digest->ctx_size);
    return VAR_8;
}
