
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
typedef int * xmlListDeallocator ;
typedef int * xmlListDataCompare ;
typedef int xmlList ;
typedef TYPE_2__* xmlLinkPtr ;
typedef int xmlLink ;
struct TYPE_7__ {int * data; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
struct TYPE_6__ {int * linkCompare; int * linkDeallocator; TYPE_2__* sentinel; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

xmlListPtr
FUNC_4(xmlListDeallocator VAR_2, xmlListDataCompare VAR_3)
{
    xmlListPtr VAR_4;
    if (((void*)0) == (VAR_4 = (xmlListPtr )FUNC_3( sizeof(xmlList)))) {
        FUNC_2(VAR_0,
          "Cannot initialize memory for list");
        return (((void*)0));
    }

    FUNC_0(VAR_4, 0, sizeof(xmlList));


    if (((void*)0) ==(VAR_4->sentinel = (xmlLinkPtr )FUNC_3(sizeof(xmlLink)))) {
        FUNC_2(VAR_0,
          "Cannot initialize memory for sentinel");
 FUNC_1(VAR_4);
        return (((void*)0));
    }
    VAR_4->sentinel->next = VAR_4->sentinel;
    VAR_4->sentinel->prev = VAR_4->sentinel;
    VAR_4->sentinel->data = ((void*)0);


    if (VAR_2 != ((void*)0))
        VAR_4->linkDeallocator = VAR_2;

    if (VAR_3 != ((void*)0))
        VAR_4->linkCompare = VAR_3;
    else
        VAR_4->linkCompare = VAR_1;
    return VAR_4;
}
