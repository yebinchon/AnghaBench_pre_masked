
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * async_prev_texrender; int ** async_prev_textures; int deinterlace_mode; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(obs_source_t *VAR_1)
{
 FUNC_2();
 FUNC_1(VAR_1->async_prev_textures[0]);
 FUNC_1(VAR_1->async_prev_textures[1]);
 FUNC_1(VAR_1->async_prev_textures[2]);
 FUNC_0(VAR_1->async_prev_texrender);
 VAR_1->deinterlace_mode = VAR_0;
 VAR_1->async_prev_textures[0] = ((void*)0);
 VAR_1->async_prev_textures[1] = ((void*)0);
 VAR_1->async_prev_textures[2] = ((void*)0);
 VAR_1->async_prev_texrender = ((void*)0);
 FUNC_3();
}
