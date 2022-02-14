
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_32__ {int * prefix; int * href; } ;
struct TYPE_31__ {scalar_t__ type; int name; TYPE_9__* ns; int * nsDef; int doc; } ;
struct TYPE_30__ {int output; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_9__* FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_9__*,TYPE_2__*) ;
 TYPE_9__* FUNC_6 (TYPE_1__*,TYPE_2__*,int *,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int *,TYPE_2__*,char*,...) ;

__attribute__((used)) static xmlNodePtr
FUNC_8(xsltTransformContextPtr VAR_4, xmlNodePtr VAR_5,
      xmlNodePtr VAR_6, int VAR_7)
{
    xmlNodePtr VAR_8;

    if ((VAR_5->type == VAR_1) || (VAR_6 == ((void*)0)))
 return(((void*)0));
    if ((VAR_5->type == VAR_3) ||
 (VAR_5->type == VAR_0))
 return(FUNC_4(VAR_4, VAR_6, VAR_5, 0));

    VAR_8 = FUNC_0(VAR_5, VAR_6->doc, 0);
    if (VAR_8 != ((void*)0)) {
 VAR_8->doc = VAR_4->output;
 VAR_8 = FUNC_1(VAR_6, VAR_8);
        if (VAR_8 == ((void*)0)) {
             FUNC_7(VAR_4, ((void*)0), VAR_5,
                "xsltShallowCopyElem: copy failed\n");
             return (VAR_8);
        }

 if (VAR_5->type == VAR_2) {



     if (VAR_5->nsDef != ((void*)0)) {




  if (VAR_7)
      FUNC_2(VAR_4, VAR_8, VAR_5->nsDef);
  else
      FUNC_3(VAR_8, VAR_5->nsDef);
     }
     if (VAR_5->ns != ((void*)0)) {
  if (VAR_7) {





      VAR_8->ns = FUNC_5(VAR_4, VAR_5, VAR_5->ns, VAR_8);
  } else {
      VAR_8->ns = FUNC_6(VAR_4,
   VAR_5, VAR_5->ns->href, VAR_5->ns->prefix, VAR_8);

  }
     } else if ((VAR_6->type == VAR_2) &&
         (VAR_6->ns != ((void*)0)))
     {



  FUNC_6(VAR_4, VAR_5, ((void*)0), ((void*)0), VAR_8);
     }
 }
    } else {
 FUNC_7(VAR_4, ((void*)0), VAR_5,
  "xsltShallowCopyElem: copy %s failed\n", VAR_5->name);
    }
    return(VAR_8);
}
