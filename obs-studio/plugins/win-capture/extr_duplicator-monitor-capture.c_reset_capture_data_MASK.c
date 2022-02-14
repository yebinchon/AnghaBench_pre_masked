
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_monitor_info {int rotation_degrees; int y; int x; int member_0; } ;
struct duplicator_capture {int rot; int y; int x; int height; int width; int monitor; int duplicator; } ;
typedef int gs_texture_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,struct gs_monitor_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct duplicator_capture *VAR_0)
{
 struct gs_monitor_info VAR_1 = {0};
 gs_texture_t *VAR_2 = FUNC_0(VAR_0->duplicator);

 FUNC_1(VAR_0->monitor, &VAR_1);
 VAR_0->width = FUNC_3(VAR_2);
 VAR_0->height = FUNC_2(VAR_2);
 VAR_0->x = VAR_1.x;
 VAR_0->y = VAR_1.y;
 VAR_0->rot = VAR_1.rotation_degrees;
}
