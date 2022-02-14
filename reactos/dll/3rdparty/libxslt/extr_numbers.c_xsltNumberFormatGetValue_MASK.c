
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlXPathObjectPtr ;
typedef TYPE_2__* xmlXPathContextPtr ;
typedef int xmlNodePtr ;
typedef int xmlChar ;
typedef int * xmlBufferPtr ;
struct TYPE_8__ {int node; } ;
struct TYPE_7__ {double floatval; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(xmlXPathContextPtr VAR_0,
    xmlNodePtr VAR_1,
    const xmlChar *VAR_2,
    double *VAR_3)
{
    int VAR_4 = 0;
    xmlBufferPtr VAR_5;
    xmlXPathObjectPtr VAR_6;

    VAR_5 = FUNC_3();
    if (VAR_5 != ((void*)0)) {
 FUNC_0(VAR_5, "number(");
 FUNC_1(VAR_5, VAR_2);
 FUNC_0(VAR_5, ")");
 VAR_0->node = VAR_1;
 VAR_6 = FUNC_5(FUNC_2(VAR_5),
         VAR_0);
 if (VAR_6 != ((void*)0)) {
     *VAR_3 = VAR_6->floatval;
     VAR_4++;
     FUNC_6(VAR_6);
 }
 FUNC_4(VAR_5);
    }
    return VAR_4;
}
