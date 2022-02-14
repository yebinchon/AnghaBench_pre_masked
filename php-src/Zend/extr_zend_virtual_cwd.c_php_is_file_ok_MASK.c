
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ zend_stat_t ;
struct TYPE_6__ {int cwd; } ;
typedef TYPE_2__ cwd_state ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(const cwd_state *VAR_0)
{
 zend_stat_t VAR_1;

 if (FUNC_1(VAR_0->cwd, &VAR_1) == 0 && FUNC_0(VAR_1.st_mode))
  return (0);

 return (1);
}
