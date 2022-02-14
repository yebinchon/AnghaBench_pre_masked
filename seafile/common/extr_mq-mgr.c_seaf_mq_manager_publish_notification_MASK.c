
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
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6 (SeafMqManager *VAR_1, const char *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = VAR_0;
    GAsyncQueue *VAR_5 = FUNC_1 (VAR_1->priv->chans, VAR_4);
    if (!VAR_5) {
        FUNC_5 ("Unkonwn message channel %s.\n", VAR_4);
        return;
    }

    if (!VAR_2 || !VAR_3) {
        FUNC_5 ("type and content should not be NULL.\n");
        return;
    }

    json_t *VAR_6 = FUNC_2 ();
    FUNC_3 (VAR_6, "type", FUNC_4(VAR_2));
    FUNC_3 (VAR_6, "content", FUNC_4(VAR_3));

    FUNC_0 (VAR_5, VAR_6);
}
