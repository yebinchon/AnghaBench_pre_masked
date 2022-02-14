
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* xmlListPtr ;
typedef TYPE_4__* xmlLinkPtr ;
struct TYPE_12__ {TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_11__ {int (* linkDeallocator ) (TYPE_4__*) ;} ;
struct TYPE_10__ {TYPE_1__* next; } ;
struct TYPE_9__ {TYPE_2__* prev; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(xmlListPtr VAR_0, xmlLinkPtr VAR_1)
{
    (VAR_1->prev)->next = VAR_1->next;
    (VAR_1->next)->prev = VAR_1->prev;
    if(VAR_0->linkDeallocator)
        VAR_0->linkDeallocator(VAR_1);
    FUNC_1(VAR_1);
}
