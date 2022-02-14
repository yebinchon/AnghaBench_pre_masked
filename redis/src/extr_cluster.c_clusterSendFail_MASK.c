
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nodename; } ;
struct TYPE_8__ {TYPE_1__ about; } ;
struct TYPE_9__ {TYPE_2__ fail; } ;
struct TYPE_10__ {int totlen; TYPE_3__ data; } ;
typedef TYPE_4__ clusterMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(char *VAR_2) {
    clusterMsg VAR_3[1];
    clusterMsg *VAR_4 = (clusterMsg*) VAR_3;

    FUNC_1(VAR_4,VAR_0);
    FUNC_2(VAR_4->data.fail.about.nodename,VAR_2,VAR_1);
    FUNC_0(VAR_3,FUNC_3(VAR_4->totlen));
}
