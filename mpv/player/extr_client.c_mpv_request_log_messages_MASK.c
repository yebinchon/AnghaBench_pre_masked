
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_1__* mpctx; int * messages; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_5__ {int global; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int,int ,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(mpv_handle *VAR_6, const char *VAR_7)
{
    int VAR_8 = -1;
    for (int VAR_9 = 0; VAR_9 < VAR_2 + 1; VAR_9++) {
        if (VAR_4[VAR_9] && FUNC_4(VAR_7, VAR_4[VAR_9]) == 0) {
            VAR_8 = VAR_9;
            break;
        }
    }
    if (FUNC_4(VAR_7, "terminal-default") == 0)
        VAR_8 = VAR_1;

    if (VAR_8 < 0 && FUNC_4(VAR_7, "no") != 0)
        return VAR_0;

    FUNC_2(&VAR_6->lock);
    FUNC_0(VAR_6->messages);
    VAR_6->messages = ((void*)0);
    if (VAR_8 >= 0) {
        int VAR_10 = VAR_8 >= VAR_3 ? 10000 : 1000;
        VAR_6->messages = FUNC_1(VAR_6->mpctx->global, VAR_10, VAR_8,
                                              VAR_5, VAR_6);
    }
    FUNC_3(&VAR_6->lock);
    return 0;
}
