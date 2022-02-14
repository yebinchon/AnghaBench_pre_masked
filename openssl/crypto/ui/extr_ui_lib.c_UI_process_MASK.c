
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; TYPE_1__* meth; int strings; } ;
typedef TYPE_2__ UI ;
struct TYPE_9__ {scalar_t__ (* ui_open_session ) (TYPE_2__*) ;scalar_t__ (* ui_write_string ) (TYPE_2__*,int ) ;int (* ui_flush ) (TYPE_2__*) ;int (* ui_read_string ) (TYPE_2__*,int ) ;scalar_t__ (* ui_close_session ) (TYPE_2__*) ;} ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int (*) (char const*,size_t,void*),void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

int FUNC_10(UI *VAR_5)
{
    int VAR_6, VAR_7 = 0;
    const char *VAR_8 = "processing";

    if (VAR_5->meth->ui_open_session != ((void*)0)
        && VAR_5->meth->ui_open_session(VAR_5) <= 0) {
        VAR_8 = "opening session";
        VAR_7 = -1;
        goto err;
    }

    if (VAR_5->flags & VAR_0)
        FUNC_1((int (*)(const char *, size_t, void *))
                            VAR_4, (void *)VAR_5);

    for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_5->strings); VAR_6++) {
        if (VAR_5->meth->ui_write_string != ((void*)0)
            && (VAR_5->meth->ui_write_string(VAR_5,
                                          FUNC_4(VAR_5->strings, VAR_6))
                <= 0))
        {
            VAR_8 = "writing strings";
            VAR_7 = -1;
            goto err;
        }
    }

    if (VAR_5->meth->ui_flush != ((void*)0))
        switch (VAR_5->meth->ui_flush(VAR_5)) {
        case -1:
            VAR_5->flags &= ~VAR_1;
            VAR_7 = -2;
            goto err;
        case 0:
            VAR_8 = "flushing";
            VAR_7 = -1;
            goto err;
        default:
            VAR_7 = 0;
            break;
        }

    for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_5->strings); VAR_6++) {
        if (VAR_5->meth->ui_read_string != ((void*)0)) {
            switch (VAR_5->meth->ui_read_string(VAR_5,
                                             FUNC_4(VAR_5->strings,
                                                                VAR_6))) {
            case -1:
                VAR_5->flags &= ~VAR_1;
                VAR_7 = -2;
                goto err;
            case 0:
                VAR_8 = "reading strings";
                VAR_7 = -1;
                goto err;
            default:
                VAR_7 = 0;
                break;
            }
        }
    }

    VAR_8 = ((void*)0);
 err:
    if (VAR_5->meth->ui_close_session != ((void*)0)
        && VAR_5->meth->ui_close_session(VAR_5) <= 0) {
        if (VAR_8 == ((void*)0))
            VAR_8 = "closing session";
        VAR_7 = -1;
    }

    if (VAR_7 == -1) {
        FUNC_2(VAR_2, VAR_3);
        FUNC_0(2, "while ", VAR_8);
    }
    return VAR_7;
}
