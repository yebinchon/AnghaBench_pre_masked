
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlStrdupFunc ;
typedef int * xmlReallocFunc ;
typedef int * xmlMallocFunc ;
typedef int * xmlFreeFunc ;


 int * VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

int
FUNC_1(xmlFreeFunc VAR_6, xmlMallocFunc VAR_7,
              xmlMallocFunc VAR_8, xmlReallocFunc VAR_9,
       xmlStrdupFunc VAR_10) {




    if (VAR_6 == ((void*)0))
 return(-1);
    if (VAR_7 == ((void*)0))
 return(-1);
    if (VAR_8 == ((void*)0))
 return(-1);
    if (VAR_9 == ((void*)0))
 return(-1);
    if (VAR_10 == ((void*)0))
 return(-1);
    VAR_0 = VAR_6;
    VAR_2 = VAR_7;
    VAR_3 = VAR_8;
    VAR_5 = VAR_9;
    VAR_4 = VAR_10;




    return(0);
}
