
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int posix_spawnattr_t ;
struct TYPE_5__ {int used; TYPE_1__* action; } ;
typedef TYPE_2__ posix_spawn_file_actions_t ;
typedef int pid_t ;
struct TYPE_4__ {int newfiledes; int filedes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char* const*,char* const*) ;
 int FUNC_3 () ;

int FUNC_4(pid_t *VAR_2, const char *VAR_3,
    const posix_spawn_file_actions_t *VAR_4,
    const posix_spawnattr_t *VAR_5,
    char *const VAR_6[], char *const VAR_7[])
{
    pid_t VAR_8;

    if (VAR_5 != ((void*)0))
        return VAR_0;

    VAR_8 = FUNC_3();
    if (VAR_8 == -1)
        return VAR_1;

    if (VAR_8 == 0) {
        for (int VAR_9 = 0; VAR_9 < VAR_4->used; VAR_9++) {
            int VAR_10 = FUNC_1(VAR_4->action[VAR_9].filedes, VAR_4->action[VAR_9].newfiledes);
            if (VAR_10 == -1)
                goto fail;
        }
        FUNC_2(VAR_3, VAR_6, VAR_7);
fail:
        FUNC_0(127);
    }

    *VAR_2 = VAR_8;
    return 0;
}
