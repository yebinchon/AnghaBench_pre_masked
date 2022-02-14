
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ UI ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(UI *VAR_5, int VAR_6, long VAR_7, void *VAR_8, void (*VAR_9) (void))
{
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_3, VAR_0);
        return -1;
    }
    switch (VAR_6) {
    case 128:
        {
            int VAR_10 = ! !(VAR_5->flags & VAR_1);
            if (VAR_7)
                VAR_5->flags |= VAR_1;
            else
                VAR_5->flags &= ~VAR_1;
            return VAR_10;
        }
    case 129:
        return ! !(VAR_5->flags & VAR_2);
    default:
        break;
    }
    FUNC_0(VAR_3, VAR_4);
    return -1;
}
