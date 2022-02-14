
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int cx; int cy; int textures; int pbos; } ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (size_t,int) ;

__attribute__((used)) static inline bool FUNC_7(void)
{
 uint32_t VAR_6 = VAR_5.cx * VAR_5.cy * 4;
 GLint VAR_7;
 GLint VAR_8;

 FUNC_2(VAR_4, VAR_5.pbos);
 if (FUNC_5("gl_shmem_init_buffers", "failed to generate buffers")) {
  return 0;
 }

 FUNC_3(VAR_4, VAR_5.textures);
 if (FUNC_5("gl_shmem_init_buffers", "failed to generate textures")) {
  return 0;
 }

 FUNC_4(VAR_1, &VAR_7);
 if (FUNC_5("gl_shmem_init_buffers",
       "failed to save pixel pack buffer")) {
  return 0;
 }

 FUNC_4(VAR_3, &VAR_8);
 if (FUNC_5("gl_shmem_init_buffers", "failed to save texture")) {
  return 0;
 }

 for (size_t VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (!FUNC_6(VAR_9, VAR_6)) {
   return 0;
  }
 }

 FUNC_0(VAR_0, VAR_7);
 FUNC_1(VAR_2, VAR_8);
 return 1;
}
