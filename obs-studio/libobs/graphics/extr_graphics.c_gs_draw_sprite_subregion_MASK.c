
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
 int FUNC_1 (struct gs_vb_data*,float,float,float,float,float,float,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct gs_vb_data* FUNC_9 (int ) ;
 TYPE_1__* VAR_3 ;

void FUNC_10(gs_texture_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
         uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 graphics_t *VAR_10 = VAR_3;
 float VAR_11, VAR_12;
 struct gs_vb_data *VAR_13;

 if (VAR_4) {
  if (FUNC_3(VAR_4) != VAR_0) {
   FUNC_0(VAR_2, "A sprite must be a 2D texture");
   return;
  }
 }

 VAR_11 = (float)FUNC_7(VAR_4);
 VAR_12 = (float)FUNC_6(VAR_4);

 VAR_13 = FUNC_9(VAR_10->sprite_buffer);
 FUNC_1(VAR_13, (float)VAR_6, (float)VAR_7, (float)VAR_8,
        (float)VAR_9, VAR_11, VAR_12, VAR_5);

 FUNC_8(VAR_10->sprite_buffer);
 FUNC_5(VAR_10->sprite_buffer);
 FUNC_4(((void*)0));

 FUNC_2(VAR_1, 0, 0);
}
