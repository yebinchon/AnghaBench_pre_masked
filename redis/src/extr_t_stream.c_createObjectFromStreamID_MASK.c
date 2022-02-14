
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seq; int ms; } ;
typedef TYPE_1__ streamID ;
typedef int robj ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 () ;

robj *FUNC_3(streamID *VAR_1) {
    return FUNC_0(VAR_0, FUNC_1(FUNC_2(),"%U-%U",
                        VAR_1->ms,VAR_1->seq));
}
