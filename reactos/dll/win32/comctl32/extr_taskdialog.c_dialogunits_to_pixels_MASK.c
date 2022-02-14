
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskdialog_template_desc {int y_baseunit; int x_baseunit; } ;
typedef int LONG ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(const struct taskdialog_template_desc *VAR_0, LONG *VAR_1, LONG *VAR_2)
{
    if (VAR_1)
        *VAR_1 = FUNC_0(*VAR_1, VAR_0->x_baseunit, 4);
    if (VAR_2)
        *VAR_2 = FUNC_0(*VAR_2, VAR_0->y_baseunit, 8);
}
