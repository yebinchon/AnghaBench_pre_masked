
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlDocPtr ;
struct TYPE_13__ {scalar_t__ psvi; scalar_t__ next; int * prev; } ;
struct TYPE_12__ {TYPE_2__* localRVT; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *,int *,char*) ;

__attribute__((used)) static void
FUNC_5(xsltTransformContextPtr VAR_4, xmlDocPtr VAR_5)
{
    xmlDocPtr VAR_6 = VAR_4->localRVT, VAR_7;

    if (VAR_6 == VAR_5)
        return;
    if (VAR_6->prev != ((void*)0))
        FUNC_4(VAR_4, ((void*)0), ((void*)0), "localRVT not head of list\n");


    VAR_4->localRVT = VAR_5;
    if (VAR_5 != ((void*)0))
        VAR_5->prev = ((void*)0);

    do {
        VAR_7 = VAR_6;
        VAR_6 = (xmlDocPtr) VAR_6->next;
        if (VAR_7->psvi == VAR_2) {
            FUNC_3(VAR_4, VAR_7);
        } else if (VAR_7->psvi == VAR_1) {
            FUNC_2(VAR_4, VAR_7);
        } else if (VAR_7->psvi == VAR_0) {




            FUNC_1(VAR_4, VAR_7);
            VAR_7->psvi = VAR_0;
        } else {
            FUNC_0(VAR_3,
                    "xsltReleaseLocalRVTs: Unexpected RVT flag %p\n",
                    VAR_7->psvi);
        }
    } while (VAR_6 != VAR_5);
}
