
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {scalar_t__ cluster_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_4(client *VAR_2) {
    int VAR_3 = FUNC_3(VAR_2->argv[1],VAR_2->argv[2]);
    if (VAR_1.cluster_enabled)
        FUNC_1(VAR_2->argv[1],VAR_2->argv[2]);
    else
        FUNC_2(VAR_2,VAR_0);
    FUNC_0(VAR_2,VAR_3);
}
