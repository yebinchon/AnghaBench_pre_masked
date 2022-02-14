
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {int dummy; } ;
struct box {int r_max; int r_min; int g_max; int g_min; int b_max; int b_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (struct histogram*,struct box*) ;

__attribute__((used)) static void FUNC_2(struct histogram *VAR_6, struct box *VAR_7, struct box *VAR_8)
{
    int VAR_9 = ((VAR_7->r_max - VAR_7->r_min) << VAR_5) * VAR_4;
    int VAR_10 = ((VAR_7->g_max - VAR_7->g_min) << VAR_3) * VAR_2;
    int VAR_11 = ((VAR_7->b_max - VAR_7->b_min) << VAR_1) * VAR_0;

    *VAR_8 = *VAR_7;

    if (VAR_9 > VAR_10)
    {
        if (VAR_11 > VAR_9) FUNC_0(&VAR_7->b_min, &VAR_8->b_max);
        else FUNC_0(&VAR_7->r_min, &VAR_8->r_max);
    }
    else
    {
        if (VAR_11 > VAR_10) FUNC_0(&VAR_7->b_min, &VAR_8->b_max);
        else FUNC_0(&VAR_7->g_min, &VAR_8->g_max);
    }

    FUNC_1(VAR_6, VAR_7);
    FUNC_1(VAR_6, VAR_8);
}
