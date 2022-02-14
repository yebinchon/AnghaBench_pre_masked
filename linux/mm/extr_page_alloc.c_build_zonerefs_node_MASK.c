
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zoneref {int dummy; } ;
struct zone {int dummy; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct zone*) ;
 int FUNC_2 (struct zone*,struct zoneref*) ;

__attribute__((used)) static int FUNC_3(pg_data_t *VAR_1, struct zoneref *VAR_2)
{
 struct zone *VAR_3;
 enum zone_type VAR_4 = VAR_0;
 int VAR_5 = 0;

 do {
  VAR_4--;
  VAR_3 = VAR_1->node_zones + VAR_4;
  if (FUNC_1(VAR_3)) {
   FUNC_2(VAR_3, &VAR_2[VAR_5++]);
   FUNC_0(VAR_4);
  }
 } while (VAR_4);

 return VAR_5;
}
