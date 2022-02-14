
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fade_to_color_info {float switch_point; } ;


 float FUNC_0 (float,float,int ) ;
 int FUNC_1 (float,float,float) ;

__attribute__((used)) static float FUNC_2(void *VAR_0, float VAR_1)
{
 struct fade_to_color_info *VAR_2 = VAR_0;
 float VAR_3 = VAR_2->switch_point;

 return FUNC_0(0.0f, VAR_1, FUNC_1(VAR_3, 1.0f, VAR_1));
}
