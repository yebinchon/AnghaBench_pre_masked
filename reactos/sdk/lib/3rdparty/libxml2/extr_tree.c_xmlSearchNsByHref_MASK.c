
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef int xmlNs ;
typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_15__ {TYPE_1__* oldNs; } ;
struct TYPE_14__ {scalar_t__ type; struct TYPE_14__* parent; TYPE_1__* ns; TYPE_1__* nsDef; TYPE_3__* doc; } ;
struct TYPE_13__ {int * prefix; int const* href; struct TYPE_13__* next; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int const* VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 void* FUNC_4 (int const*) ;
 TYPE_1__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char*) ;

xmlNsPtr
FUNC_7(xmlDocPtr VAR_8, xmlNodePtr VAR_9, const xmlChar * VAR_10)
{
    xmlNsPtr VAR_11;
    xmlNodePtr VAR_12 = VAR_9;
    int VAR_13;

    if ((VAR_9 == ((void*)0)) || (VAR_9->type == VAR_6) || (VAR_10 == ((void*)0)))
        return (((void*)0));
    if (FUNC_3(VAR_10, VAR_7)) {



        if ((VAR_8 == ((void*)0)) && (VAR_9->type == VAR_1)) {





            VAR_11 = (xmlNsPtr) FUNC_1(sizeof(xmlNs));
            if (VAR_11 == ((void*)0)) {
  FUNC_6("searching namespace");
                return (((void*)0));
            }
            FUNC_0(VAR_11, 0, sizeof(xmlNs));
            VAR_11->type = VAR_5;
            VAR_11->href = FUNC_4(VAR_7);
            VAR_11->prefix = FUNC_4((const xmlChar *) "xml");
            VAR_11->next = VAR_9->nsDef;
            VAR_9->nsDef = VAR_11;
            return (VAR_11);
        }
 if (VAR_8 == ((void*)0)) {
     VAR_8 = VAR_9->doc;
     if (VAR_8 == ((void*)0))
  return(((void*)0));
 }



 if (VAR_8->oldNs == ((void*)0))
     return(FUNC_5(VAR_8));
 else
     return(VAR_8->oldNs);
    }
    VAR_13 = (VAR_9->type == VAR_0);
    while (VAR_9 != ((void*)0)) {
        if ((VAR_9->type == VAR_4) ||
            (VAR_9->type == VAR_3) ||
            (VAR_9->type == VAR_2))
            return (((void*)0));
        if (VAR_9->type == VAR_1) {
            VAR_11 = VAR_9->nsDef;
            while (VAR_11 != ((void*)0)) {
                if ((VAR_11->href != ((void*)0)) && (VAR_10 != ((void*)0)) &&
                    (FUNC_3(VAR_11->href, VAR_10))) {
      if (((!VAR_13) || (VAR_11->prefix != ((void*)0))) &&
          (FUNC_2(VAR_8, VAR_12, VAR_9, VAR_11->prefix) == 1))
   return (VAR_11);
                }
                VAR_11 = VAR_11->next;
            }
            if (VAR_12 != VAR_9) {
                VAR_11 = VAR_9->ns;
                if (VAR_11 != ((void*)0)) {
                    if ((VAR_11->href != ((void*)0)) && (VAR_10 != ((void*)0)) &&
                        (FUNC_3(VAR_11->href, VAR_10))) {
   if (((!VAR_13) || (VAR_11->prefix != ((void*)0))) &&
              (FUNC_2(VAR_8, VAR_12, VAR_9, VAR_11->prefix) == 1))
       return (VAR_11);
                    }
                }
            }
        }
        VAR_9 = VAR_9->parent;
    }
    return (((void*)0));
}
