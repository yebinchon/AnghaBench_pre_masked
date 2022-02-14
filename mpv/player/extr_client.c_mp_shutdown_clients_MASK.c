
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_client_api {int shutting_down; int lock; scalar_t__ terminate_core_thread; scalar_t__ num_clients; } ;
struct MPContext {scalar_t__ is_cli; scalar_t__ outstanding_async; struct mp_client_api* clients; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int *,int ,int ) ;
 int FUNC_1 (struct MPContext*,int ,int *) ;
 int FUNC_2 (struct MPContext*,double) ;
 double FUNC_3 () ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct MPContext *VAR_1)
{
    struct mp_client_api *VAR_2 = VAR_1->clients;


    double VAR_3 = FUNC_3() + 2;

    FUNC_5(&VAR_2->lock);


    VAR_2->shutting_down = 1;


    while (VAR_2->num_clients || VAR_1->outstanding_async ||
           !(VAR_1->is_cli || VAR_2->terminate_core_thread))
    {
        FUNC_6(&VAR_2->lock);

        double VAR_4 = VAR_3 - FUNC_3();
        if (VAR_4 >= 0) {
            FUNC_2(VAR_1, VAR_4);
        } else {



            FUNC_0(VAR_1, ((void*)0), 0, 0);
        }

        FUNC_1(VAR_1, VAR_0, ((void*)0));
        FUNC_4(VAR_1);

        FUNC_5(&VAR_2->lock);
    }

    FUNC_6(&VAR_2->lock);
}
