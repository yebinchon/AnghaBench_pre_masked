
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_stat {int fds_size; size_t pid; struct pid_stat* next; struct pid_stat* prev; int fds; } ;
struct pid_fd {int dummy; } ;
typedef size_t pid_t ;


 int VAR_0 ;
 struct pid_stat** VAR_1 ;
 int VAR_2 ;
 struct pid_stat* FUNC_0 (int,int) ;
 int FUNC_1 (struct pid_stat*,int ,int) ;
 scalar_t__ FUNC_2 (struct pid_stat*) ;
 int FUNC_3 (int) ;
 struct pid_stat* VAR_3 ;
 scalar_t__ FUNC_4 (struct pid_stat*) ;

__attribute__((used)) static inline struct pid_stat *FUNC_5(pid_t VAR_4) {
    if(FUNC_4(VAR_1[VAR_4]))
        return VAR_1[VAR_4];

    struct pid_stat *VAR_5 = FUNC_0(sizeof(struct pid_stat), 1);
    VAR_5->fds = FUNC_3(sizeof(struct pid_fd) * VAR_0);
    VAR_5->fds_size = VAR_0;
    FUNC_1(VAR_5, 0, VAR_5->fds_size);

    if(FUNC_2(VAR_3))
        VAR_3->prev = VAR_5;

    VAR_5->next = VAR_3;
    VAR_3 = VAR_5;

    VAR_5->pid = VAR_4;

    VAR_1[VAR_4] = VAR_5;
    VAR_2++;

    return VAR_5;
}
