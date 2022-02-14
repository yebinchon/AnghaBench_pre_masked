
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active_local_updates; int active_shared_updates; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ SerializedActiveRelMaps ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(Size VAR_2, char *VAR_3)
{
 SerializedActiveRelMaps *VAR_4;

 FUNC_0(VAR_2 >= FUNC_1());

 VAR_4 = (SerializedActiveRelMaps *) VAR_3;
 VAR_4->active_shared_updates = VAR_1;
 VAR_4->active_local_updates = VAR_0;
}
