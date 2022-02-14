
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bio_bio_st {scalar_t__ offset; scalar_t__ size; scalar_t__ len; TYPE_1__* peer; } ;
typedef size_t ossl_ssize_t ;
struct TYPE_6__ {struct bio_bio_st* ptr; } ;
struct TYPE_5__ {struct bio_bio_st* ptr; } ;
typedef TYPE_2__ BIO ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_2__*,char**) ;

__attribute__((used)) static ossl_ssize_t FUNC_2(BIO *VAR_1, char **VAR_2, size_t VAR_3)
{
    struct bio_bio_st *VAR_4, *VAR_5;
    ossl_ssize_t VAR_6, VAR_7;

    if (VAR_3 > VAR_0)
        VAR_6 = VAR_0;
    else
        VAR_6 = (ossl_ssize_t) VAR_3;

    VAR_7 = FUNC_1(VAR_1, VAR_2);
    if (VAR_6 > VAR_7)
        VAR_6 = VAR_7;
    if (VAR_6 <= 0)
        return VAR_6;

    VAR_4 = VAR_1->ptr;
    VAR_5 = VAR_4->peer->ptr;

    VAR_5->len -= VAR_6;
    if (VAR_5->len) {
        VAR_5->offset += VAR_6;
        FUNC_0(VAR_5->offset <= VAR_5->size);
        if (VAR_5->offset == VAR_5->size)
            VAR_5->offset = 0;
    } else
        VAR_5->offset = 0;

    return VAR_6;
}
