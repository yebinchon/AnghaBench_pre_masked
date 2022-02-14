
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlBufPtr ;
struct TYPE_4__ {scalar_t__ error; } ;


 size_t FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1(xmlBufPtr VAR_0, int VAR_1) {
    size_t VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_1 < 0)) return(-1);
    if (VAR_1 == 0)
        return(0);
    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_0->error != 0)
        return(-1);
    return((int) VAR_2);
}
