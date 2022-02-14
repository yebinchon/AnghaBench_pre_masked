
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_matrix {float _11; } ;
struct wined3d_context {TYPE_1__* d3d_info; } ;
struct TYPE_2__ {int wined3d_creation_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_matrix*,struct wined3d_matrix*) ;
 int FUNC_1 (struct wined3d_matrix*,struct wined3d_matrix*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_context *VAR_1, struct wined3d_matrix *VAR_2, float *VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_1->d3d_info->wined3d_creation_flags & VAR_0)
        FUNC_1(VAR_2, VAR_2);
    else
        FUNC_0(VAR_2, VAR_2);



    for (VAR_4 = 0; VAR_4 < 3; ++VAR_4)
        for (VAR_5 = 0; VAR_5 < 3; ++VAR_5)
            VAR_3[VAR_4 * 3 + VAR_5] = (&VAR_2->_11)[VAR_5 * 4 + VAR_4];
}
