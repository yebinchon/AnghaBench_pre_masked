
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dec_sub {int lock; int opts_cache; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dec_sub*) ;

void FUNC_4(struct dec_sub *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    if (FUNC_0(VAR_0->opts_cache))
        FUNC_3(VAR_0);
    FUNC_2(&VAR_0->lock);
}
