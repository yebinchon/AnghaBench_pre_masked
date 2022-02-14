
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
struct TYPE_3__ {int ref_counter; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(xmlDictPtr VAR_2) {
    if (!VAR_0)
        if (!FUNC_0())
            return(-1);

    if (VAR_2 == ((void*)0)) return -1;
    FUNC_1(VAR_1);
    VAR_2->ref_counter++;
    FUNC_2(VAR_1);
    return(0);
}
