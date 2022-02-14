
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int chans; } ;
typedef TYPE_2__ SeafMqManager ;
typedef int GAsyncQueue ;


 char* VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char const*) ;

json_t *
FUNC_3 (SeafMqManager *VAR_1)
{
    const char *VAR_2 = VAR_0;
    GAsyncQueue *VAR_3 = FUNC_1 (VAR_1->priv->chans, VAR_2);
    if (!VAR_3) {
        FUNC_2 ("Unkonwn message channel %s.\n", VAR_2);
        return ((void*)0);
    }

    return FUNC_0 (VAR_3);
}
