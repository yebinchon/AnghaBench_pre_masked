
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ mixedStruct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_0(mixedStruct *VAR_3)
{
 return !(VAR_3->generic.flags & (VAR_2 |
              VAR_1 |
              VAR_0));
}
