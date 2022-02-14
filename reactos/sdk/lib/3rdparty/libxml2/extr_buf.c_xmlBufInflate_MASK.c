
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlBufPtr ;
struct TYPE_4__ {scalar_t__ error; scalar_t__ size; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

int
FUNC_1(xmlBufPtr VAR_0, size_t VAR_1) {
    if (VAR_0 == ((void*)0)) return(-1);
    FUNC_0(VAR_0, VAR_1 + VAR_0->size);
    if (VAR_0->error)
        return(-1);
    return(0);
}
