
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_obj {int root_id; } ;
struct objagg_hints_node {unsigned int root_id; } ;
struct objagg {int root_ida; TYPE_1__* hints; } ;
struct TYPE_2__ {unsigned int root_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct objagg *VAR_2,
        struct objagg_obj *VAR_3,
        struct objagg_hints_node *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;


 if (!VAR_2->hints) {
  VAR_3->root_id = VAR_1;
  return 0;
 }

 if (VAR_4) {
  VAR_5 = VAR_4->root_id;
  VAR_6 = VAR_4->root_id;
 } else {



  VAR_5 = VAR_2->hints->root_count;
  VAR_6 = ~0;
 }

 VAR_7 = FUNC_0(&VAR_2->root_ida, VAR_5, VAR_6, VAR_0);

 if (VAR_7 < 0)
  return VAR_7;
 VAR_3->root_id = VAR_7;
 return 0;
}
