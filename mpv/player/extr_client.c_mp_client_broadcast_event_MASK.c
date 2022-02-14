
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_event {int event_id; void* data; } ;
struct mp_client_api {int num_clients; int lock; int * clients; } ;
struct MPContext {struct mp_client_api* clients; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct mpv_event*,int) ;

void FUNC_3(struct MPContext *VAR_0, int VAR_1, void *VAR_2)
{
    struct mp_client_api *VAR_3 = VAR_0->clients;

    FUNC_0(&VAR_3->lock);

    for (int VAR_4 = 0; VAR_4 < VAR_3->num_clients; VAR_4++) {
        struct mpv_event VAR_5 = {
            .event_id = VAR_1,
            .data = VAR_2,
        };
        FUNC_2(VAR_3->clients[VAR_4], &VAR_5, 1);
    }

    FUNC_1(&VAR_3->lock);
}
