
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opts; } ;
typedef TYPE_2__ TableSpaceCacheEntry ;
struct TYPE_4__ {double random_page_cost; double seq_page_cost; } ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 double VAR_0 ;
 double VAR_1 ;

void
FUNC_2(Oid VAR_2,
        double *VAR_3,
        double *VAR_4)
{
 TableSpaceCacheEntry *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5 != ((void*)0));

 if (VAR_3)
 {
  if (!VAR_5->opts || VAR_5->opts->random_page_cost < 0)
   *VAR_3 = VAR_0;
  else
   *VAR_3 = VAR_5->opts->random_page_cost;
 }

 if (VAR_4)
 {
  if (!VAR_5->opts || VAR_5->opts->seq_page_cost < 0)
   *VAR_4 = VAR_1;
  else
   *VAR_4 = VAR_5->opts->seq_page_cost;
 }
}
