
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* lon; void* lat; } ;
struct TYPE_6__ {TYPE_1__ loc; } ;
typedef TYPE_2__ location_manual_state_t ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(location_manual_state_t **VAR_1)
{
 *VAR_1 = FUNC_0(sizeof(location_manual_state_t));
 if (*VAR_1 == ((void*)0)) return -1;

 location_manual_state_t *VAR_2 = *VAR_1;
 VAR_2->loc.lat = VAR_0;
 VAR_2->loc.lon = VAR_0;

 return 0;
}
