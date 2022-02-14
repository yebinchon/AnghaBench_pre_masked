
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source {scalar_t__ async_flip; scalar_t__ async_texrender; int ** async_textures; } ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct obs_source *VAR_1,
        gs_effect_t *VAR_2)
{
 gs_texture_t *VAR_3 = VAR_1->async_textures[0];
 gs_eparam_t *VAR_4;

 if (VAR_1->async_texrender)
  VAR_3 = FUNC_3(VAR_1->async_texrender);

 VAR_4 = FUNC_1(VAR_2, "image");
 FUNC_2(VAR_4, VAR_3);

 FUNC_0(VAR_3, VAR_1->async_flip ? VAR_0 : 0, 0, 0);
}
