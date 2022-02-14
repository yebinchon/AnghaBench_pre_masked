
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_4__ {int selected; int parent; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char const*,struct calldata*) ;

void FUNC_3(obs_sceneitem_t *VAR_0, bool VAR_1)
{
 struct calldata VAR_2;
 uint8_t VAR_3[128];
 const char *VAR_4 = VAR_1 ? "item_select" : "item_deselect";

 if (!VAR_0 || VAR_0->selected == VAR_1 || !VAR_0->parent)
  return;

 VAR_0->selected = VAR_1;

 FUNC_0(&VAR_2, VAR_3, sizeof(VAR_3));
 FUNC_1(&VAR_2, "item", VAR_0);

 FUNC_2(VAR_0->parent, VAR_4, &VAR_2);
}
