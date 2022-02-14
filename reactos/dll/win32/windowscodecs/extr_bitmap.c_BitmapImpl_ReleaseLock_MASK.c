
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef int LONG ;
typedef TYPE_1__ BitmapImpl ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static void FUNC_1(BitmapImpl *VAR_0)
{
    while (1)
    {
        LONG VAR_1 = VAR_0->lock, VAR_2;
        if (VAR_1 == -1)
            VAR_2 = 0;
        else
            VAR_2 = VAR_1 - 1;
        if (VAR_1 == FUNC_0(&VAR_0->lock, VAR_2, VAR_1))
            break;
    }
}
