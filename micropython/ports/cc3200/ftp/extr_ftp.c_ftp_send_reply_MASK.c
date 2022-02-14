
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _u16 ;
struct TYPE_5__ {int c_sd; } ;
struct TYPE_4__ {int freedata; scalar_t__ data; int datasize; int closesockets; int * sd; } ;
typedef TYPE_1__ SocketFifoElement_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7 (_u16 VAR_5, char *VAR_6) {
    SocketFifoElement_t VAR_7;
    if (!VAR_6) {
        VAR_6 = "";
    }
    FUNC_4((char *)VAR_3, 4, "%u", VAR_5);
    FUNC_5 ((char *)VAR_3, " ");
    FUNC_5 ((char *)VAR_3, VAR_6);
    FUNC_5 ((char *)VAR_3, "\r\n");
    VAR_7.sd = &VAR_4.c_sd;
    VAR_7.datasize = FUNC_6((char *)VAR_3);
    VAR_7.data = FUNC_2(VAR_7.datasize);
    if (VAR_5 == 221) {
        VAR_7.closesockets = VAR_0;
    }
    else if (VAR_5 == 426 || VAR_5 == 451 || VAR_5 == 550) {
        VAR_7.closesockets = VAR_1;
    }
    else {
        VAR_7.closesockets = VAR_2;
    }
    VAR_7.freedata = 1;
    if (VAR_7.data) {
        FUNC_3 (VAR_7.data, VAR_3, VAR_7.datasize);
        if (!FUNC_0 (&VAR_7)) {
            FUNC_1(VAR_7.data);
        }
    }
}
