
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {scalar_t__ watermark_boost; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (struct zone*) ;

__attribute__((used)) static bool FUNC_1(pg_data_t *VAR_0, int VAR_1)
{
 int VAR_2;
 struct zone *VAR_3;
 for (VAR_2 = VAR_1; VAR_2 >= 0; VAR_2--) {
  VAR_3 = VAR_0->node_zones + VAR_2;
  if (!FUNC_0(VAR_3))
   continue;

  if (VAR_3->watermark_boost)
   return 1;
 }

 return 0;
}
