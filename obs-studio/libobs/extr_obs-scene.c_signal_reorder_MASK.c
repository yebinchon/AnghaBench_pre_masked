
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_scene_item {int parent; } ;
struct calldata {int dummy; } ;
typedef int stack ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (int ,char const*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_2(struct obs_scene_item *VAR_0)
{
 const char *VAR_1 = ((void*)0);
 struct calldata VAR_2;
 uint8_t VAR_3[128];

 VAR_1 = "reorder";

 FUNC_0(&VAR_2, VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_0->parent, VAR_1, &VAR_2);
}
