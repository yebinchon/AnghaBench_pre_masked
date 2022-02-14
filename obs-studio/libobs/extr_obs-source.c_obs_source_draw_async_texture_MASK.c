
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source {int dummy; } ;
typedef int gs_technique_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (struct obs_source*,int *) ;

__attribute__((used)) static void FUNC_8(struct obs_source *VAR_1)
{
 gs_effect_t *VAR_2 = FUNC_1();
 bool VAR_3 = (!VAR_2);
 gs_technique_t *VAR_4 = ((void*)0);

 if (VAR_3) {
  VAR_2 = FUNC_6(VAR_0);
  VAR_4 = FUNC_0(VAR_2, "Draw");
  FUNC_2(VAR_4);
  FUNC_3(VAR_4, 0);
 }

 FUNC_7(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
 }
}
