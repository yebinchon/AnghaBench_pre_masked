
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float lat; float lon; } ;
struct TYPE_5__ {TYPE_1__ loc; } ;
typedef TYPE_2__ location_manual_state_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 float FUNC_4 (char const*,char**) ;

__attribute__((used)) static int
FUNC_5(location_manual_state_t *VAR_2, const char *VAR_3,
      const char *VAR_4)
{

 char *VAR_5;
 VAR_0 = 0;
 float VAR_6 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_0 != 0 || *VAR_5 != '\0') {
  FUNC_2(FUNC_0("Malformed argument.\n"), VAR_1);
  return -1;
 }

 if (FUNC_3(VAR_3, "lat") == 0) {
  VAR_2->loc.lat = VAR_6;
 } else if (FUNC_3(VAR_3, "lon") == 0) {
  VAR_2->loc.lon = VAR_6;
 } else {
  FUNC_1(VAR_1, FUNC_0("Unknown method parameter: `%s'.\n"), VAR_3);
  return -1;
 }

 return 0;
}
