
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {int noscripterr; } ;
struct TYPE_8__ {int ptr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_1 ;

void FUNC_4(client *VAR_2) {
    if (FUNC_3(VAR_2->argv[1]->ptr) != 40) {




        FUNC_0(VAR_2, VAR_1.noscripterr);
        return;
    }
    if (!(VAR_2->flags & VAR_0))
        FUNC_2(VAR_2,1);
    else {
        FUNC_1(VAR_2,"Please use EVAL instead of EVALSHA for debugging");
        return;
    }
}
