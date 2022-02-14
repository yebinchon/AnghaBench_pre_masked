
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bio_bio_st {scalar_t__ len; scalar_t__ size; size_t offset; int * buf; scalar_t__ closed; scalar_t__ request; int * peer; } ;
struct TYPE_5__ {struct bio_bio_st* ptr; int init; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_2, const char *VAR_3, int VAR_4)
{
    size_t VAR_5 = VAR_4;
    size_t VAR_6;
    struct bio_bio_st *VAR_7;

    FUNC_0(VAR_2);

    if (!VAR_2->init || VAR_3 == ((void*)0) || VAR_5 == 0)
        return 0;

    VAR_7 = VAR_2->ptr;
    FUNC_3(VAR_7 != ((void*)0));
    FUNC_3(VAR_7->peer != ((void*)0));
    FUNC_3(VAR_7->buf != ((void*)0));

    VAR_7->request = 0;
    if (VAR_7->closed) {

        FUNC_2(VAR_0, VAR_1);
        return -1;
    }

    FUNC_3(VAR_7->len <= VAR_7->size);

    if (VAR_7->len == VAR_7->size) {
        FUNC_1(VAR_2);
        return -1;
    }


    if (VAR_5 > VAR_7->size - VAR_7->len)
        VAR_5 = VAR_7->size - VAR_7->len;



    VAR_6 = VAR_5;

    FUNC_3(VAR_6 > 0);
    do {
        size_t VAR_8;
        size_t VAR_9;

        FUNC_3(VAR_7->len + VAR_6 <= VAR_7->size);

        VAR_8 = VAR_7->offset + VAR_7->len;
        if (VAR_8 >= VAR_7->size)
            VAR_8 -= VAR_7->size;


        if (VAR_8 + VAR_6 <= VAR_7->size)
            VAR_9 = VAR_6;
        else

            VAR_9 = VAR_7->size - VAR_8;

        FUNC_4(VAR_7->buf + VAR_8, VAR_3, VAR_9);

        VAR_7->len += VAR_9;

        FUNC_3(VAR_7->len <= VAR_7->size);

        VAR_6 -= VAR_9;
        VAR_3 += VAR_9;
    }
    while (VAR_6);

    return VAR_5;
}
