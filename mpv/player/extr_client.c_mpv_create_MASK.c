
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct MPContext {int clients; int mconfig; } ;
typedef int pthread_t ;
struct TYPE_7__ {TYPE_1__* clients; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_6__ {int have_terminator; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct MPContext* FUNC_1 () ;
 int FUNC_2 (struct MPContext*) ;
 TYPE_2__* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int *,int ,struct MPContext*) ;

mpv_handle *FUNC_6(void)
{
    struct MPContext *VAR_1 = FUNC_1();
    if (!VAR_1)
        return ((void*)0);

    FUNC_0(VAR_1->mconfig, "libmpv", 0);

    mpv_handle *VAR_2 = FUNC_3(VAR_1->clients, "main");
    if (!VAR_2) {
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    pthread_t VAR_3;
    if (FUNC_5(&VAR_3, ((void*)0), VAR_0, VAR_1) != 0) {
        VAR_2->clients->have_terminator = 1;
        FUNC_4(VAR_2);
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    return VAR_2;
}
