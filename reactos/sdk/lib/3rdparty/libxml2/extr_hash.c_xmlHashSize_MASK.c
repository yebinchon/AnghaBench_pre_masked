
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
struct TYPE_3__ {int nbElems; } ;



int
FUNC_0(xmlHashTablePtr VAR_0) {
    if (VAR_0 == ((void*)0))
 return(-1);
    return(VAR_0->nbElems);
}
