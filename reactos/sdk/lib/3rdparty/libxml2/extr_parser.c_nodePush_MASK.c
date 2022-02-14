
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef void* xmlNodePtr ;
struct TYPE_6__ {int nodeNr; int nodeMax; void** nodeTab; int options; void* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_3 (void**,int) ;

int
FUNC_4(xmlParserCtxtPtr VAR_3, xmlNodePtr VAR_4)
{
    if (VAR_3 == ((void*)0)) return(0);
    if (VAR_3->nodeNr >= VAR_3->nodeMax) {
        xmlNodePtr *VAR_5;

 VAR_5 = (xmlNodePtr *) FUNC_3(VAR_3->nodeTab,
                                      VAR_3->nodeMax * 2 *
                                      sizeof(VAR_3->nodeTab[0]));
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_3, ((void*)0));
            return (-1);
        }
        VAR_3->nodeTab = VAR_5;
 VAR_3->nodeMax *= 2;
    }
    if ((((unsigned int) VAR_3->nodeNr) > VAR_2) &&
        ((VAR_3->options & VAR_1) == 0)) {
 FUNC_1(VAR_3, VAR_0,
   "Excessive depth in document: %d use XML_PARSE_HUGE option\n",
     VAR_2);
 FUNC_2(VAR_3);
 return(-1);
    }
    VAR_3->nodeTab[VAR_3->nodeNr] = VAR_4;
    VAR_3->node = VAR_4;
    return (VAR_3->nodeNr++);
}
