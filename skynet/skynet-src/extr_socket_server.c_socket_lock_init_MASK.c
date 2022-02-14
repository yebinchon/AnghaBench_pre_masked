
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_lock {scalar_t__ count; int * lock; } ;
struct socket {int dw_lock; } ;



__attribute__((used)) static inline void
FUNC_0(struct socket *VAR_0, struct socket_lock *VAR_1) {
 VAR_1->lock = &VAR_0->dw_lock;
 VAR_1->count = 0;
}
