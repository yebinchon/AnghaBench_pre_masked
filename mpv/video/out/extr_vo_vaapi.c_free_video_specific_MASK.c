
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ pool; int * swdec_surfaces; int black_surface; } ;


 int VAR_0 ;
 int FUNC_0 (struct priv*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_1)
{
    FUNC_0(VAR_1);

    FUNC_2(&VAR_1->black_surface);

    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_2(&VAR_1->swdec_surfaces[VAR_2]);

    if (VAR_1->pool)
        FUNC_1(VAR_1->pool);
}
