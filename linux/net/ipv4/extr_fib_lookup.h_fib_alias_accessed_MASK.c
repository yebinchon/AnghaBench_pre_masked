
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_alias {int fa_state; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct fib_alias *VAR_1)
{
 if (!(VAR_1->fa_state & VAR_0))
  VAR_1->fa_state |= VAR_0;
}
