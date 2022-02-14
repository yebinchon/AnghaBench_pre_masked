
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlRefPtr ;
typedef int xmlLinkPtr ;
struct TYPE_4__ {int * name; int * value; } ;
typedef TYPE_1__ xmlChar ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(xmlLinkPtr VAR_0) {
    xmlRefPtr VAR_1 = (xmlRefPtr)FUNC_1(VAR_0);
    if (VAR_1 == ((void*)0)) return;
    if (VAR_1->value != ((void*)0))
        FUNC_0((xmlChar *)VAR_1->value);
    if (VAR_1->name != ((void*)0))
        FUNC_0((xmlChar *)VAR_1->name);
    FUNC_0(VAR_1);
}
