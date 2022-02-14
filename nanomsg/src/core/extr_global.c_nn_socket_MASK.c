
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

int FUNC_7 (int VAR_6, int VAR_7)
{
    int VAR_8;

    FUNC_0 (&VAR_4, VAR_3);

    FUNC_4 (&VAR_5.lock);


    if (FUNC_6 (VAR_5.flags & VAR_1)) {
        FUNC_5 (&VAR_5.lock);
        VAR_2 = VAR_0;
        return -1;
    }


    FUNC_2 ();

    VAR_8 = FUNC_1 (VAR_6, VAR_7);

    if (VAR_8 < 0) {
        FUNC_3 ();
        FUNC_5 (&VAR_5.lock);
        VAR_2 = -VAR_8;
        return -1;
    }

    FUNC_5 (&VAR_5.lock);

    return VAR_8;
}
