
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ TypeCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(TypeCacheEntry *VAR_2)
{
 if (!(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2);
 return (VAR_2->flags & VAR_1) != 0;
}
