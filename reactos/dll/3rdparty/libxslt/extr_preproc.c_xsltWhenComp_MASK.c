
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef TYPE_2__* xsltStyleItemWhenPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__* psvi; } ;
struct TYPE_15__ {int * test; int * comp; TYPE_4__* inst; } ;
struct TYPE_14__ {int errors; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*,TYPE_4__*,int const*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_4__*,char*,...) ;
 int * FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_4(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4) {



    xsltStylePreCompPtr VAR_5;


    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_4->type != VAR_0))
 return;





    VAR_5 = FUNC_1(VAR_3, VAR_1);


    if (VAR_5 == ((void*)0))
 return;
    VAR_4->psvi = VAR_5;
    VAR_5->inst = VAR_4;

    VAR_5->test = FUNC_0(VAR_3, VAR_4, (const xmlChar *)"test", VAR_2);
    if (VAR_5->test == ((void*)0)) {
 FUNC_2(((void*)0), VAR_3, VAR_4,
      "xsl:when : test is not defined\n");
 if (VAR_3 != ((void*)0)) VAR_3->errors++;
 return;
    }
    VAR_5->comp = FUNC_3(VAR_3, VAR_5->test);
    if (VAR_5->comp == ((void*)0)) {
 FUNC_2(((void*)0), VAR_3, VAR_4,
      "xsl:when : could not compile test expression '%s'\n",
                  VAR_5->test);
 if (VAR_3 != ((void*)0)) VAR_3->errors++;
    }
}
