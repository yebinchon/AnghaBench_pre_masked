
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int ok; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

void FUNC_3(client *VAR_2) {
    if (!(VAR_2->flags & VAR_0)) {
        FUNC_1(VAR_2,"DISCARD without MULTI");
        return;
    }
    FUNC_2(VAR_2);
    FUNC_0(VAR_2,VAR_1.ok);
}
