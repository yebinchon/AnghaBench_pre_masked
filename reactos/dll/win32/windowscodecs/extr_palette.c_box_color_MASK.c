
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {int dummy; } ;
struct box {int b_max; int b_min; int g_max; int g_min; int r_max; int r_min; } ;


 unsigned int FUNC_0 (struct histogram*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct histogram *VAR_0, struct box *VAR_1)
{
    return FUNC_0(VAR_0, VAR_1->r_min, VAR_1->r_max, VAR_1->g_min, VAR_1->g_max, VAR_1->b_min, VAR_1->b_max);
}
