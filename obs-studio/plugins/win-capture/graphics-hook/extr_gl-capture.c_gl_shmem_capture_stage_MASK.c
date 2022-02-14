
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static inline void FUNC_4(GLuint VAR_4, GLuint VAR_5)
{
 FUNC_1(VAR_2, VAR_5);
 if (FUNC_3("gl_shmem_capture_stage", "failed to bind src_tex")) {
  return;
 }

 FUNC_0(VAR_1, VAR_4);
 if (FUNC_3("gl_shmem_capture_stage", "failed to bind dst_pbo")) {
  return;
 }

 FUNC_2(VAR_2, 0, VAR_0, VAR_3, 0);
 if (FUNC_3("gl_shmem_capture_stage", "failed to read src_tex")) {
  return;
 }
}
