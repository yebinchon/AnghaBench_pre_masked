
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist {int current_was_replaced; int current; scalar_t__ first; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct playlist*,scalar_t__) ;

void FUNC_2(struct playlist *VAR_0)
{
    while (VAR_0->first)
        FUNC_1(VAR_0, VAR_0->first);
    FUNC_0(!VAR_0->current);
    VAR_0->current_was_replaced = 0;
}
