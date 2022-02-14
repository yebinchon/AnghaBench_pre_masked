
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t wpend_tot; unsigned char const* wpend_buf; int wpend_type; int numwpipes; size_t wpend_ret; int * wbuf; } ;
struct TYPE_7__ {int mode; TYPE_1__ rlayer; int rwstate; int * wbio; } ;
typedef int SSL3_BUFFER ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,size_t) ;
 int * FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_12 () ;

int FUNC_13(SSL *VAR_8, int VAR_9, const unsigned char *VAR_10, size_t VAR_11,
                       size_t *VAR_12)
{
    int VAR_13;
    SSL3_BUFFER *VAR_14 = VAR_8->rlayer.wbuf;
    size_t VAR_15 = 0;
    size_t VAR_16 = 0;

    if ((VAR_8->rlayer.wpend_tot > VAR_11)
        || (!(VAR_8->mode & VAR_3)
            && (VAR_8->rlayer.wpend_buf != VAR_10))
        || (VAR_8->rlayer.wpend_type != VAR_9)) {
        FUNC_11(VAR_8, VAR_1, VAR_2,
                 VAR_5);
        return -1;
    }

    for (;;) {

        if (FUNC_6(&VAR_14[VAR_15]) == 0
            && VAR_15 < VAR_8->rlayer.numwpipes - 1) {
            VAR_15++;
            continue;
        }
        FUNC_12();
        if (VAR_8->wbio != ((void*)0)) {
            VAR_8->rwstate = VAR_7;





            if (FUNC_1(VAR_8->wbio) && VAR_9 != VAR_0) {
                VAR_13 = FUNC_0(VAR_8->wbio);
                if (VAR_13 <= 0)
                    return VAR_13;
            }

            if (FUNC_1(VAR_8->wbio)
                && VAR_9 != VAR_0) {
                FUNC_2(VAR_8->wbio, VAR_9);
            }

            VAR_13 = FUNC_3(VAR_8->wbio, (char *)
                          &(FUNC_5(&VAR_14[VAR_15])
                            [FUNC_7(&VAR_14[VAR_15])]),
                          (unsigned int)FUNC_6(&VAR_14[VAR_15]));
            if (VAR_13 >= 0)
                VAR_16 = VAR_13;
        } else {
            FUNC_11(VAR_8, VAR_1, VAR_2,
                     VAR_6);
            VAR_13 = -1;
        }
        if (VAR_13 > 0 && VAR_16 == FUNC_6(&VAR_14[VAR_15])) {
            FUNC_8(&VAR_14[VAR_15], 0);
            FUNC_4(&VAR_14[VAR_15], VAR_16);
            if (VAR_15 + 1 < VAR_8->rlayer.numwpipes)
                continue;
            VAR_8->rwstate = VAR_4;
            *VAR_12 = VAR_8->rlayer.wpend_ret;
            return 1;
        } else if (VAR_13 <= 0) {
            if (FUNC_10(VAR_8)) {




                FUNC_8(&VAR_14[VAR_15], 0);
            }
            return VAR_13;
        }
        FUNC_4(&VAR_14[VAR_15], VAR_16);
        FUNC_9(&VAR_14[VAR_15], VAR_16);
    }
}
