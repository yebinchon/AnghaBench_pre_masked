
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ enabled; scalar_t__ ntags; int tag; } ;
typedef TYPE_1__ EventTriggerCacheItem ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (char const**,int ,scalar_t__,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_1(const char **VAR_5, EventTriggerCacheItem *VAR_6)
{




 if (VAR_1 == VAR_0)
 {
  if (VAR_6->enabled == VAR_2)
   return 0;
 }
 else
 {
  if (VAR_6->enabled == VAR_3)
   return 0;
 }


 if (VAR_6->ntags != 0 && FUNC_0(VAR_5, VAR_6->tag,
         VAR_6->ntags, sizeof(char *),
         VAR_4) == ((void*)0))
  return 0;


 return 1;
}
