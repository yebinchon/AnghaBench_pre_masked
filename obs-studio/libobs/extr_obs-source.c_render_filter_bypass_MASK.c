
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_source_t ;
typedef int gs_technique_t ;
typedef int gs_effect_t ;


 int * FUNC_0 (int *,char const*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(obs_source_t *VAR_0,
     gs_effect_t *VAR_1,
     const char *VAR_2)
{
 gs_technique_t *VAR_3 = FUNC_0(VAR_1, VAR_2);
 size_t VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_2(VAR_3, VAR_5);
  FUNC_5(VAR_0);
  FUNC_4(VAR_3);
 }
 FUNC_3(VAR_3);
}
