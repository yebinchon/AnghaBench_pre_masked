
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStackElemPtr ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int varsMax; int varsNr; TYPE_2__* vars; TYPE_2__** varsTab; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__**,int) ;

__attribute__((used)) static int
FUNC_3(xsltTransformContextPtr VAR_1, xsltStackElemPtr VAR_2)
{
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
 return(-1);

    do {
 if (VAR_1->varsMax == 0) {
     VAR_1->varsMax = 10;
     VAR_1->varsTab =
  (xsltStackElemPtr *) FUNC_1(VAR_1->varsMax *
  sizeof(VAR_1->varsTab[0]));
     if (VAR_1->varsTab == ((void*)0)) {
  FUNC_0(VAR_0, "malloc failed !\n");
  return (-1);
     }
 }
 if (VAR_1->varsNr >= VAR_1->varsMax) {
     VAR_1->varsMax *= 2;
     VAR_1->varsTab =
  (xsltStackElemPtr *) FUNC_2(VAR_1->varsTab,
  VAR_1->varsMax *
  sizeof(VAR_1->varsTab[0]));
     if (VAR_1->varsTab == ((void*)0)) {
  FUNC_0(VAR_0, "realloc failed !\n");
  return (-1);
     }
 }
 VAR_1->varsTab[VAR_1->varsNr++] = VAR_2;
 VAR_1->vars = VAR_2;

 VAR_2 = VAR_2->next;
    } while (VAR_2 != ((void*)0));

    return(0);
}
