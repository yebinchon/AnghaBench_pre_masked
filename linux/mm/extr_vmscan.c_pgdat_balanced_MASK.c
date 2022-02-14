
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int dummy; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 unsigned long FUNC_0 (struct zone*) ;
 int FUNC_1 (struct zone*) ;
 scalar_t__ FUNC_2 (struct zone*,int,unsigned long,int) ;

__attribute__((used)) static bool FUNC_3(pg_data_t *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = -1;
 struct zone *VAR_5;





 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++) {
  VAR_5 = VAR_0->node_zones + VAR_3;

  if (!FUNC_1(VAR_5))
   continue;

  VAR_4 = FUNC_0(VAR_5);
  if (FUNC_2(VAR_5, VAR_1, VAR_4, VAR_2))
   return 1;
 }






 if (VAR_4 == -1)
  return 1;

 return 0;
}
