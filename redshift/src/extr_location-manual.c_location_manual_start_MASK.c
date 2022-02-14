
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lon; int lat; } ;
struct TYPE_5__ {TYPE_1__ loc; } ;
typedef TYPE_2__ location_manual_state_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(location_manual_state_t *VAR_2)
{

 if (FUNC_3(VAR_2->loc.lat) || FUNC_3(VAR_2->loc.lon)) {
  FUNC_2(FUNC_0("Latitude and longitude must be set.\n"), VAR_1);
  FUNC_1(VAR_0);
 }

 return 0;
}
