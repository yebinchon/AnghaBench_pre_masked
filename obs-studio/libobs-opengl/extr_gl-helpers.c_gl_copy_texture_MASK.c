
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_texture {int gl_target; int texture; } ;
struct gs_device {scalar_t__ copy_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct gs_texture*,int ,int ,struct gs_texture*,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;

bool FUNC_5(struct gs_device *VAR_4, struct gs_texture *VAR_5,
       uint32_t VAR_6, uint32_t VAR_7, struct gs_texture *VAR_8,
       uint32_t VAR_9, uint32_t VAR_10, uint32_t VAR_11,
       uint32_t VAR_12)
{
 bool VAR_13 = 0;

 if (VAR_4->copy_type == VAR_0) {
  FUNC_1(VAR_8->texture, VAR_8->gl_target, 0, VAR_9,
       VAR_10, 0, VAR_5->texture, VAR_5->gl_target, 0,
       VAR_6, VAR_7, 0, VAR_11, VAR_12, 1);
  VAR_13 = FUNC_4("glCopyImageSubData");

 } else if (VAR_4->copy_type == VAR_2) {
  FUNC_2(VAR_8->texture, VAR_8->gl_target, 0, VAR_9,
         VAR_10, 0, VAR_5->texture, VAR_5->gl_target, 0,
         VAR_6, VAR_7, 0, VAR_11, VAR_12, 1);
  VAR_13 = FUNC_4("glCopyImageSubDataNV");

 } else if (VAR_4->copy_type == VAR_1) {
  VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_11, VAR_12);
  if (!VAR_13)
   FUNC_0(VAR_3, "gl_copy_texture failed");
 }

 return VAR_13;
}
