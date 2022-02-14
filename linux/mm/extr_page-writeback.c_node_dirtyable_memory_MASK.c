
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct pglist_data {int totalreserve_pages; struct zone* node_zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,int ) ;
 scalar_t__ FUNC_1 (struct pglist_data*,int ) ;
 int FUNC_2 (struct zone*) ;
 scalar_t__ FUNC_3 (struct zone*,int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct pglist_data *VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct zone *VAR_7 = VAR_4->node_zones + VAR_6;

  if (!FUNC_2(VAR_7))
   continue;

  VAR_5 += FUNC_3(VAR_7, VAR_2);
 }






 VAR_5 -= FUNC_0(VAR_5, VAR_4->totalreserve_pages);

 VAR_5 += FUNC_1(VAR_4, VAR_3);
 VAR_5 += FUNC_1(VAR_4, VAR_1);

 return VAR_5;
}
