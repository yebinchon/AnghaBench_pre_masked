
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;



const xmlChar *
FUNC_0(const xmlChar *VAR_0, int *VAR_1) {
    int VAR_2 = 0;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_1 == ((void*)0)) return(((void*)0));


    if (VAR_0[0] == ':')
 return(((void*)0));





    while ((VAR_0[VAR_2] != 0) && (VAR_0[VAR_2] != ':'))
 VAR_2++;

    if (VAR_0[VAR_2] == 0)
 return(((void*)0));

    *VAR_1 = VAR_2;

    return(&VAR_0[VAR_2+1]);
}
