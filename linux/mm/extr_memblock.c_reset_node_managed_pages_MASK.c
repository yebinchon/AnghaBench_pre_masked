
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int managed_pages; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(pg_data_t *VAR_1)
{
 struct zone *VAR_2;

 for (VAR_2 = VAR_1->node_zones; VAR_2 < VAR_1->node_zones + VAR_0; VAR_2++)
  FUNC_0(&VAR_2->managed_pages, 0);
}
