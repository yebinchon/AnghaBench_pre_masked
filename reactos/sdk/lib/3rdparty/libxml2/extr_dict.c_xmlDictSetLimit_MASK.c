
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
struct TYPE_3__ {size_t limit; } ;



size_t
FUNC_0(xmlDictPtr VAR_0, size_t VAR_1) {
    size_t VAR_2;

    if (VAR_0 == ((void*)0))
 return(0);
    VAR_2 = VAR_0->limit;
    VAR_0->limit = VAR_1;
    return(VAR_2);
}
