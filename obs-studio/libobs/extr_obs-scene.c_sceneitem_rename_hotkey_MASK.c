
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dstr {int array; int member_0; } ;
struct TYPE_6__ {int toggle_visibility; } ;
typedef TYPE_2__ obs_sceneitem_t ;
struct TYPE_5__ {char* sceneitem_show; char* sceneitem_hide; } ;
struct TYPE_7__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*,char const*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(const obs_sceneitem_t *VAR_1,
        const char *VAR_2)
{
 struct dstr VAR_3 = {0};
 struct dstr VAR_4 = {0};
 struct dstr VAR_5 = {0};
 struct dstr VAR_6 = {0};

 FUNC_0(&VAR_3, "libobs.show_scene_item.%1");
 FUNC_2(&VAR_3, "%1", VAR_2);
 FUNC_0(&VAR_4, "libobs.hide_scene_item.%1");
 FUNC_2(&VAR_4, "%1", VAR_2);

 FUNC_4(VAR_1->toggle_visibility, VAR_3.array,
      VAR_4.array);

 FUNC_0(&VAR_5, VAR_0->hotkeys.sceneitem_show);
 FUNC_2(&VAR_5, "%1", VAR_2);
 FUNC_0(&VAR_6, VAR_0->hotkeys.sceneitem_hide);
 FUNC_2(&VAR_6, "%1", VAR_2);

 FUNC_3(VAR_1->toggle_visibility,
      VAR_5.array, VAR_6.array);

 FUNC_1(&VAR_3);
 FUNC_1(&VAR_4);
 FUNC_1(&VAR_5);
 FUNC_1(&VAR_6);
}
