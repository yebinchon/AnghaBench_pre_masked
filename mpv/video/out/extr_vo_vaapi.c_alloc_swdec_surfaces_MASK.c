
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int * swdec_surfaces; int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct priv*) ;
 int FUNC_1 (int ,int ,int,int) ;
 scalar_t__ FUNC_2 (struct priv*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct priv *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    FUNC_0(VAR_2);
    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        VAR_2->swdec_surfaces[VAR_6] = FUNC_1(VAR_2->pool, VAR_0, VAR_3, VAR_4);
        if (FUNC_2(VAR_2, VAR_2->swdec_surfaces[VAR_6], VAR_5) < 0)
            return 0;
    }
    return 1;
}
