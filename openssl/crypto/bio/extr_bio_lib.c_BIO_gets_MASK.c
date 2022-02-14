
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * callback_ex; int * callback; TYPE_1__* method; int init; } ;
struct TYPE_6__ {int (* bgets ) (TYPE_2__*,char*,int) ;} ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,char*,int,int ,long,int,size_t*) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;

int FUNC_3(BIO *VAR_6, char *VAR_7, int VAR_8)
{
    int VAR_9;
    size_t VAR_10 = 0;

    if ((VAR_6 == ((void*)0)) || (VAR_6->method == ((void*)0)) || (VAR_6->method->bgets == ((void*)0))) {
        FUNC_0(VAR_2, VAR_5);
        return -2;
    }

    if (VAR_8 < 0) {
        FUNC_0(VAR_2, VAR_3);
        return 0;
    }

    if (VAR_6->callback != ((void*)0) || VAR_6->callback_ex != ((void*)0)) {
        VAR_9 = (int)FUNC_1(VAR_6, VAR_0, VAR_7, VAR_8, 0, 0L, 1, ((void*)0));
        if (VAR_9 <= 0)
            return VAR_9;
    }

    if (!VAR_6->init) {
        FUNC_0(VAR_2, VAR_4);
        return -2;
    }

    VAR_9 = VAR_6->method->bgets(VAR_6, VAR_7, VAR_8);

    if (VAR_9 > 0) {
        VAR_10 = VAR_9;
        VAR_9 = 1;
    }

    if (VAR_6->callback != ((void*)0) || VAR_6->callback_ex != ((void*)0))
        VAR_9 = (int)FUNC_1(VAR_6, VAR_0 | VAR_1, VAR_7, VAR_8,
                                     0, 0L, VAR_9, &VAR_10);

    if (VAR_9 > 0) {

        if (VAR_10 > (size_t)VAR_8)
            VAR_9 = -1;
        else
            VAR_9 = (int)VAR_10;
    }

    return VAR_9;
}
