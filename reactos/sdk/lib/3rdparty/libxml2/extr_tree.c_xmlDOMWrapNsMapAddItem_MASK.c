
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* xmlNsPtr ;
typedef TYPE_1__* xmlNsMapPtr ;
typedef TYPE_1__* xmlNsMapItemPtr ;
struct xmlNsMapItem {int dummy; } ;
struct xmlNsMap {int dummy; } ;
struct TYPE_6__ {int shadowDepth; int depth; void* newNs; void* oldNs; struct TYPE_6__* first; struct TYPE_6__* next; struct TYPE_6__* prev; struct TYPE_6__* last; struct TYPE_6__* pool; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static xmlNsMapItemPtr
FUNC_3(xmlNsMapPtr *VAR_0, int VAR_1,
         xmlNsPtr VAR_2, xmlNsPtr VAR_3, int VAR_4)
{
    xmlNsMapItemPtr VAR_5;
    xmlNsMapPtr VAR_6;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if ((VAR_1 != -1) && (VAR_1 != 0))
 return(((void*)0));
    VAR_6 = *VAR_0;

    if (VAR_6 == ((void*)0)) {



 VAR_6 = (xmlNsMapPtr) FUNC_1(sizeof(struct xmlNsMap));
 if (VAR_6 == ((void*)0)) {
     FUNC_2("allocating namespace map");
     return (((void*)0));
 }
 FUNC_0(VAR_6, 0, sizeof(struct xmlNsMap));
 *VAR_0 = VAR_6;
    }

    if (VAR_6->pool != ((void*)0)) {



 VAR_5 = VAR_6->pool;
 VAR_6->pool = VAR_5->next;
 FUNC_0(VAR_5, 0, sizeof(struct xmlNsMapItem));
    } else {



 VAR_5 = (xmlNsMapItemPtr) FUNC_1(sizeof(struct xmlNsMapItem));
 if (VAR_5 == ((void*)0)) {
     FUNC_2("allocating namespace map item");
     return (((void*)0));
 }
 FUNC_0(VAR_5, 0, sizeof(struct xmlNsMapItem));
    }

    if (VAR_6->first == ((void*)0)) {



 VAR_6->first = VAR_5;
 VAR_6->last = VAR_5;
    } else if (VAR_1 == -1) {



 VAR_5->prev = VAR_6->last;
 VAR_6->last->next = VAR_5;
 VAR_6->last = VAR_5;
    } else if (VAR_1 == 0) {



 VAR_6->first->prev = VAR_5;
 VAR_5->next = VAR_6->first;
 VAR_6->first = VAR_5;
    }

    VAR_5->oldNs = VAR_2;
    VAR_5->newNs = VAR_3;
    VAR_5->shadowDepth = -1;
    VAR_5->depth = VAR_4;
    return (VAR_5);
}
