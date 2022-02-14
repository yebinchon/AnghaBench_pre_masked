
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_tex; int copy_wait; int* texture_mapped; int* texture_ready; int * pbos; int * textures; } ;
typedef int GLuint ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_7;
 GLint VAR_8;
 GLint VAR_9;

 FUNC_2(VAR_1, &VAR_8);
 if (FUNC_5("gl_shmem_capture", "failed to get last fbo")) {
  return;
 }

 FUNC_2(VAR_4, &VAR_9);
 if (FUNC_5("gl_shmem_capture", "failed to get last texture")) {
  return;
 }

 FUNC_6();

 VAR_7 = (VAR_6.cur_tex == VAR_5 - 1) ? 0 : VAR_6.cur_tex + 1;

 FUNC_4(VAR_6.textures[VAR_7]);

 if (VAR_6.copy_wait < VAR_5 - 1) {
  VAR_6.copy_wait++;
 } else {
  GLuint VAR_10 = VAR_6.textures[VAR_7];
  GLuint VAR_11 = VAR_6.pbos[VAR_7];

  if (FUNC_8(VAR_7)) {
   FUNC_3(VAR_2);
   VAR_6.texture_mapped[VAR_7] = 0;
   FUNC_9(VAR_7);
  }

  FUNC_7(VAR_11, VAR_10);
  VAR_6.texture_ready[VAR_7] = 1;
 }

 FUNC_1(VAR_3, VAR_9);
 FUNC_0(VAR_0, VAR_8);
}
