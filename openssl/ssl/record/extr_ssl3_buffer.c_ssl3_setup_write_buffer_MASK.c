
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {size_t numwpipes; } ;
struct TYPE_13__ {int options; TYPE_10__ rlayer; int * wbio; } ;
struct TYPE_12__ {size_t len; unsigned char* buf; } ;
typedef TYPE_1__ SSL3_BUFFER ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 TYPE_1__* FUNC_3 (TYPE_10__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 size_t FUNC_8 (TYPE_2__*) ;

int FUNC_9(SSL *VAR_9, size_t VAR_10, size_t VAR_11)
{
    unsigned char *VAR_12;
    size_t VAR_13 = 0, VAR_14;
    SSL3_BUFFER *VAR_15;
    size_t VAR_16;

    VAR_9->rlayer.numwpipes = VAR_10;

    if (VAR_11 == 0) {
        if (FUNC_4(VAR_9))
            VAR_14 = VAR_0 + 1;
        else
            VAR_14 = VAR_3;





        VAR_11 = FUNC_8(VAR_9)
            + VAR_5 + VAR_14 + VAR_13;

        if (FUNC_7(VAR_9))
            VAR_11 += VAR_4;

        if (!(VAR_9->options & VAR_8))
            VAR_11 += VAR_14 + VAR_13 + VAR_5;
    }

    VAR_15 = FUNC_3(&VAR_9->rlayer);
    for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
        SSL3_BUFFER *VAR_17 = &VAR_15[VAR_16];

        if (VAR_17->len != VAR_11) {
            FUNC_1(VAR_17->buf);
            VAR_17->buf = ((void*)0);
        }

        if (VAR_17->buf == ((void*)0)) {
            if (VAR_9->wbio == ((void*)0) || !FUNC_0(VAR_9->wbio)) {
                VAR_12 = FUNC_2(VAR_11);
                if (VAR_12 == ((void*)0)) {
                    VAR_9->rlayer.numwpipes = VAR_16;





                    FUNC_5(VAR_9, VAR_6,
                            VAR_7, VAR_1);
                    return 0;
                }
            } else {
                VAR_12 = ((void*)0);
            }
            FUNC_6(VAR_17, 0, sizeof(SSL3_BUFFER));
            VAR_17->buf = VAR_12;
            VAR_17->len = VAR_11;
        }
    }

    return 1;
}
