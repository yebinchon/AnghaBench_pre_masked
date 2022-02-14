
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range6List {scalar_t__ picker; scalar_t__ list; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct Range6List*,int ,int) ;

void
FUNC_2(struct Range6List *VAR_0)
{
    if (VAR_0->list)
        FUNC_0(VAR_0->list);
    if (VAR_0->picker)
        FUNC_0(VAR_0->picker);
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
