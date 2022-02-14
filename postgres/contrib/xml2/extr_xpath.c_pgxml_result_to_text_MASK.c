
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlXPathObjectPtr ;
typedef int xmlChar ;
typedef int text ;
struct TYPE_3__ {int type; int const* stringval; int nodesetval; } ;


 int VAR_0 ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int const*) ;

__attribute__((used)) static text *
FUNC_5(xmlXPathObjectPtr VAR_1,
      xmlChar *VAR_2,
      xmlChar *VAR_3,
      xmlChar *VAR_4)
{
 xmlChar *VAR_5;
 text *VAR_6;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 switch (VAR_1->type)
 {
  case 129:
   VAR_5 = FUNC_2(VAR_1->nodesetval,
            VAR_2,
            VAR_3, VAR_4);
   break;

  case 128:
   VAR_5 = FUNC_4(VAR_1->stringval);
   break;

  default:
   FUNC_1(VAR_0, "unsupported XQuery result: %d", VAR_1->type);
   VAR_5 = FUNC_4((const xmlChar *) "<unsupported/>");
 }


 VAR_6 = FUNC_0((char *) VAR_5);


 FUNC_3(VAR_5);

 return VAR_6;
}
