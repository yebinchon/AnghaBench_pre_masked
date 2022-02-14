
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlStrdupFunc ;
typedef int xmlReallocFunc ;
typedef int xmlMallocFunc ;
typedef int xmlFreeFunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(xmlFreeFunc *VAR_4, xmlMallocFunc *VAR_5,
   xmlReallocFunc *VAR_6, xmlStrdupFunc *VAR_7) {
    if (VAR_4 != ((void*)0)) *VAR_4 = VAR_0;
    if (VAR_5 != ((void*)0)) *VAR_5 = VAR_1;
    if (VAR_6 != ((void*)0)) *VAR_6 = VAR_3;
    if (VAR_7 != ((void*)0)) *VAR_7 = VAR_2;
    return(0);
}
