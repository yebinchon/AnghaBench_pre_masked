
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fade_info {int effect; int fade_param; int b_param; int a_param; } ;
typedef int gs_texture_t ;


 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, gs_texture_t *VAR_1, gs_texture_t *VAR_2, float VAR_3,
     uint32_t VAR_4, uint32_t VAR_5)
{
 struct fade_info *VAR_6 = VAR_0;

 FUNC_3(VAR_6->a_param, VAR_1);
 FUNC_3(VAR_6->b_param, VAR_2);
 FUNC_2(VAR_6->fade_param, VAR_3);

 while (FUNC_1(VAR_6->effect, "Fade"))
  FUNC_0(((void*)0), 0, VAR_4, VAR_5);
}
