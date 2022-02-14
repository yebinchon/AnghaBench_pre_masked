
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_stat {struct pid_fd* fds; } ;
struct pid_fd {int * filename; } ;


 int FUNC_0 (struct pid_fd*) ;

__attribute__((used)) static inline void FUNC_1(struct pid_stat *VAR_0, size_t VAR_1, size_t VAR_2) {
    struct pid_fd *VAR_3 = &VAR_0->fds[VAR_1], *VAR_4 = &VAR_0->fds[VAR_1 + VAR_2];
    size_t VAR_5 = VAR_1;

    while(VAR_3 < VAR_4) {

        VAR_3->filename = ((void*)0);

        FUNC_0(VAR_3);
        VAR_3++;
        VAR_5++;
    }
}
