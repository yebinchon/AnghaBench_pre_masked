
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_3__ {int nsNr; int ** nsTab; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(xmlParserCtxtPtr VAR_1, int VAR_2)
{
    int VAR_3;

    if (VAR_1->nsTab == ((void*)0)) return(0);
    if (VAR_1->nsNr < VAR_2) {
        FUNC_0(VAR_0, "Pbm popping %d NS\n", VAR_2);
        VAR_2 = VAR_1->nsNr;
    }
    if (VAR_1->nsNr <= 0)
        return (0);

    for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++) {
         VAR_1->nsNr--;
  VAR_1->nsTab[VAR_1->nsNr] = ((void*)0);
    }
    return(VAR_2);
}
