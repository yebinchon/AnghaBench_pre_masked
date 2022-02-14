
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_handle {int num_properties; scalar_t__ lowest_changed; int lock; TYPE_1__** properties; } ;
struct mp_client_api {int num_clients; int lock; struct mpv_handle** clients; } ;
struct MPContext {struct mp_client_api* clients; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct mpv_handle*,int) ;
 int FUNC_1 (struct MPContext*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mpv_handle*) ;

void FUNC_5(struct MPContext *VAR_0, const char *VAR_1)
{
    struct mp_client_api *VAR_2 = VAR_0->clients;
    int VAR_3 = FUNC_1(VAR_0, VAR_1);

    FUNC_2(&VAR_2->lock);

    for (int VAR_4 = 0; VAR_4 < VAR_2->num_clients; VAR_4++) {
        struct mpv_handle *VAR_5 = VAR_2->clients[VAR_4];
        FUNC_2(&VAR_5->lock);
        for (int VAR_6 = 0; VAR_6 < VAR_5->num_properties; VAR_6++) {
            if (VAR_5->properties[VAR_6]->id == VAR_3)
                FUNC_0(VAR_5, VAR_6);
        }
        if (VAR_5->lowest_changed < VAR_5->num_properties)
            FUNC_4(VAR_5);
        FUNC_3(&VAR_5->lock);
    }

    FUNC_3(&VAR_2->lock);
}
