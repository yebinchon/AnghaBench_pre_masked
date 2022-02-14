
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_2(void)
{
 return FUNC_1(VAR_1) || FUNC_0(VAR_1) ||
  (VAR_1->flags & VAR_0);
}
