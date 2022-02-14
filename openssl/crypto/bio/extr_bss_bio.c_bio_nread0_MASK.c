
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bio_bio_st {char* buf; scalar_t__ len; scalar_t__ size; scalar_t__ offset; scalar_t__ request; TYPE_1__* peer; } ;
typedef scalar_t__ ossl_ssize_t ;
struct TYPE_7__ {struct bio_bio_st* ptr; int init; } ;
struct TYPE_6__ {struct bio_bio_st* ptr; } ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int) ;

__attribute__((used)) static ossl_ssize_t FUNC_3(BIO *VAR_0, char **VAR_1)
{
    struct bio_bio_st *VAR_2, *VAR_3;
    ossl_ssize_t VAR_4;

    FUNC_0(VAR_0);

    if (!VAR_0->init)
        return 0;

    VAR_2 = VAR_0->ptr;
    FUNC_1(VAR_2 != ((void*)0));
    FUNC_1(VAR_2->peer != ((void*)0));
    VAR_3 = VAR_2->peer->ptr;
    FUNC_1(VAR_3 != ((void*)0));
    FUNC_1(VAR_3->buf != ((void*)0));

    VAR_3->request = 0;

    if (VAR_3->len == 0) {
        char VAR_5;


        return FUNC_2(VAR_0, &VAR_5, 1);
    }

    VAR_4 = VAR_3->len;
    if (VAR_3->size < VAR_3->offset + VAR_4)

        VAR_4 = VAR_3->size - VAR_3->offset;
    FUNC_1(VAR_4 > 0);

    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_3->buf + VAR_3->offset;
    return VAR_4;
}
