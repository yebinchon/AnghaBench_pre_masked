
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltSecurityPrefsPtr ;
typedef int xsltSecurityOption ;
typedef int * xsltSecurityCheck ;
struct TYPE_3__ {int * writeNet; int * readNet; int * createDir; int * createFile; int * readFile; } ;
xsltSecurityCheck
FUNC_0(xsltSecurityPrefsPtr VAR_0, xsltSecurityOption VAR_1) {
    if (VAR_0 == ((void*)0))
 return(((void*)0));
    switch (VAR_1) {
        case 131:
            return(VAR_0->readFile);
        case 129:
            return(VAR_0->createFile);
        case 132:
            return(VAR_0->createDir);
        case 130:
            return(VAR_0->readNet);
        case 128:
            return(VAR_0->writeNet);
    }
    return(((void*)0));
}
