
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef TYPE_4__* xmlNsPtr ;
typedef TYPE_5__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_18__ {scalar_t__ type; int doc; TYPE_1__* ns; } ;
struct TYPE_17__ {scalar_t__ type; struct TYPE_17__* next; int const* prefix; int const* href; } ;
struct TYPE_16__ {TYPE_2__* style; } ;
struct TYPE_15__ {int nsAliases; } ;
struct TYPE_14__ {int const* href; int const* prefix; } ;


 int const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int const* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int const*,int const*) ;
 TYPE_4__* FUNC_2 (int ,TYPE_5__*,int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;

xmlNsPtr
FUNC_4(xsltTransformContextPtr VAR_4, xmlNodePtr VAR_5,
               xmlNsPtr VAR_6) {
    xmlNsPtr VAR_7 = ((void*)0), VAR_8;
    xmlNsPtr VAR_9 = ((void*)0),VAR_10;

    if (VAR_6 == ((void*)0))
 return(((void*)0));
    if (VAR_6->type != VAR_2)
 return(((void*)0));




    if ((VAR_5 != ((void*)0)) && (VAR_5->type != VAR_1))
 VAR_5 = ((void*)0);

    while (VAR_6 != ((void*)0)) {
 if (VAR_6->type != VAR_2)
     break;





 if (VAR_5 != ((void*)0)) {
     if ((VAR_5->ns != ((void*)0)) &&
  (FUNC_3(VAR_5->ns->prefix, VAR_6->prefix)) &&
 (FUNC_3(VAR_5->ns->href, VAR_6->href))) {
  VAR_6 = VAR_6->next;
  continue;
     }
     VAR_8 = FUNC_2(VAR_5->doc, VAR_5, VAR_6->prefix);
     if ((VAR_8 != ((void*)0)) && (FUNC_3(VAR_8->href, VAR_6->href))) {
  VAR_6 = VAR_6->next;
  continue;
     }
 }
 if (!FUNC_3(VAR_6->href, VAR_3)) {
     const xmlChar *VAR_11;

     VAR_11 = (const xmlChar *) FUNC_0(VAR_4->style->nsAliases,
                                    VAR_6->href);
     if (VAR_11 == VAR_0) {
  VAR_6 = VAR_6->next;
         continue;
     }
     if (VAR_11 != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_5, VAR_11, VAR_6->prefix);
     } else {
  VAR_10 = FUNC_1(VAR_5, VAR_6->href, VAR_6->prefix);
     }
     if (VAR_9 == ((void*)0)) {
  VAR_7 = VAR_9 = VAR_10;
     } else {
  VAR_9->next = VAR_10;
  VAR_9 = VAR_10;
     }
 }

 VAR_6 = VAR_6->next;
    }
    return(VAR_7);
}
