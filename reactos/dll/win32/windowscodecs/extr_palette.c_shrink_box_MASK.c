
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {int dummy; } ;
struct box {int r_min; int r_max; int g_min; int g_max; int b_min; int b_max; int score; int count; } ;


 int FUNC_0 (struct histogram*,struct box*) ;
 int FUNC_1 (struct box*) ;
 scalar_t__ FUNC_2 (struct histogram*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct histogram *VAR_0, struct box *VAR_1)
{
    int VAR_2;
    for (VAR_2 = VAR_1->r_min; VAR_2 <= VAR_1->r_max; VAR_2++)
        if (FUNC_2(VAR_0, VAR_2, VAR_2, VAR_1->g_min, VAR_1->g_max, VAR_1->b_min, VAR_1->b_max)) { VAR_1->r_min = VAR_2; break; }
    for (VAR_2 = VAR_1->r_max; VAR_2 >= VAR_1->r_min; VAR_2--)
        if (FUNC_2(VAR_0, VAR_2, VAR_2, VAR_1->g_min, VAR_1->g_max, VAR_1->b_min, VAR_1->b_max)) { VAR_1->r_max = VAR_2; break; }
    for (VAR_2 = VAR_1->g_min; VAR_2 <= VAR_1->g_max; VAR_2++)
        if (FUNC_2(VAR_0, VAR_1->r_min, VAR_1->r_max, VAR_2, VAR_2, VAR_1->b_min, VAR_1->b_max)) { VAR_1->g_min = VAR_2; break; }
    for (VAR_2 = VAR_1->g_max; VAR_2 >= VAR_1->g_min; VAR_2--)
        if (FUNC_2(VAR_0, VAR_1->r_min, VAR_1->r_max, VAR_2, VAR_2, VAR_1->b_min, VAR_1->b_max)) { VAR_1->g_max = VAR_2; break; }
    for (VAR_2 = VAR_1->b_min; VAR_2 <= VAR_1->b_max; VAR_2++)
        if (FUNC_2(VAR_0, VAR_1->r_min, VAR_1->r_max, VAR_1->g_min, VAR_1->g_max, VAR_2, VAR_2)) { VAR_1->b_min = VAR_2; break; }
    for (VAR_2 = VAR_1->b_max; VAR_2 >= VAR_1->b_min; VAR_2--)
        if (FUNC_2(VAR_0, VAR_1->r_min, VAR_1->r_max, VAR_1->g_min, VAR_1->g_max, VAR_2, VAR_2)) { VAR_1->b_max = VAR_2; break; }
    VAR_1->count = FUNC_0(VAR_0, VAR_1);
    VAR_1->score = FUNC_1(VAR_1);
}
