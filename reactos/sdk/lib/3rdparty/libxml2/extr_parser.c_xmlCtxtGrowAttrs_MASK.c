
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int* attallocs; int maxatts; int const** atts; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,int) ;

__attribute__((used)) static int
FUNC_3(xmlParserCtxtPtr VAR_0, int VAR_1) {
    const xmlChar **VAR_2;
    int *VAR_3;
    int VAR_4;

    if (VAR_0->atts == ((void*)0)) {
 VAR_4 = 55;
 VAR_2 = (const xmlChar **)
        FUNC_1(VAR_4 * sizeof(xmlChar *));
 if (VAR_2 == ((void*)0)) goto mem_error;
 VAR_0->atts = VAR_2;
 VAR_3 = (int *) FUNC_1((VAR_4 / 5) * sizeof(int));
 if (VAR_3 == ((void*)0)) goto mem_error;
 VAR_0->attallocs = VAR_3;
 VAR_0->maxatts = VAR_4;
    } else if (VAR_1 + 5 > VAR_0->maxatts) {
 VAR_4 = (VAR_1 + 5) * 2;
 VAR_2 = (const xmlChar **) FUNC_2((void *) VAR_0->atts,
         VAR_4 * sizeof(const xmlChar *));
 if (VAR_2 == ((void*)0)) goto mem_error;
 VAR_0->atts = VAR_2;
 VAR_3 = (int *) FUNC_2((void *) VAR_0->attallocs,
                              (VAR_4 / 5) * sizeof(int));
 if (VAR_3 == ((void*)0)) goto mem_error;
 VAR_0->attallocs = VAR_3;
 VAR_0->maxatts = VAR_4;
    }
    return(VAR_0->maxatts);
mem_error:
    FUNC_0(VAR_0, ((void*)0));
    return(-1);
}
