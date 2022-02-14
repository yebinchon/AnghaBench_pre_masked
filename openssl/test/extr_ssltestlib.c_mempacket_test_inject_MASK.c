
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int len; unsigned int num; int type; struct TYPE_12__* data; } ;
struct TYPE_11__ {scalar_t__ duprec; int noinject; int injected; int lastpkt; int pkts; } ;
typedef TYPE_1__ MEMPACKET_TEST_CTX ;
typedef TYPE_2__ MEMPACKET ;
typedef int BIO ;


 TYPE_1__* FUNC_0 (int *) ;
 unsigned char const VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int) ;

int FUNC_8(BIO *VAR_3, const char *VAR_4, int VAR_5, int VAR_6,
                          int VAR_7)
{
    MEMPACKET_TEST_CTX *VAR_8 = FUNC_0(VAR_3);
    MEMPACKET *VAR_9 = ((void*)0), *VAR_10, *VAR_11, *VAR_12[3];
    int VAR_13, VAR_14;
    const unsigned char *VAR_15 = (const unsigned char *)VAR_4;
    size_t VAR_16 = ((VAR_15[VAR_1] << 8) | VAR_15[VAR_2])
                 + VAR_0;

    if (VAR_8 == ((void*)0))
        return -1;

    if ((size_t)VAR_5 < VAR_16)
        return -1;

    if ((size_t)VAR_5 == VAR_16)
        VAR_14 = 0;
    else
        VAR_14 = VAR_8->duprec > 0;


    if (VAR_14 && VAR_6 != -1)
        return -1;


    if (VAR_6 >= 0) {
        if (VAR_8->noinject)
            return -1;
        VAR_8->injected = 1;
    } else {
        VAR_8->noinject = 1;
    }

    for (VAR_13 = 0; VAR_13 < (VAR_14 ? 3 : 1); VAR_13++) {
        if (!FUNC_2(VAR_12[VAR_13] = FUNC_1(sizeof(*VAR_9))))
            goto err;
        VAR_9 = VAR_12[VAR_13];

        if (!FUNC_2(VAR_9->data = FUNC_1(VAR_5)))
            goto err;







        if (VAR_14 && VAR_13 != 2) {
            FUNC_3(VAR_9->data, VAR_4 + VAR_16, VAR_5 - VAR_16);
            VAR_9->len = VAR_5 - VAR_16;
        } else {
            FUNC_3(VAR_9->data, VAR_4, VAR_5);
            VAR_9->len = VAR_5;
        }
        VAR_9->num = (VAR_6 >= 0) ? (unsigned int)VAR_6 : VAR_8->lastpkt + VAR_13;
        VAR_9->type = VAR_7;
    }

    for(VAR_13 = 0; (VAR_10 = FUNC_7(VAR_8->pkts, VAR_13)) != ((void*)0); VAR_13++) {

        if (VAR_10->num > VAR_9->num) {
            if (FUNC_5(VAR_8->pkts, VAR_9, VAR_13) == 0)
                goto err;

            if (VAR_6 >= 0)
                return VAR_5;





            VAR_8->lastpkt++;
            do {
                VAR_13++;
                VAR_11 = FUNC_7(VAR_8->pkts, VAR_13);
                if (VAR_11 != ((void*)0) && VAR_11->num == VAR_8->lastpkt)
                    VAR_8->lastpkt++;
                else
                    return VAR_5;
            } while(1);
        } else if (VAR_10->num == VAR_9->num) {
            if (!VAR_8->noinject) {

                goto err;
            }
            VAR_8->lastpkt++;
            VAR_9->num++;
        }
    }




    for (VAR_13 = 0; VAR_13 < (VAR_14 ? 3 : 1); VAR_13++) {
        VAR_9 = VAR_12[VAR_13];
        if (!FUNC_6(VAR_8->pkts, VAR_9))
            goto err;

        if (VAR_6 < 0)
            VAR_8->lastpkt++;
    }

    return VAR_5;

 err:
    for (VAR_13 = 0; VAR_13 < (VAR_8->duprec > 0 ? 3 : 1); VAR_13++)
        FUNC_4(VAR_12[VAR_13]);
    return -1;
}
