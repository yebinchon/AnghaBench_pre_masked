
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lavfi {int dummy; } ;
struct TYPE_3__ {int name; int pad_idx; int filter_ctx; struct TYPE_3__* next; } ;
typedef TYPE_1__ AVFilterInOut ;


 int FUNC_0 (struct lavfi*,int,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct lavfi *VAR_0, int VAR_1, AVFilterInOut *VAR_2, bool VAR_3)
{
    int VAR_4 = 0;
    for (; VAR_2; VAR_2 = VAR_2->next)
        FUNC_0(VAR_0, VAR_1, VAR_4++, VAR_2->filter_ctx, VAR_2->pad_idx, VAR_2->name, VAR_3);
}
