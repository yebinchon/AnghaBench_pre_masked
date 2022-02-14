
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef int xmlDictPtr ;
struct TYPE_4__ {int dict; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

xmlHashTablePtr
FUNC_2(int VAR_0, xmlDictPtr VAR_1) {
    xmlHashTablePtr VAR_2;

    VAR_2 = FUNC_1(VAR_0);
    if (VAR_2 != ((void*)0)) {
        VAR_2->dict = VAR_1;
 FUNC_0(VAR_1);
    }
    return(VAR_2);
}
