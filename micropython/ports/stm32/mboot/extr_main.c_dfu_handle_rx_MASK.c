
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wBlockNum; int wLength; int buf; void* cmd; void* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_8, int VAR_9, int VAR_10, const void *VAR_11) {
    if (VAR_8 == VAR_1) {

        VAR_7.status = VAR_6;
        VAR_7.cmd = VAR_4;
    } else if (VAR_8 == VAR_0) {

        VAR_7.status = VAR_6;
        VAR_7.cmd = VAR_4;
    } else if (VAR_8 == VAR_5) {
        if (VAR_10 == 0) {

            VAR_7.cmd = VAR_3;
        } else {

            VAR_7.cmd = VAR_2;
            VAR_7.wBlockNum = VAR_9;
            VAR_7.wLength = VAR_10;
            FUNC_0(VAR_7.buf, VAR_11, VAR_10);
        }
    }
}
