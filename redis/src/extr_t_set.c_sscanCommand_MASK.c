
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {int emptyscan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ) ;
 int * FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,unsigned long*) ;
 int FUNC_3 (TYPE_1__*,int *,unsigned long) ;
 TYPE_3__ VAR_2 ;

void FUNC_4(client *VAR_3) {
    robj *VAR_4;
    unsigned long VAR_5;

    if (FUNC_2(VAR_3,VAR_3->argv[2],&VAR_5) == VAR_0) return;
    if ((VAR_4 = FUNC_1(VAR_3,VAR_3->argv[1],VAR_2.emptyscan)) == ((void*)0) ||
        FUNC_0(VAR_3,VAR_4,VAR_1)) return;
    FUNC_3(VAR_3,VAR_4,VAR_5);
}
