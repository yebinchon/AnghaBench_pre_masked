
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_stat {size_t fds_size; struct pid_fd* fds; } ;
struct pid_fd {int fd; } ;



__attribute__((used)) static inline void FUNC_0(struct pid_stat *VAR_0) {
    struct pid_fd *VAR_1 = VAR_0->fds, *VAR_2 = &VAR_0->fds[VAR_0->fds_size];
    while(VAR_1 < VAR_2) {
        VAR_1->fd = -(VAR_1->fd);
        VAR_1++;
    }
}
