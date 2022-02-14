
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct duplicator_capture {int rot; int width; int height; int y; int x; int cursor_data; } ;


 int FUNC_0 (int *,int ,int ,float,float,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct duplicator_capture *VAR_0)
{
 FUNC_0(&VAR_0->cursor_data, -VAR_0->x, -VAR_0->y, 1.0f, 1.0f,
      VAR_0->rot % 180 == 0 ? VAR_0->width : VAR_0->height,
      VAR_0->rot % 180 == 0 ? VAR_0->height : VAR_0->width);
}
