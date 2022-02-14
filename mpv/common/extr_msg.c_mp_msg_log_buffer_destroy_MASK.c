
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log_root {int num_buffers; int reload_counter; struct mp_log_buffer_entry** buffers; } ;
struct mp_log_buffer_entry {struct mp_log_root* root; } ;
struct mp_log_buffer {struct mp_log_root* root; } ;


 int FUNC_0 (struct mp_log_buffer_entry**,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 struct mp_log_buffer_entry* FUNC_3 (struct mp_log_buffer_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mp_log_buffer_entry*) ;

void FUNC_7(struct mp_log_buffer *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_4(&VAR_0);

    struct mp_log_root *VAR_2 = VAR_1->root;
    for (int VAR_3 = 0; VAR_3 < VAR_2->num_buffers; VAR_3++) {
        if (VAR_2->buffers[VAR_3] == VAR_1) {
            FUNC_0(VAR_2->buffers, VAR_2->num_buffers, VAR_3);
            goto found;
        }
    }

    FUNC_1();

found:

    while (1) {
        struct mp_log_buffer_entry *VAR_4 = FUNC_3(VAR_1);
        if (!VAR_4)
            break;
        FUNC_6(VAR_4);
    }
    FUNC_6(VAR_1);

    FUNC_2(&VAR_2->reload_counter, 1);
    FUNC_5(&VAR_0);
}
