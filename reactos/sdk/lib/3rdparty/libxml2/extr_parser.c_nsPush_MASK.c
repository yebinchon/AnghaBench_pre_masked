
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int options; int nsNr; int nsMax; int const** nsTab; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(xmlParserCtxtPtr VAR_1, const xmlChar *VAR_2, const xmlChar *VAR_3)
{
    if (VAR_1->options & VAR_0) {
        int VAR_4;
 for (VAR_4 = VAR_1->nsNr - 2;VAR_4 >= 0;VAR_4 -= 2) {
     if (VAR_1->nsTab[VAR_4] == VAR_2) {

         if (VAR_1->nsTab[VAR_4 + 1] == VAR_3)
      return(-2);

  break;
     }
 }
    }
    if ((VAR_1->nsMax == 0) || (VAR_1->nsTab == ((void*)0))) {
 VAR_1->nsMax = 10;
 VAR_1->nsNr = 0;
 VAR_1->nsTab = (const xmlChar **)
               FUNC_1(VAR_1->nsMax * sizeof(xmlChar *));
 if (VAR_1->nsTab == ((void*)0)) {
     FUNC_0(VAR_1, ((void*)0));
     VAR_1->nsMax = 0;
            return (-1);
 }
    } else if (VAR_1->nsNr >= VAR_1->nsMax) {
        const xmlChar ** VAR_5;
        VAR_1->nsMax *= 2;
        VAR_5 = (const xmlChar **) FUNC_2((char *) VAR_1->nsTab,
        VAR_1->nsMax * sizeof(VAR_1->nsTab[0]));
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_1, ((void*)0));
     VAR_1->nsMax /= 2;
            return (-1);
        }
 VAR_1->nsTab = VAR_5;
    }
    VAR_1->nsTab[VAR_1->nsNr++] = VAR_2;
    VAR_1->nsTab[VAR_1->nsNr++] = VAR_3;
    return (VAR_1->nsNr);
}
