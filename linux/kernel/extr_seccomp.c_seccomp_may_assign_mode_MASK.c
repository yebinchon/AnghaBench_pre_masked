
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long mode; } ;
struct TYPE_6__ {TYPE_2__ seccomp; TYPE_1__* sighand; } ;
struct TYPE_4__ {int siglock; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(unsigned long VAR_1)
{
 FUNC_0(&VAR_0->sighand->siglock);

 if (VAR_0->seccomp.mode && VAR_0->seccomp.mode != VAR_1)
  return 0;

 return 1;
}
