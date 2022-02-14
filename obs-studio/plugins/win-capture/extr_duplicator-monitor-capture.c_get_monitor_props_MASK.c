
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_monitor_info {int y; int x; int cy; int cx; } ;
struct dstr {int array; int member_0; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 int FUNC_0 (struct dstr*,char*,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (int,struct gs_monitor_info*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static bool FUNC_4(obs_property_t *VAR_1, int VAR_2)
{
 struct dstr VAR_3 = {0};
 struct gs_monitor_info VAR_4;

 if (!FUNC_2(VAR_2, &VAR_4))
  return 0;

 FUNC_0(&VAR_3, "%s %d: %ldx%ld @ %ld,%ld", VAR_0,
    VAR_2 + 1, VAR_4.cx, VAR_4.cy, VAR_4.x, VAR_4.y);

 FUNC_3(VAR_1, VAR_3.array,
      VAR_2);

 FUNC_1(&VAR_3);

 return 1;
}
