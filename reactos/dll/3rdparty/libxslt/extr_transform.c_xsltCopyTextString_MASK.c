
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_23__ {scalar_t__ type; int * content; TYPE_12__* last; scalar_t__ name; TYPE_2__* ns; int * children; } ;
struct TYPE_22__ {scalar_t__ type; int lasttsize; int lasttuse; int * lasttext; int output; TYPE_1__* style; } ;
struct TYPE_21__ {int * href; } ;
struct TYPE_20__ {int * cdataSection; } ;
struct TYPE_19__ {scalar_t__ type; scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_4 ;
 int * FUNC_1 (int *,scalar_t__,int *) ;
 TYPE_4__* FUNC_2 (int ,int const*,int) ;
 TYPE_4__* FUNC_3 (int const*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int const*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,TYPE_12__*,int const*,int) ;
 int FUNC_7 (int ,char*,int const*) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_3__*,int *,TYPE_4__*,char*) ;

xmlNodePtr
FUNC_9(xsltTransformContextPtr VAR_8, xmlNodePtr VAR_9,
            const xmlChar *VAR_10, int VAR_11)
{
    xmlNodePtr VAR_12;
    int VAR_13;

    if (VAR_10 == ((void*)0))
 return(((void*)0));
    if ((VAR_9 == ((void*)0)) || (VAR_9->children == ((void*)0))) {
 VAR_8->lasttext = ((void*)0);
    }


    VAR_13 = FUNC_4(VAR_10);
    if ((VAR_8->type == VAR_3) &&
 (VAR_8->style->cdataSection != ((void*)0)) &&
 (VAR_9 != ((void*)0)) &&
 (VAR_9->type == VAR_1) &&
 (((VAR_9->ns == ((void*)0)) &&
   (FUNC_1(VAR_8->style->cdataSection,
            VAR_9->name, ((void*)0)) != ((void*)0))) ||
  ((VAR_9->ns != ((void*)0)) &&
   (FUNC_1(VAR_8->style->cdataSection,
                   VAR_9->name, VAR_9->ns->href) != ((void*)0)))))
    {



 if ((VAR_9->last != ((void*)0)) &&
     (VAR_9->last->type == VAR_0))
 {
     return(FUNC_6(VAR_8, VAR_9->last, VAR_10, VAR_13));
 }
 VAR_12 = FUNC_2(VAR_8->output, VAR_10, VAR_13);
    } else if (VAR_11) {



 if ((VAR_9 != ((void*)0)) && (VAR_9->last != ((void*)0)) &&
     (VAR_9->last->type == VAR_2) &&
     (VAR_9->last->name == VAR_6))
 {
     return(FUNC_6(VAR_8, VAR_9->last, VAR_10, VAR_13));
 }
 VAR_12 = FUNC_3(VAR_10, VAR_13);
 if (VAR_12 != ((void*)0))
     VAR_12->name = VAR_6;
    } else {



 if ((VAR_9 != ((void*)0)) && (VAR_9->last != ((void*)0)) &&
     (VAR_9->last->type == VAR_2) &&
     (VAR_9->last->name == VAR_5)) {
     return(FUNC_6(VAR_8, VAR_9->last, VAR_10, VAR_13));
 }
 VAR_12 = FUNC_3(VAR_10, VAR_13);
    }
    if (VAR_12 != ((void*)0) && VAR_9 != ((void*)0))
 VAR_12 = FUNC_5(VAR_9, VAR_12);
    if (VAR_12 != ((void*)0)) {
 VAR_8->lasttext = VAR_12->content;
 VAR_8->lasttsize = VAR_13;
 VAR_8->lasttuse = VAR_13;
    } else {
 FUNC_8(VAR_8, ((void*)0), VAR_9,
    "xsltCopyTextString: text copy failed\n");
 VAR_8->lasttext = ((void*)0);
    }
    return(VAR_12);
}
