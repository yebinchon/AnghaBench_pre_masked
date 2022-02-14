
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int seq; int ms; } ;
typedef TYPE_1__ streamID ;
typedef int e ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,int) ;

void FUNC_2(void *VAR_0, streamID *VAR_1) {
    uint64_t VAR_2[2];
    VAR_2[0] = FUNC_0(VAR_1->ms);
    VAR_2[1] = FUNC_0(VAR_1->seq);
    FUNC_1(VAR_0,VAR_2,sizeof(VAR_2));
}
