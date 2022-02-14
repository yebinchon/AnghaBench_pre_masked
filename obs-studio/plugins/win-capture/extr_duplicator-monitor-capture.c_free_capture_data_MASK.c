
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct duplicator_capture {float reset_timeout; scalar_t__ rot; scalar_t__ y; scalar_t__ x; scalar_t__ height; scalar_t__ width; int * duplicator; int cursor_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct duplicator_capture *VAR_0)
{
 FUNC_1(VAR_0->duplicator);
 FUNC_0(&VAR_0->cursor_data);
 VAR_0->duplicator = ((void*)0);
 VAR_0->width = 0;
 VAR_0->height = 0;
 VAR_0->x = 0;
 VAR_0->y = 0;
 VAR_0->rot = 0;
 VAR_0->reset_timeout = 0.0f;
}
