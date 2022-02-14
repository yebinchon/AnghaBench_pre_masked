
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_lock {scalar_t__ count; int lock; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct socket_lock *VAR_0) {
 if (VAR_0->count == 0) {
  if (!FUNC_0(VAR_0->lock))
   return 0;
 }
 ++VAR_0->count;
 return 1;
}
