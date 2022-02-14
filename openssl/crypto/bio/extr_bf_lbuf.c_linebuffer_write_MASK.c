
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * next_bio; scalar_t__ ptr; } ;
struct TYPE_6__ {int obuf_size; int obuf_len; char const* obuf; } ;
typedef TYPE_1__ BIO_LINEBUFFER_CTX ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5;
    BIO_LINEBUFFER_CTX *VAR_6;

    if ((VAR_1 == ((void*)0)) || (VAR_2 <= 0))
        return 0;
    VAR_6 = (BIO_LINEBUFFER_CTX *)VAR_0->ptr;
    if ((VAR_6 == ((void*)0)) || (VAR_0->next_bio == ((void*)0)))
        return 0;

    FUNC_0(VAR_0);

    do {
        const char *VAR_7;
        char VAR_8;

        for (VAR_7 = VAR_1, VAR_8 = '\0'; VAR_7 < VAR_1 + VAR_2 && (VAR_8 = *VAR_7) != '\n'; VAR_7++) ;
        if (VAR_8 == '\n') {
            VAR_7++;
            VAR_5 = 1;
        } else
            VAR_5 = 0;





        while ((VAR_5 || VAR_7 - VAR_1 > VAR_6->obuf_size - VAR_6->obuf_len)
               && VAR_6->obuf_len > 0) {
            int VAR_9 = VAR_6->obuf_len;

            VAR_3 = VAR_6->obuf_size - VAR_6->obuf_len;
            if (VAR_7 - VAR_1 > 0) {
                if (VAR_3 >= VAR_7 - VAR_1) {
                    FUNC_3(&(VAR_6->obuf[VAR_6->obuf_len]), VAR_1, VAR_7 - VAR_1);
                    VAR_6->obuf_len += VAR_7 - VAR_1;
                    VAR_2 -= VAR_7 - VAR_1;
                    VAR_4 += VAR_7 - VAR_1;
                    VAR_1 = VAR_7;
                } else {
                    FUNC_3(&(VAR_6->obuf[VAR_6->obuf_len]), VAR_1, VAR_3);
                    VAR_6->obuf_len += VAR_3;
                    VAR_2 -= VAR_3;
                    VAR_1 += VAR_3;
                    VAR_4 += VAR_3;
                }
            }
            VAR_3 = FUNC_2(VAR_0->next_bio, VAR_6->obuf, VAR_6->obuf_len);
            if (VAR_3 <= 0) {
                VAR_6->obuf_len = VAR_9;
                FUNC_1(VAR_0);

                if (VAR_3 < 0)
                    return ((VAR_4 > 0) ? VAR_4 : VAR_3);
                if (VAR_3 == 0)
                    return VAR_4;
            }
            if (VAR_3 < VAR_6->obuf_len)
                FUNC_4(VAR_6->obuf, VAR_6->obuf + VAR_3, VAR_6->obuf_len - VAR_3);
            VAR_6->obuf_len -= VAR_3;
        }





        if ((VAR_5 || VAR_7 - VAR_1 > VAR_6->obuf_size) && VAR_7 - VAR_1 > 0) {
            VAR_3 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_7 - VAR_1);
            if (VAR_3 <= 0) {
                FUNC_1(VAR_0);
                if (VAR_3 < 0)
                    return ((VAR_4 > 0) ? VAR_4 : VAR_3);
                if (VAR_3 == 0)
                    return VAR_4;
            }
            VAR_4 += VAR_3;
            VAR_1 += VAR_3;
            VAR_2 -= VAR_3;
        }
    }
    while (VAR_5 && VAR_2 > 0);





    if (VAR_2 > 0) {
        FUNC_3(&(VAR_6->obuf[VAR_6->obuf_len]), VAR_1, VAR_2);
        VAR_6->obuf_len += VAR_2;
        VAR_4 += VAR_2;
    }
    return VAR_4;
}
