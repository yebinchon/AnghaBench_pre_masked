
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * triggerlist; } ;
typedef int List ;
typedef int EventTriggerEvent ;
typedef TYPE_1__ EventTriggerCacheEntry ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* FUNC_1 (int ,int *,int ,int *) ;

List *
FUNC_2(EventTriggerEvent VAR_5)
{
 EventTriggerCacheEntry *VAR_6;

 if (VAR_2 != VAR_0)
  FUNC_0();
 VAR_6 = FUNC_1(VAR_1, &VAR_5, VAR_3, ((void*)0));
 return VAR_6 != ((void*)0) ? VAR_6->triggerlist : VAR_4;
}
