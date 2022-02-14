
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_device {TYPE_1__** cur_textures; } ;
struct TYPE_2__ {int gl_target; } ;
typedef size_t GLenum ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gs_device *VAR_2)
{
 GLenum VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->cur_textures[VAR_3]) {
   FUNC_0(VAR_0 + VAR_3);
   FUNC_1(VAR_2->cur_textures[VAR_3]->gl_target, 0);
   VAR_2->cur_textures[VAR_3] = ((void*)0);
  }
 }
}
