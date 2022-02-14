
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


typedef TYPE_4__* xsltTransformContextPtr ;
typedef TYPE_5__* xmlNodePtr ;
struct TYPE_26__ {scalar_t__ type; scalar_t__ name; int * content; TYPE_3__* doc; TYPE_14__* last; TYPE_2__* ns; int * children; } ;
struct TYPE_25__ {scalar_t__ type; unsigned int lasttsize; unsigned int lasttuse; scalar_t__ dict; int state; int * lasttext; int output; TYPE_1__* style; } ;
struct TYPE_24__ {scalar_t__ dict; } ;
struct TYPE_23__ {int * href; } ;
struct TYPE_22__ {int * cdataSection; } ;
struct TYPE_21__ {scalar_t__ type; scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int * FUNC_2 (int *,scalar_t__,int *) ;
 TYPE_5__* FUNC_3 (int ,int *,unsigned int) ;
 TYPE_5__* FUNC_4 (int *,unsigned int) ;
 int * FUNC_5 (int *) ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_8 (TYPE_4__*,TYPE_14__*,int *,unsigned int) ;
 int FUNC_9 (int ,char*,int *) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_4__*,int *,TYPE_5__*,char*) ;

__attribute__((used)) static xmlNodePtr
FUNC_11(xsltTransformContextPtr VAR_8, xmlNodePtr VAR_9,
      xmlNodePtr VAR_10, int VAR_11)
{
    xmlNodePtr VAR_12;

    if ((VAR_10->type != VAR_2) &&
 (VAR_10->type != VAR_0))
 return(((void*)0));
    if (VAR_10->content == ((void*)0))
 return(((void*)0));
    if ((VAR_9 == ((void*)0)) || (VAR_9->children == ((void*)0))) {
 VAR_8->lasttext = ((void*)0);
    }

    if ((VAR_8->style->cdataSection != ((void*)0)) &&
 (VAR_8->type == VAR_3) &&
 (VAR_9 != ((void*)0)) &&
 (VAR_9->type == VAR_1) &&
 (((VAR_9->ns == ((void*)0)) &&
   (FUNC_2(VAR_8->style->cdataSection,
            VAR_9->name, ((void*)0)) != ((void*)0))) ||
  ((VAR_9->ns != ((void*)0)) &&
   (FUNC_2(VAR_8->style->cdataSection,
                   VAR_9->name, VAR_9->ns->href) != ((void*)0)))))
    {
 if ((VAR_9->last != ((void*)0)) &&
      (VAR_9->last->type == VAR_0))
 {



     VAR_12 = FUNC_8(VAR_8, VAR_9->last, VAR_10->content,
  FUNC_6(VAR_10->content));
     goto exit;
 } else {
     unsigned int VAR_13;

     VAR_13 = FUNC_6(VAR_10->content);
     VAR_12 = FUNC_3(VAR_8->output, VAR_10->content, VAR_13);
     if (VAR_12 == ((void*)0))
  goto exit;
     VAR_8->lasttext = VAR_12->content;
     VAR_8->lasttsize = VAR_13;
     VAR_8->lasttuse = VAR_13;
 }
    } else if ((VAR_9 != ((void*)0)) &&
 (VAR_9->last != ((void*)0)) &&

 (((VAR_9->last->type == VAR_2) &&
 (VAR_9->last->name == VAR_10->name)) ||

 (((VAR_9->last->type == VAR_0) &&
 (VAR_10->name == VAR_6)))))
    {



 VAR_12 = FUNC_8(VAR_8, VAR_9->last, VAR_10->content,
     FUNC_6(VAR_10->content));
 goto exit;
    } else if ((VAR_11) && (VAR_9 != ((void*)0)) &&
 (VAR_9->doc != ((void*)0)) &&
 (VAR_9->doc->dict == VAR_8->dict))
    {



        VAR_12 = FUNC_4(((void*)0), 0);
 if (VAR_12 == ((void*)0))
     goto exit;
 if (VAR_10->name == VAR_6)
     VAR_12->name = VAR_6;






 if (FUNC_1(VAR_8->dict, VAR_10->content))
     VAR_12->content = VAR_10->content;
 else {
     if ((VAR_12->content = FUNC_5(VAR_10->content)) == ((void*)0))
  return ((void*)0);
 }
    } else {




        unsigned int VAR_14;

 VAR_14 = FUNC_6(VAR_10->content);
 VAR_12 = FUNC_4(VAR_10->content, VAR_14);
 if (VAR_12 == ((void*)0))
     goto exit;
 if (VAR_10->name == VAR_6)
     VAR_12->name = VAR_6;
 VAR_8->lasttext = VAR_12->content;
 VAR_8->lasttsize = VAR_14;
 VAR_8->lasttuse = VAR_14;
    }
    if (VAR_12 != ((void*)0)) {
 if (VAR_9 != ((void*)0)) {
     VAR_12->doc = VAR_9->doc;





     VAR_12 = FUNC_7(VAR_9, VAR_12);
 }
    } else {
 FUNC_10(VAR_8, ((void*)0), VAR_9,
    "xsltCopyText: text copy failed\n");
    }

exit:
    if ((VAR_12 == ((void*)0)) || (VAR_12->content == ((void*)0))) {
 FUNC_10(VAR_8, ((void*)0), VAR_9,
     "Internal error in xsltCopyText(): "
     "Failed to copy the string.\n");
 VAR_8->state = VAR_4;
    }
    return(VAR_12);
}
