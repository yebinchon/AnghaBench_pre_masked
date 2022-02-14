
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

void
FUNC_2(xmlNsPtr VAR_1) {
    xmlNsPtr VAR_2;
    if (VAR_1 == ((void*)0)) {




 return;
    }
    while (VAR_1 != ((void*)0)) {
        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
 VAR_1 = VAR_2;
    }
}
