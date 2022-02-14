
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; size_t reploff; int pending_querybuf; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int slaves; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,size_t,int) ;
 TYPE_2__ VAR_1 ;

void FUNC_3(client *VAR_2) {
    if (!(VAR_2->flags & VAR_0)) {
        FUNC_0(VAR_2);
    } else {






        size_t VAR_3 = VAR_2->reploff;
        FUNC_0(VAR_2);
        size_t VAR_4 = VAR_2->reploff - VAR_3;
        if (VAR_4) {
            FUNC_1(VAR_1.slaves,
                    VAR_2->pending_querybuf, VAR_4);
            FUNC_2(VAR_2->pending_querybuf,VAR_4,-1);
        }
    }
}
