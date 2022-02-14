
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNsMapPtr ;
typedef TYPE_1__* xmlNsMapItemPtr ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* first; struct TYPE_5__* pool; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(xmlNsMapPtr VAR_0)
{
    xmlNsMapItemPtr VAR_1, VAR_2;

    if (VAR_0 == ((void*)0))
 return;
    VAR_1 = VAR_0->pool;
    while (VAR_1 != ((void*)0)) {
 VAR_2 = VAR_1;
 VAR_1 = VAR_1->next;
 FUNC_0(VAR_2);
    }
    VAR_1 = VAR_0->first;
    while (VAR_1 != ((void*)0)) {
 VAR_2 = VAR_1;
 VAR_1 = VAR_1->next;
 FUNC_0(VAR_2);
    }
    FUNC_0(VAR_0);
}
