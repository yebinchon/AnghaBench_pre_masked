
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int dummy; } ;
struct pid_stat {size_t fds_size; struct pid_fd* fds; struct target* group_target; struct target* user_target; struct target* target; int updated; } ;
struct pid_fd {int fd; } ;


 int FUNC_0 (int,struct target*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct target*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct pid_stat *VAR_1) {

    if(FUNC_3(!VAR_1->updated)) {

        return;
    }

    struct target *VAR_2 = VAR_1->target, *VAR_3 = VAR_1->user_target, *VAR_4 = VAR_1->group_target;

    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);

    size_t VAR_5, VAR_6 = VAR_1->fds_size;
    struct pid_fd *VAR_7 = VAR_1->fds;
    for(VAR_5 = 0; VAR_5 < VAR_6 ;VAR_5++) {
        int VAR_8 = VAR_7[VAR_5].fd;

        if(FUNC_1(VAR_8 <= 0 || VAR_8 >= VAR_0))
            continue;

        FUNC_0(VAR_8, VAR_2);
        FUNC_0(VAR_8, VAR_3);
        FUNC_0(VAR_8, VAR_4);
    }
}
