
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int (* remove_session_cb ) (TYPE_2__*,TYPE_1__*) ;int lock; int sessions; } ;
struct TYPE_14__ {scalar_t__ session_id_length; int not_resumable; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(SSL_CTX *VAR_0, SSL_SESSION *VAR_1, int VAR_2)
{
    SSL_SESSION *VAR_3;
    int VAR_4 = 0;

    if ((VAR_1 != ((void*)0)) && (VAR_1->session_id_length != 0)) {
        if (VAR_2)
            FUNC_1(VAR_0->lock);
        if ((VAR_3 = FUNC_5(VAR_0->sessions, VAR_1)) != ((void*)0)) {
            VAR_4 = 1;
            VAR_3 = FUNC_4(VAR_0->sessions, VAR_3);
            FUNC_3(VAR_0, VAR_3);
        }
        VAR_1->not_resumable = 1;

        if (VAR_2)
            FUNC_0(VAR_0->lock);

        if (VAR_0->remove_session_cb != ((void*)0))
            VAR_0->remove_session_cb(VAR_0, VAR_1);

        if (VAR_4)
            FUNC_2(VAR_3);
    } else
        VAR_4 = 0;
    return VAR_4;
}
