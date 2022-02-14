
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef int LONG ;
typedef TYPE_1__ BitmapImpl ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(BitmapImpl *VAR_2, int VAR_3)
{
    if (VAR_3)
    {
        return 0 == FUNC_0(&VAR_2->lock, -1, 0);
    }
    else
    {
        while (1)
        {
            LONG VAR_4 = VAR_2->lock;
            if (VAR_4 == -1)
                return VAR_0;
            if (VAR_4 == FUNC_0(&VAR_2->lock, VAR_4+1, VAR_4))
                return VAR_1;
        }
    }
}
