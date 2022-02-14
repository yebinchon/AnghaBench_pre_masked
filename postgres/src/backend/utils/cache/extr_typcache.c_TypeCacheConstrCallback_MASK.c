
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int flags; struct TYPE_3__* nextDomain; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Datum ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(Datum VAR_2, int VAR_3, uint32 VAR_4)
{
 TypeCacheEntry *VAR_5;







 for (VAR_5 = VAR_1;
   VAR_5 != ((void*)0);
   VAR_5 = VAR_5->nextDomain)
 {

  VAR_5->flags &= ~VAR_0;
 }
}
