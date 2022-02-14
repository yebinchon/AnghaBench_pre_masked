
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct gs_vb_data {int dummy; } ;
typedef int gs_texture_t ;
struct TYPE_3__ {int sprite_buffer; } ;
typedef TYPE_1__ graphics_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gs_vb_data*,float,float,scalar_t__) ;
 int FUNC_2 (struct gs_vb_data*,int *,float,float,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 struct gs_vb_data* FUNC_11 (int ) ;
 TYPE_1__* VAR_3 ;

void FUNC_12(gs_texture_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
      uint32_t VAR_7)
{
 graphics_t *VAR_8 = VAR_3;
 float VAR_9, VAR_10;
 struct gs_vb_data *VAR_11;

 if (VAR_4) {
  if (FUNC_4(VAR_4) != VAR_0) {
   FUNC_0(VAR_2, "A sprite must be a 2D texture");
   return;
  }
 } else {
  if (!VAR_6 || !VAR_7) {
   FUNC_0(VAR_2, "A sprite cannot be drawn without "
     "a width/height");
   return;
  }
 }

 VAR_9 = VAR_6 ? (float)VAR_6 : (float)FUNC_8(VAR_4);
 VAR_10 = VAR_7 ? (float)VAR_7 : (float)FUNC_7(VAR_4);

 VAR_11 = FUNC_11(VAR_8->sprite_buffer);
 if (VAR_4 && FUNC_9(VAR_4))
  FUNC_2(VAR_11, VAR_4, VAR_9, VAR_10, VAR_5);
 else
  FUNC_1(VAR_11, VAR_9, VAR_10, VAR_5);

 FUNC_10(VAR_8->sprite_buffer);
 FUNC_6(VAR_8->sprite_buffer);
 FUNC_5(((void*)0));

 FUNC_3(VAR_1, 0, 0);
}
