
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__) ;

int
FUNC_1(xmlChar *VAR_0) {
    if (VAR_0 == ((void*)0))
 return(1);
    while (*VAR_0 != 0) {
 if (!(FUNC_0(*VAR_0))) return(0);
 VAR_0++;
    }
    return(1);
}
