
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef int * xsltCompMatchPtr ;
typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* parent; struct TYPE_8__* last; struct TYPE_8__* prev; } ;
struct TYPE_7__ {scalar_t__ next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_2(xsltTransformContextPtr VAR_8,
       xmlNodePtr VAR_9,
       xsltCompMatchPtr VAR_10,
       xsltCompMatchPtr VAR_11,
       double *VAR_12)
{
    int VAR_13 = 0;
    int VAR_14 = 0;
    xmlNodePtr VAR_15 = VAR_9;

    while (VAR_15 != ((void*)0)) {

 if (FUNC_0(VAR_8, VAR_15, VAR_10, VAR_9))
     VAR_14++;
 if ((VAR_11 != ((void*)0)) &&
     FUNC_1(VAR_8, VAR_15, VAR_11)) {
     break;
 }


 if ((VAR_15->type == VAR_2) ||



            (VAR_15->type == VAR_4))
     break;

        if (VAR_15->type == VAR_5) {




            VAR_15 = (xmlNodePtr) ((xmlNsPtr) VAR_15)->next;
        } else if (VAR_15->type == VAR_0) {
            VAR_15 = VAR_15->parent;
        } else {
            while ((VAR_15->prev != ((void*)0)) && ((VAR_15->prev->type == VAR_3) ||
                   (VAR_15->prev->type == VAR_7) ||
                   (VAR_15->prev->type == VAR_6)))
                VAR_15 = VAR_15->prev;
            if (VAR_15->prev != ((void*)0)) {
                for (VAR_15 = VAR_15->prev; VAR_15->last != ((void*)0); VAR_15 = VAR_15->last);
            } else {
                VAR_15 = VAR_15->parent;
            }
        }
    }

    VAR_12[VAR_13++] = (double) VAR_14;

    return(VAR_13);
}
