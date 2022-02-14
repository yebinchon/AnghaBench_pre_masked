
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rxRindex; scalar_t__ rxWindex; scalar_t__* rxBuffer; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0 (void) {
    int VAR_1 = -1;
    if (VAR_0.rxRindex != VAR_0.rxWindex) {

        VAR_1 = (int)VAR_0.rxBuffer[VAR_0.rxRindex++];
    }
    return VAR_1;
}
