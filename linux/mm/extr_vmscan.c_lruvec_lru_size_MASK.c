
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int dummy; } ;
struct lruvec {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;
struct TYPE_3__ {struct zone* node_zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct lruvec*) ;
 int FUNC_1 (struct zone*) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (struct lruvec*,int,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 unsigned long FUNC_5 (TYPE_1__*,int) ;
 unsigned long FUNC_6 (struct zone*,int) ;

unsigned long FUNC_7(struct lruvec *VAR_3, enum lru_list VAR_4, int VAR_5)
{
 unsigned long VAR_6 = 0;
 int VAR_7;

 if (!FUNC_2()) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   VAR_6 += FUNC_3(VAR_3, VAR_4, VAR_7);
 } else
  VAR_6 = FUNC_5(FUNC_0(VAR_3), VAR_1 + VAR_4);

 for (VAR_7 = VAR_5 + 1; VAR_7 < VAR_0; VAR_7++) {
  struct zone *VAR_8 = &FUNC_0(VAR_3)->node_zones[VAR_7];
  unsigned long VAR_9;

  if (!FUNC_1(VAR_8))
   continue;

  if (!FUNC_2())
   VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_7);
  else
   VAR_9 = FUNC_6(&FUNC_0(VAR_3)->node_zones[VAR_7],
           VAR_2 + VAR_4);
  VAR_6 -= FUNC_4(VAR_9, VAR_6);
 }

 return VAR_6;

}
