
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_fd {scalar_t__ cache_iterations_reset; scalar_t__ cache_iterations_counter; scalar_t__ inode; scalar_t__ link_hash; scalar_t__ fd; } ;



__attribute__((used)) static inline void FUNC_0(struct pid_fd *VAR_0) {
    VAR_0->fd = 0;


    VAR_0->link_hash = 0;
    VAR_0->inode = 0;
    VAR_0->cache_iterations_counter = 0;
    VAR_0->cache_iterations_reset = 0;

}
