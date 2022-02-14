
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int _i16 ;
struct TYPE_2__ {int rxWindex; int rxRindex; int * rxBuffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int*) ;

__attribute__((used)) static void FUNC_1 (void) {
    _i16 VAR_3;
    _i16 VAR_4 = (VAR_2.rxWindex >= VAR_2.rxRindex) ? (VAR_1 - VAR_2.rxWindex) :
                                                                   ((VAR_2.rxRindex - VAR_2.rxWindex) - 1);

    VAR_4 = (VAR_2.rxRindex == 0) ? (VAR_4 - 1) : VAR_4;

    if (VAR_4 > 0) {
        if (VAR_0 == FUNC_0(&VAR_2.rxBuffer[VAR_2.rxWindex], VAR_4, &VAR_3)) {

            VAR_2.rxWindex = VAR_2.rxWindex + VAR_3;
        }
    }
}
