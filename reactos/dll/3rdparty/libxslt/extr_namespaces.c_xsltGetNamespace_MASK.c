
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int const xmlChar ;
struct TYPE_21__ {int doc; } ;
struct TYPE_20__ {int * prefix; int const* href; } ;
struct TYPE_19__ {int * nsAliases; } ;
struct TYPE_18__ {TYPE_2__* style; } ;


 int const* VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 TYPE_3__* FUNC_1 (int ,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,TYPE_4__*,int const*,int *,TYPE_4__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;

xmlNsPtr
FUNC_4(xsltTransformContextPtr VAR_1, xmlNodePtr VAR_2, xmlNsPtr VAR_3,
          xmlNodePtr VAR_4)
{

    if (VAR_3 == ((void*)0))
 return(((void*)0));
    {
 xsltStylesheetPtr VAR_5;
 const xmlChar *VAR_6 = ((void*)0);

 if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)))
     return(((void*)0));

 VAR_5 = VAR_1->style;
 while (VAR_5 != ((void*)0)) {
     if (VAR_5->nsAliases != ((void*)0))
  VAR_6 = (const xmlChar *)
  FUNC_0(VAR_5->nsAliases, VAR_3->href);
     if (VAR_6 != ((void*)0))
  break;

     VAR_5 = FUNC_3(VAR_5);
 }


 if (VAR_6 == VAR_0) {
     return(FUNC_2(VAR_1, VAR_2, ((void*)0), ((void*)0), VAR_4));
 } else if (VAR_6 == ((void*)0))
     VAR_6 = VAR_3->href;

 return(FUNC_2(VAR_1, VAR_2, VAR_6, VAR_3->prefix, VAR_4));
    }

}
