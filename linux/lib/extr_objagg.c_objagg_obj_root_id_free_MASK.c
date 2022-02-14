
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int root_id; } ;
struct objagg {int root_ida; int hints; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct objagg *VAR_0,
        struct objagg_obj *VAR_1)
{
 if (!VAR_0->hints)
  return;
 FUNC_0(&VAR_0->root_ida, VAR_1->root_id);
}
