
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ visible_surface; scalar_t__ output_surface; int * output_surfaces; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_0(&VAR_1->output_surfaces[VAR_2]);
    VAR_1->output_surface = 0;
    VAR_1->visible_surface = 0;
}
