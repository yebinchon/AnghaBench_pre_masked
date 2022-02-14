
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * next_bio; scalar_t__ ptr; } ;
struct TYPE_6__ {int ibuf_len; char* ibuf; size_t ibuf_off; int ibuf_size; } ;
typedef TYPE_1__ BIO_F_BUFFER_CTX ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0;
    BIO_F_BUFFER_CTX *VAR_5;

    if (VAR_1 == ((void*)0))
        return 0;
    VAR_5 = (BIO_F_BUFFER_CTX *)VAR_0->ptr;

    if ((VAR_5 == ((void*)0)) || (VAR_0->next_bio == ((void*)0)))
        return 0;
    VAR_4 = 0;
    FUNC_0(VAR_0);

 start:
    VAR_3 = VAR_5->ibuf_len;

    if (VAR_3 != 0) {
        if (VAR_3 > VAR_2)
            VAR_3 = VAR_2;
        FUNC_3(VAR_1, &(VAR_5->ibuf[VAR_5->ibuf_off]), VAR_3);
        VAR_5->ibuf_off += VAR_3;
        VAR_5->ibuf_len -= VAR_3;
        VAR_4 += VAR_3;
        if (VAR_2 == VAR_3)
            return VAR_4;
        VAR_2 -= VAR_3;
        VAR_1 += VAR_3;
    }







    if (VAR_2 > VAR_5->ibuf_size) {
        for (;;) {
            VAR_3 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_2);
            if (VAR_3 <= 0) {
                FUNC_1(VAR_0);
                if (VAR_3 < 0)
                    return ((VAR_4 > 0) ? VAR_4 : VAR_3);
                if (VAR_3 == 0)
                    return VAR_4;
            }
            VAR_4 += VAR_3;
            if (VAR_2 == VAR_3)
                return VAR_4;
            VAR_1 += VAR_3;
            VAR_2 -= VAR_3;
        }
    }



    VAR_3 = FUNC_2(VAR_0->next_bio, VAR_5->ibuf, VAR_5->ibuf_size);
    if (VAR_3 <= 0) {
        FUNC_1(VAR_0);
        if (VAR_3 < 0)
            return ((VAR_4 > 0) ? VAR_4 : VAR_3);
        if (VAR_3 == 0)
            return VAR_4;
    }
    VAR_5->ibuf_off = 0;
    VAR_5->ibuf_len = VAR_3;


    goto start;
}
