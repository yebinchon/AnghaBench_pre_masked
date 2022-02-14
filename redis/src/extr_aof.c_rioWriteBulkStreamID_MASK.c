
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seq; int ms; } ;
typedef TYPE_1__ streamID ;
typedef int sds ;
typedef int rio ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(rio *VAR_0,streamID *VAR_1) {
    int VAR_2;

    sds VAR_3 = FUNC_1(FUNC_2(),"%U-%U",VAR_1->ms,VAR_1->seq);
    if ((VAR_2 = FUNC_0(VAR_0,VAR_3,FUNC_4(VAR_3))) == 0) return 0;
    FUNC_3(VAR_3);
    return VAR_2;
}
