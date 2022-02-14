
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cy; int cx; int texture; } ;
struct TYPE_3__ {TYPE_2__ image; } ;
struct image_source {TYPE_1__ if2; } ;
typedef int gs_effect_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, gs_effect_t *VAR_1)
{
 struct image_source *VAR_2 = VAR_0;

 if (!VAR_2->if2.image.texture)
  return;

 FUNC_2(FUNC_1(VAR_1, "image"),
         VAR_2->if2.image.texture);
 FUNC_0(VAR_2->if2.image.texture, 0, VAR_2->if2.image.cx,
         VAR_2->if2.image.cy);
}
