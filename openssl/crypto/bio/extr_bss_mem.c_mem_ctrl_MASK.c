
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int num; int shutdown; scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__* buf; TYPE_1__* readp; } ;
struct TYPE_7__ {scalar_t__ length; int * data; int max; } ;
typedef TYPE_1__ BUF_MEM ;
typedef TYPE_2__ BIO_BUF_MEM ;
typedef TYPE_3__ BIO ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static long FUNC_3(BIO *VAR_2, int VAR_3, long VAR_4, void *VAR_5)
{
    long VAR_6 = 1;
    char **VAR_7;
    BIO_BUF_MEM *VAR_8 = (BIO_BUF_MEM *)VAR_2->ptr;
    BUF_MEM *VAR_9;

    if (VAR_2->flags & VAR_0)
        VAR_9 = VAR_8->buf;
    else
        VAR_9 = VAR_8->readp;

    switch (VAR_3) {
    case 133:
        VAR_9 = VAR_8->buf;
        if (VAR_9->data != ((void*)0)) {
            if (!(VAR_2->flags & VAR_0)) {
                if (!(VAR_2->flags & VAR_1)) {
                    FUNC_2(VAR_9->data, 0, VAR_9->max);
                    VAR_9->length = 0;
                }
                *VAR_8->readp = *VAR_8->buf;
            } else {

                *VAR_8->buf = *VAR_8->readp;
            }
        }
        break;
    case 140:
        VAR_6 = (long)(VAR_9->length == 0);
        break;
    case 128:
        VAR_2->num = (int)VAR_4;
        break;
    case 137:
        VAR_6 = (long)VAR_9->length;
        if (VAR_5 != ((void*)0)) {
            VAR_7 = (char **)VAR_5;
            *VAR_7 = (char *)&(VAR_9->data[0]);
        }
        break;
    case 129:
        FUNC_0(VAR_2);
        VAR_2->shutdown = (int)VAR_4;
        VAR_8->buf = VAR_5;
        *VAR_8->readp = *VAR_8->buf;
        break;
    case 130:
        if (VAR_5 != ((void*)0)) {
            if (!(VAR_2->flags & VAR_0))
                FUNC_1(VAR_2);
            VAR_9 = VAR_8->buf;
            VAR_7 = (char **)VAR_5;
            *VAR_7 = (char *)VAR_9;
        }
        break;
    case 138:
        VAR_6 = (long)VAR_2->shutdown;
        break;
    case 132:
        VAR_2->shutdown = (int)VAR_4;
        break;
    case 131:
        VAR_6 = 0L;
        break;
    case 136:
        VAR_6 = (long)VAR_9->length;
        break;
    case 141:
    case 139:
        VAR_6 = 1;
        break;
    case 134:
    case 135:
    default:
        VAR_6 = 0;
        break;
    }
    return VAR_6;
}
