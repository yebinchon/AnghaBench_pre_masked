
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ _i16 ;
struct TYPE_6__ {scalar_t__ d_sd; scalar_t__ ld_sd; scalar_t__ state; int special_file; int substate; } ;
struct TYPE_5__ {scalar_t__* sd; scalar_t__ closesockets; int data; scalar_t__ freedata; int datasize; } ;
typedef TYPE_1__ SocketFifoElement_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void FUNC_6 (void) {
    SocketFifoElement_t VAR_6;
    if (FUNC_0 (&VAR_6)) {
        _i16 VAR_7 = *VAR_6.sd;
        if (VAR_7 > 0) {
            if (VAR_2 == FUNC_3 (VAR_7, VAR_6.data, VAR_6.datasize)) {
                FUNC_1 (&VAR_6);
                if (VAR_6.closesockets != VAR_1) {
                    FUNC_5(&VAR_5.d_sd);
                    if (VAR_6.closesockets == VAR_0) {
                        FUNC_5(&VAR_5.ld_sd);

                        FUNC_5(VAR_6.sd);
                        VAR_5.substate = VAR_4;
                    }
                    FUNC_2();
                }
                if (VAR_6.freedata) {
                    FUNC_4(VAR_6.data);
                }
            }
        }

        else {
            FUNC_1 (&VAR_6);
            if (VAR_6.freedata) {
                FUNC_4(VAR_6.data);
            }
        }
    }
    else if (VAR_5.state == VAR_3 && (VAR_5.d_sd > 0)) {

        FUNC_5(&VAR_5.ld_sd);
        FUNC_5(&VAR_5.d_sd);
        if (VAR_5.special_file) {
            VAR_5.special_file = 0;
        }
    }
}
