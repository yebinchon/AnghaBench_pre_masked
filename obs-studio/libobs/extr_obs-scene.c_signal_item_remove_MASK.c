
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_scene_item {int parent; } ;
struct calldata {int dummy; } ;
typedef int stack ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,struct obs_scene_item*) ;
 int FUNC_2 (int ,char*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_3(struct obs_scene_item *VAR_0)
{
 struct calldata VAR_1;
 uint8_t VAR_2[128];

 FUNC_0(&VAR_1, VAR_2, sizeof(VAR_2));
 FUNC_1(&VAR_1, "item", VAR_0);

 FUNC_2(VAR_0->parent, "item_remove", &VAR_1);
}
