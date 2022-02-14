
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltDocumentPtr ;
typedef int xmlXPathParserContextPtr ;
typedef TYPE_4__* xmlXPathObjectPtr ;
typedef int * xmlXPathContextPtr ;
typedef TYPE_5__* xmlURIPtr ;
typedef int * xmlNodePtr ;
typedef TYPE_6__* xmlDocPtr ;
typedef char xmlChar ;
struct TYPE_24__ {int URL; } ;
struct TYPE_23__ {int * fragment; } ;
struct TYPE_22__ {int type; } ;
struct TYPE_21__ {TYPE_6__* doc; } ;
struct TYPE_20__ {TYPE_1__* style; } ;
struct TYPE_19__ {TYPE_6__* doc; } ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (char const*) ;
 char* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_4__* FUNC_8 (int *) ;
 TYPE_4__* FUNC_9 (char*,int *) ;
 int * FUNC_10 (TYPE_6__*,int *,int *) ;
 TYPE_3__* FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*,int *,int *,char*,...) ;
 TYPE_2__* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(xmlXPathParserContextPtr VAR_0, xmlChar* VAR_1)
{
    xsltTransformContextPtr VAR_2;
    xmlURIPtr VAR_3;
    xmlChar *VAR_4;
    xsltDocumentPtr VAR_5;
    xmlDocPtr VAR_6;
    xmlXPathContextPtr VAR_7 = ((void*)0);
    xmlXPathObjectPtr VAR_8 = ((void*)0);

    VAR_2 = FUNC_13(VAR_0);
    if (VAR_2 == ((void*)0)) {
 FUNC_12(((void*)0), ((void*)0), ((void*)0),
     "document() : internal error tctxt == NULL\n");
 FUNC_0(VAR_0, FUNC_8(((void*)0)));
 return;
    }

    VAR_3 = FUNC_3((const char *) VAR_1);
    if (VAR_3 == ((void*)0)) {
 FUNC_12(VAR_2, ((void*)0), ((void*)0),
     "document() : failed to parse URI\n");
 FUNC_0(VAR_0, FUNC_8(((void*)0)));
 return;
    }




    VAR_4 = (xmlChar *)VAR_3->fragment;
    if (VAR_4 != ((void*)0)) {
        xmlChar *VAR_9;
 VAR_3->fragment = ((void*)0);
 VAR_9 = FUNC_4(VAR_3);
 VAR_5 = FUNC_11(VAR_2, VAR_9);
 FUNC_1(VAR_9);
    } else
 VAR_5 = FUNC_11(VAR_2, VAR_1);
    FUNC_2(VAR_3);

    if (VAR_5 == ((void*)0)) {
 if ((VAR_1 == ((void*)0)) ||
     (VAR_1[0] == '#') ||
     ((VAR_2->style->doc != ((void*)0)) &&
     (FUNC_5(VAR_2->style->doc->URL, VAR_1))))
 {



     VAR_6 = VAR_2->style->doc;
 } else {
     FUNC_0(VAR_0, FUNC_8(((void*)0)));

     if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4);

     return;
 }
    } else
 VAR_6 = VAR_5->doc;

    if (VAR_4 == ((void*)0)) {
 FUNC_0(VAR_0, FUNC_8((xmlNodePtr) VAR_6));
 return;
    }
    if (VAR_8 == ((void*)0))
 goto out_fragment;

    switch (VAR_8->type) {
 case 135:
     break;
 case 130:
 case 137:
 case 134:
 case 131:
 case 133:
 case 129:
 case 128:
 case 132:
 case 136:
     FUNC_12(VAR_2, ((void*)0), ((void*)0),
  "document() : XPointer does not select a node set: #%s\n",
  VAR_4);
 goto out_object;
    }

    FUNC_0(VAR_0, VAR_8);
    FUNC_1(VAR_4);
    return;

out_object:
    FUNC_7(VAR_8);

out_fragment:
    FUNC_0(VAR_0, FUNC_8(((void*)0)));
    FUNC_1(VAR_4);
}
