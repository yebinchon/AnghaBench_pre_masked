
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_lock {scalar_t__ count; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct socket_lock *VAR_0) {
 --VAR_0->count;
 if (VAR_0->count <= 0) {
  FUNC_0(VAR_0->count == 0);
  FUNC_1(VAR_0->lock);
 }
}
