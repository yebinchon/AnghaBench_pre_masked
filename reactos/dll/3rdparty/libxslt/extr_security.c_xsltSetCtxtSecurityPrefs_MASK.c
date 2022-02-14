
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef scalar_t__ xsltSecurityPrefsPtr ;
struct TYPE_3__ {void* sec; } ;



int
FUNC_0(xsltSecurityPrefsPtr VAR_0,
                  xsltTransformContextPtr VAR_1) {
    if (VAR_1 == ((void*)0))
 return(-1);
    VAR_1->sec = (void *) VAR_0;
    return(0);
}
