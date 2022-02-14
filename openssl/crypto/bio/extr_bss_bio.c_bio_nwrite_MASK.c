
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio_bio_st {scalar_t__ len; scalar_t__ size; } ;
typedef size_t ossl_ssize_t ;
struct TYPE_4__ {struct bio_bio_st* ptr; } ;
typedef TYPE_1__ BIO ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*,char**) ;

__attribute__((used)) static ossl_ssize_t FUNC_2(BIO *VAR_1, char **VAR_2, size_t VAR_3)
{
    struct bio_bio_st *VAR_4;
    ossl_ssize_t VAR_5, VAR_6;

    if (VAR_3 > VAR_0)
        VAR_5 = VAR_0;
    else
        VAR_5 = (ossl_ssize_t) VAR_3;

    VAR_6 = FUNC_1(VAR_1, VAR_2);
    if (VAR_5 > VAR_6)
        VAR_5 = VAR_6;
    if (VAR_5 <= 0)
        return VAR_5;
    VAR_4 = VAR_1->ptr;
    FUNC_0(VAR_4 != ((void*)0));
    VAR_4->len += VAR_5;
    FUNC_0(VAR_4->len <= VAR_4->size);

    return VAR_5;
}
