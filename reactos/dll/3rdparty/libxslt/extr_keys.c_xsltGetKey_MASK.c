
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltKeyTablePtr ;
typedef int * xmlNodeSetPtr ;
typedef int xmlChar ;
struct TYPE_9__ {struct TYPE_9__* next; int keys; int * nameURI; int * name; } ;
struct TYPE_8__ {scalar_t__ nbKeys; scalar_t__ keyInitLevel; TYPE_1__* document; } ;
struct TYPE_7__ {scalar_t__ nbKeysComputed; scalar_t__ keys; } ;


 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int FUNC_2 (int ,char*,int const*,int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int const*,int const*) ;

xmlNodeSetPtr
FUNC_5(xsltTransformContextPtr VAR_1, const xmlChar *VAR_2,
    const xmlChar *VAR_3, const xmlChar *VAR_4) {
    xmlNodeSetPtr VAR_5;
    xsltKeyTablePtr VAR_6;
    int VAR_7 = 0;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)) ||
 (VAR_1->document == ((void*)0)))
 return(((void*)0));
    if ((VAR_1->document->nbKeysComputed < VAR_1->nbKeys) &&
        (VAR_1->keyInitLevel == 0)) {



 if (FUNC_3(VAR_1))
     return(((void*)0));
    }

retry:
    VAR_6 = (xsltKeyTablePtr) VAR_1->document->keys;
    while (VAR_6 != ((void*)0)) {
 if (((VAR_3 != ((void*)0)) == (VAR_6->nameURI != ((void*)0))) &&
     FUNC_1(VAR_6->name, VAR_2) &&
     FUNC_1(VAR_6->nameURI, VAR_3))
 {
     VAR_5 = (xmlNodeSetPtr)FUNC_0(VAR_6->keys, VAR_4);
     return(VAR_5);
 }
 VAR_6 = VAR_6->next;
    }

    if ((VAR_1->keyInitLevel != 0) && (VAR_7 == 0)) {




        FUNC_4(VAR_1, VAR_2, VAR_3);
 VAR_7 = 1;
 goto retry;
    }

    return(((void*)0));
}
