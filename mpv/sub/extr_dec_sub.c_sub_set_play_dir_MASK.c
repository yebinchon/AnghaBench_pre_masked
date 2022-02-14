
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dec_sub {int play_dir; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dec_sub *VAR_0, int VAR_1)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->play_dir = VAR_1;
    FUNC_1(&VAR_0->lock);
}
