
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _u32 ;
struct TYPE_5__ {int d_sd; int dBuffer; } ;
struct TYPE_4__ {int freedata; int closesockets; int * sd; int datasize; int data; } ;
typedef TYPE_1__ SocketFifoElement_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1 (_u32 VAR_2) {
    SocketFifoElement_t VAR_3;

    VAR_3.data = VAR_1.dBuffer;
    VAR_3.datasize = VAR_2;
    VAR_3.sd = &VAR_1.d_sd;
    VAR_3.closesockets = VAR_0;
    VAR_3.freedata = 0;
    FUNC_0 (&VAR_3);
}
