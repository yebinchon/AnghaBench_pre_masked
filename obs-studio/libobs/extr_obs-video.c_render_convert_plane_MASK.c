
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gs_texture_t ;
typedef int gs_technique_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int const,int const) ;

__attribute__((used)) static void FUNC_10(gs_effect_t *VAR_1, gs_texture_t *VAR_2,
     const char *VAR_3)
{
 gs_technique_t *VAR_4 = FUNC_1(VAR_1, VAR_3);

 const uint32_t VAR_5 = FUNC_8(VAR_2);
 const uint32_t VAR_6 = FUNC_7(VAR_2);

 FUNC_2(VAR_2, ((void*)0));
 FUNC_9(VAR_5, VAR_6);

 size_t VAR_7 = FUNC_3(VAR_4);
 for (size_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_4(VAR_4, VAR_8);
  FUNC_0(VAR_0, 0, 3);
  FUNC_6(VAR_4);
 }
 FUNC_5(VAR_4);
}
