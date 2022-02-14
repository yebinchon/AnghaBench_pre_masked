
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int target_fds_size; int * target_fds; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct target *VAR_1) {
    if(FUNC_2(!VAR_1))
        return;

    if(FUNC_2(!VAR_1->target_fds || VAR_1->target_fds_size < VAR_0)) {
        VAR_1->target_fds = FUNC_1(VAR_1->target_fds, sizeof(int) * VAR_0);
        FUNC_0(&VAR_1->target_fds[VAR_1->target_fds_size], 0, sizeof(int) * (VAR_0 - VAR_1->target_fds_size));
        VAR_1->target_fds_size = VAR_0;
    }
}
