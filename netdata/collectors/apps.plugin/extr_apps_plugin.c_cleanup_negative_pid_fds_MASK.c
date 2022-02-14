
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_stat {size_t fds_size; struct pid_fd* fds; } ;
struct pid_fd {int fd; } ;


 int FUNC_0 (struct pid_fd*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct pid_stat *VAR_0) {
    struct pid_fd *VAR_1 = VAR_0->fds, *VAR_2 = &VAR_0->fds[VAR_0->fds_size];

    while(VAR_1 < VAR_2) {
        int VAR_3 = VAR_1->fd;

        if(FUNC_2(VAR_3 < 0)) {
            FUNC_1(-(VAR_3));
            FUNC_0(VAR_1);
        }

        VAR_1++;
    }
}
