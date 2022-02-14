
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__* buf; TYPE_1__* readp; } ;
struct TYPE_7__ {int length; char* data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef TYPE_2__ BIO_BUF_MEM ;
typedef TYPE_3__ BIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = -1;
    char *VAR_7;
    BIO_BUF_MEM *VAR_8 = (BIO_BUF_MEM *)VAR_1->ptr;
    BUF_MEM *VAR_9 = VAR_8->readp;

    if (VAR_1->flags & VAR_0)
        VAR_9 = VAR_8->buf;
    FUNC_0(VAR_1);
    VAR_5 = VAR_9->length;
    if ((VAR_3 - 1) < VAR_5)
        VAR_5 = VAR_3 - 1;
    if (VAR_5 <= 0) {
        *VAR_2 = '\0';
        return 0;
    }
    VAR_7 = VAR_9->data;
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        if (VAR_7[VAR_4] == '\n') {
            VAR_4++;
            break;
        }
    }






    VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_4);
    if (VAR_4 > 0)
        VAR_2[VAR_4] = '\0';
    VAR_6 = VAR_4;
    return VAR_6;
}
