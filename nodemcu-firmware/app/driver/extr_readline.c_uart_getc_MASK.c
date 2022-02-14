
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* pReadPos; scalar_t__* pRcvMsgBuff; scalar_t__* pWritePos; } ;
struct TYPE_4__ {TYPE_1__ rcv_buff; } ;
typedef TYPE_1__ RcvMsgBuff ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

bool FUNC_2(char *VAR_2){
    RcvMsgBuff *VAR_3 = &(VAR_1.rcv_buff);
    if(VAR_3->pWritePos == VAR_3->pReadPos){
        return 0;
    }

    FUNC_0();
    *VAR_2 = (char)*(VAR_3->pReadPos);
    if (VAR_3->pReadPos == (VAR_3->pRcvMsgBuff + VAR_0)) {
        VAR_3->pReadPos = VAR_3->pRcvMsgBuff ;
    } else {
        VAR_3->pReadPos++;
    }

    FUNC_1();
    return 1;
}
