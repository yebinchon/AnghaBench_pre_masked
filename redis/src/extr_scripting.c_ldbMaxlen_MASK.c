
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
struct TYPE_2__ {int maxlen_hint_sent; int maxlen; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;

void FUNC_4(sds *VAR_1, int VAR_2) {
    if (VAR_2 == 2) {
        int VAR_3 = FUNC_0(VAR_1[1]);
        VAR_0.maxlen_hint_sent = 1;
        if (VAR_3 != 0 && VAR_3 <= 60) VAR_3 = 60;
        VAR_0.maxlen = VAR_3;
    }
    if (VAR_0.maxlen) {
        FUNC_1(FUNC_2(FUNC_3(),"<value> replies are truncated at %d bytes.",(int)VAR_0.maxlen));
    } else {
        FUNC_1(FUNC_2(FUNC_3(),"<value> replies are unlimited."));
    }
}
