
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_core_audio {int render_order; } ;
typedef int obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int **,int ) ;
 int FUNC_2 (int ,int **) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(obs_source_t *VAR_1, obs_source_t *VAR_2, void *VAR_3)
{
 struct obs_core_audio *VAR_4 = VAR_3;

 if (FUNC_1(VAR_4->render_order, &VAR_2, 0) == VAR_0) {
  obs_source_t *VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   FUNC_2(VAR_4->render_order, &VAR_5);
 }

 FUNC_0(VAR_1);
}
