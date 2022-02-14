
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltKeyTablePtr ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(xsltKeyTablePtr VAR_0) {
    xsltKeyTablePtr VAR_1;

    while (VAR_0 != ((void*)0)) {
 VAR_1 = VAR_0;
 VAR_0 = VAR_0->next;
 FUNC_0(VAR_1);
    }
}
