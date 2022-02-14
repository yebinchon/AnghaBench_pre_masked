
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sess_cache_full; } ;
struct TYPE_10__ {int lock; TYPE_1__ stats; int session_cache_tail; int sessions; } ;
typedef int SSL_SESSION ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(SSL_CTX *VAR_0, SSL_SESSION *VAR_1)
{
    int VAR_2 = 0;
    SSL_SESSION *VAR_3;






    FUNC_7(VAR_1);




    FUNC_1(VAR_0->lock);
    VAR_3 = FUNC_8(VAR_0->sessions, VAR_1);






    if (VAR_3 != ((void*)0) && VAR_3 != VAR_1) {

        FUNC_6(VAR_0, VAR_3);
        FUNC_4(VAR_3);






        VAR_3 = ((void*)0);
    } else if (VAR_3 == ((void*)0) &&
               FUNC_9(VAR_0->sessions, VAR_1) == ((void*)0)) {






        VAR_3 = VAR_1;
    }


    if (VAR_3 == ((void*)0))
        FUNC_5(VAR_0, VAR_1);

    if (VAR_3 != ((void*)0)) {





        FUNC_4(VAR_3);
        VAR_2 = 0;
    } else {




        VAR_2 = 1;

        if (FUNC_2(VAR_0) > 0) {
            while (FUNC_3(VAR_0) > FUNC_2(VAR_0)) {
                if (!FUNC_10(VAR_0, VAR_0->session_cache_tail, 0))
                    break;
                else
                    FUNC_11(&VAR_0->stats.sess_cache_full);
            }
        }
    }
    FUNC_0(VAR_0->lock);
    return VAR_2;
}
