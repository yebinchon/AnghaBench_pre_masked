
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dstr {int array; int member_0; } ;
struct TYPE_10__ {int toggle_visibility; } ;
typedef TYPE_2__ obs_sceneitem_t ;
struct TYPE_11__ {int source; } ;
typedef TYPE_3__ obs_scene_t ;
struct TYPE_9__ {char* sceneitem_show; char* sceneitem_hide; } ;
struct TYPE_12__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(obs_scene_t *VAR_3, obs_sceneitem_t *VAR_4,
    const char *VAR_5)
{
 struct dstr VAR_6 = {0};
 struct dstr VAR_7 = {0};
 struct dstr VAR_8 = {0};
 struct dstr VAR_9 = {0};

 FUNC_0(&VAR_6, "libobs.show_scene_item.%1");
 FUNC_2(&VAR_6, "%1", VAR_5);
 FUNC_0(&VAR_7, "libobs.hide_scene_item.%1");
 FUNC_2(&VAR_7, "%1", VAR_5);

 FUNC_0(&VAR_8, VAR_2->hotkeys.sceneitem_show);
 FUNC_2(&VAR_8, "%1", VAR_5);
 FUNC_0(&VAR_9, VAR_2->hotkeys.sceneitem_hide);
 FUNC_2(&VAR_9, "%1", VAR_5);

 VAR_4->toggle_visibility = FUNC_3(
  VAR_3->source, VAR_6.array, VAR_8.array, VAR_7.array,
  VAR_9.array, VAR_1, VAR_0,
  VAR_4, VAR_4);

 FUNC_1(&VAR_6);
 FUNC_1(&VAR_7);
 FUNC_1(&VAR_8);
 FUNC_1(&VAR_9);
}
