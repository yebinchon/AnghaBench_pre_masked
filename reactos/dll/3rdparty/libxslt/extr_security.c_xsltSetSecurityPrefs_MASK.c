
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltSecurityPrefsPtr ;
typedef int xsltSecurityOption ;
typedef void* xsltSecurityCheck ;
struct TYPE_3__ {void* writeNet; void* readNet; void* createDir; void* createFile; void* readFile; } ;







 int FUNC_0 () ;

int
FUNC_1(xsltSecurityPrefsPtr VAR_0, xsltSecurityOption VAR_1,
                     xsltSecurityCheck VAR_2) {
    FUNC_0();
    if (VAR_0 == ((void*)0))
 return(-1);
    switch (VAR_1) {
        case 131:
            VAR_0->readFile = VAR_2; return(0);
        case 129:
            VAR_0->createFile = VAR_2; return(0);
        case 132:
            VAR_0->createDir = VAR_2; return(0);
        case 130:
            VAR_0->readNet = VAR_2; return(0);
        case 128:
            VAR_0->writeNet = VAR_2; return(0);
    }
    return(-1);
}
