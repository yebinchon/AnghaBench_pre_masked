
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {int monitors; } ;
struct TYPE_8__ {int ok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_2(client *VAR_4) {

    if (VAR_4->flags & VAR_1) return;

    VAR_4->flags |= (VAR_1|VAR_0);
    FUNC_1(VAR_2.monitors,VAR_4);
    FUNC_0(VAR_4,VAR_3.ok);
}
