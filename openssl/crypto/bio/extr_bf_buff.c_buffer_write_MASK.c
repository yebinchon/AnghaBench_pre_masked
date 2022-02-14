
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * next_bio; scalar_t__ ptr; } ;
struct TYPE_6__ {int obuf_size; int obuf_len; int obuf_off; char const* obuf; } ;
typedef TYPE_1__ BIO_F_BUFFER_CTX ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0;
    BIO_F_BUFFER_CTX *VAR_5;

    if ((VAR_1 == ((void*)0)) || (VAR_2 <= 0))
        return 0;
    VAR_5 = (BIO_F_BUFFER_CTX *)VAR_0->ptr;
    if ((VAR_5 == ((void*)0)) || (VAR_0->next_bio == ((void*)0)))
        return 0;

    FUNC_0(VAR_0);
 start:
    VAR_3 = VAR_5->obuf_size - (VAR_5->obuf_len + VAR_5->obuf_off);

    if (VAR_3 >= VAR_2) {
        FUNC_3(&(VAR_5->obuf[VAR_5->obuf_off + VAR_5->obuf_len]), VAR_1, VAR_2);
        VAR_5->obuf_len += VAR_2;
        return (VAR_4 + VAR_2);
    }


    if (VAR_5->obuf_len != 0) {
        if (VAR_3 > 0) {
            FUNC_3(&(VAR_5->obuf[VAR_5->obuf_off + VAR_5->obuf_len]), VAR_1, VAR_3);
            VAR_1 += VAR_3;
            VAR_2 -= VAR_3;
            VAR_4 += VAR_3;
            VAR_5->obuf_len += VAR_3;
        }

        for (;;) {
            VAR_3 = FUNC_2(VAR_0->next_bio, &(VAR_5->obuf[VAR_5->obuf_off]),
                          VAR_5->obuf_len);
            if (VAR_3 <= 0) {
                FUNC_1(VAR_0);

                if (VAR_3 < 0)
                    return ((VAR_4 > 0) ? VAR_4 : VAR_3);
                if (VAR_3 == 0)
                    return VAR_4;
            }
            VAR_5->obuf_off += VAR_3;
            VAR_5->obuf_len -= VAR_3;
            if (VAR_5->obuf_len == 0)
                break;
        }
    }




    VAR_5->obuf_off = 0;


    while (VAR_2 >= VAR_5->obuf_size) {
        VAR_3 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_2);
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
        if (VAR_2 == 0)
            return VAR_4;
    }




    goto start;
}
