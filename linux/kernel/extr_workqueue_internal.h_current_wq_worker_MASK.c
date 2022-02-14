
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct worker {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct worker* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline struct worker *FUNC_2(void)
{
 if (FUNC_0() && (VAR_1->flags & VAR_0))
  return FUNC_1(VAR_1);
 return ((void*)0);
}
