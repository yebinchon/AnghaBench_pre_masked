
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gs_texture_t ;
typedef int gs_technique_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void FUNC_8(gs_texture_t *VAR_0, gs_effect_t *VAR_1,
         uint32_t VAR_2, uint32_t VAR_3,
         const char *VAR_4)
{
 gs_technique_t *VAR_5 = FUNC_2(VAR_1, VAR_4);
 gs_eparam_t *VAR_6 = FUNC_1(VAR_1, "image");
 size_t VAR_7, VAR_8;

 FUNC_3(VAR_6, VAR_0);

 VAR_7 = FUNC_4(VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_5(VAR_5, VAR_8);
  FUNC_0(VAR_0, 0, VAR_2, VAR_3);
  FUNC_7(VAR_5);
 }
 FUNC_6(VAR_5);
}
