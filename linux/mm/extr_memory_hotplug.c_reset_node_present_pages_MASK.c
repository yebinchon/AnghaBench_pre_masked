
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {scalar_t__ present_pages; } ;
struct TYPE_3__ {scalar_t__ node_present_pages; struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(pg_data_t *VAR_1)
{
 struct zone *VAR_2;

 for (VAR_2 = VAR_1->node_zones; VAR_2 < VAR_1->node_zones + VAR_0; VAR_2++)
  VAR_2->present_pages = 0;

 VAR_1->node_present_pages = 0;
}
