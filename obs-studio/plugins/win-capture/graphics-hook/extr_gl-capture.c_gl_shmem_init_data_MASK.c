
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cy; int cx; int * textures; int * pbos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,size_t,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static inline bool FUNC_5(size_t VAR_7, size_t VAR_8)
{
 FUNC_0(VAR_1, VAR_6.pbos[VAR_7]);
 if (FUNC_4("gl_shmem_init_data", "failed to bind pbo")) {
  return 0;
 }

 FUNC_2(VAR_1, VAR_8, 0, VAR_3);
 if (FUNC_4("gl_shmem_init_data", "failed to set pbo data")) {
  return 0;
 }

 FUNC_1(VAR_4, VAR_6.textures[VAR_7]);
 if (FUNC_4("gl_shmem_init_data", "failed to set bind texture")) {
  return 0;
 }

 FUNC_3(VAR_4, 0, VAR_2, VAR_6.cx, VAR_6.cy, 0, VAR_0,
       VAR_5, ((void*)0));
 if (FUNC_4("gl_shmem_init_data", "failed to set texture data")) {
  return 0;
 }

 return 1;
}
