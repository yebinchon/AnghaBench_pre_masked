
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bio_bio_st {size_t request; size_t len; size_t size; size_t offset; int * buf; scalar_t__ closed; TYPE_1__* peer; } ;
struct TYPE_7__ {struct bio_bio_st* ptr; int init; } ;
struct TYPE_6__ {struct bio_bio_st* ptr; } ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,size_t) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    size_t VAR_3 = VAR_2;
    size_t VAR_4;
    struct bio_bio_st *VAR_5, *VAR_6;

    FUNC_0(VAR_0);

    if (!VAR_0->init)
        return 0;

    VAR_5 = VAR_0->ptr;
    FUNC_2(VAR_5 != ((void*)0));
    FUNC_2(VAR_5->peer != ((void*)0));
    VAR_6 = VAR_5->peer->ptr;
    FUNC_2(VAR_6 != ((void*)0));
    FUNC_2(VAR_6->buf != ((void*)0));

    VAR_6->request = 0;

    if (VAR_1 == ((void*)0) || VAR_3 == 0)
        return 0;

    if (VAR_6->len == 0) {
        if (VAR_6->closed)
            return 0;
        else {
            FUNC_1(VAR_0);
            if (VAR_3 <= VAR_6->size)
                VAR_6->request = VAR_3;
            else



                VAR_6->request = VAR_6->size;
            return -1;
        }
    }


    if (VAR_6->len < VAR_3)
        VAR_3 = VAR_6->len;



    VAR_4 = VAR_3;

    FUNC_2(VAR_4 > 0);
    do {
        size_t VAR_7;

        FUNC_2(VAR_4 <= VAR_6->len);
        if (VAR_6->offset + VAR_4 <= VAR_6->size)
            VAR_7 = VAR_4;
        else

            VAR_7 = VAR_6->size - VAR_6->offset;
        FUNC_2(VAR_6->offset + VAR_7 <= VAR_6->size);

        FUNC_3(VAR_1, VAR_6->buf + VAR_6->offset, VAR_7);

        VAR_6->len -= VAR_7;
        if (VAR_6->len) {
            VAR_6->offset += VAR_7;
            FUNC_2(VAR_6->offset <= VAR_6->size);
            if (VAR_6->offset == VAR_6->size)
                VAR_6->offset = 0;
            VAR_1 += VAR_7;
        } else {

            FUNC_2(VAR_7 == VAR_4);
            VAR_6->offset = 0;
        }
        VAR_4 -= VAR_7;
    }
    while (VAR_4);

    return VAR_3;
}
