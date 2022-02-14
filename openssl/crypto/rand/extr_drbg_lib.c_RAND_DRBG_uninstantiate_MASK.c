
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int type; TYPE_1__* meth; int state; } ;
struct TYPE_6__ {int (* uninstantiate ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(RAND_DRBG *VAR_11)
{
    int VAR_12 = -1, VAR_13, VAR_14;
    if (VAR_11->meth == ((void*)0)) {
        VAR_11->state = VAR_0;
        FUNC_1(VAR_7,
                VAR_8);
        return 0;
    }





    VAR_11->meth->uninstantiate(VAR_11);


    if (VAR_11->flags & VAR_1)
        VAR_12 = VAR_4;
    else if (VAR_11->flags & VAR_2)
        VAR_12 = VAR_5;
    else if (VAR_11->flags & VAR_3)
        VAR_12 = VAR_6;

    if (VAR_12 != -1) {
        VAR_14 = VAR_9[VAR_12];
        VAR_13 = VAR_10[VAR_12];
    } else {
        VAR_14 = VAR_11->flags;
        VAR_13 = VAR_11->type;
    }
    return FUNC_0(VAR_11, VAR_13, VAR_14);
}
