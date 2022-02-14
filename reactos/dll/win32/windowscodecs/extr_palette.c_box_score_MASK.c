
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct box {unsigned int r_max; unsigned int r_min; unsigned int g_max; unsigned int g_min; unsigned int b_max; unsigned int b_min; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct box *VAR_6)
{
    unsigned int VAR_7, VAR_8 = 0;
    VAR_7 = ((VAR_6->r_max - VAR_6->r_min) << VAR_5) * VAR_4; VAR_8 += VAR_7 * VAR_7;
    VAR_7 = ((VAR_6->g_max - VAR_6->g_min) << VAR_3) * VAR_2; VAR_8 += VAR_7 * VAR_7;
    VAR_7 = ((VAR_6->b_max - VAR_6->b_min) << VAR_1) * VAR_0; VAR_8 += VAR_7 * VAR_7;
    return VAR_8;
}
