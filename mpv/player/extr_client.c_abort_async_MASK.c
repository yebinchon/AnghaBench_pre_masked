
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mp_abort_entry {int client_work_type; scalar_t__ client_work_id; int * client; } ;
struct MPContext {int abort_all; int num_abort_list; int abort_lock; struct mp_abort_entry** abort_list; } ;
typedef int mpv_handle ;


 int FUNC_0 (struct MPContext*,struct mp_abort_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0, mpv_handle *VAR_1,
                        int VAR_2, uint64_t VAR_3)
{
    FUNC_1(&VAR_0->abort_lock);


    if (VAR_1 == ((void*)0))
        VAR_0->abort_all = 1;

    for (int VAR_4 = 0; VAR_4 < VAR_0->num_abort_list; VAR_4++) {
        struct mp_abort_entry *VAR_5 = VAR_0->abort_list[VAR_4];
        if (!VAR_1 || (VAR_5->client == VAR_1 && (!VAR_2 ||
            (VAR_5->client_work_type == VAR_2 && VAR_5->client_work_id == VAR_3))))
        {
            FUNC_0(VAR_0, VAR_5);
        }
    }

    FUNC_2(&VAR_0->abort_lock);
}
