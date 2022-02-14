
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
struct TYPE_2__ {scalar_t__ maxlen; int maxlen_hint_sent; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

void FUNC_5(sds VAR_1) {
    int VAR_2 = 0;
    if (VAR_0.maxlen && FUNC_2(VAR_1) > VAR_0.maxlen) {
        FUNC_4(VAR_1,0,VAR_0.maxlen-1);
        VAR_1 = FUNC_1(VAR_1," ...",4);
        VAR_2 = 1;
    }
    FUNC_0(VAR_1);
    if (VAR_2 && VAR_0.maxlen_hint_sent == 0) {
        VAR_0.maxlen_hint_sent = 1;
        FUNC_0(FUNC_3(
        "<hint> The above reply was trimmed. Use 'maxlen 0' to disable trimming."));
    }
}
