
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlListPtr ;
typedef int * xmlLinkPtr ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,void*) ;

int
FUNC_2(xmlListPtr VAR_0, void *VAR_1)
{
    xmlLinkPtr VAR_2;

    if (VAR_0 == ((void*)0))
        return(0);

    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 != ((void*)0)) {
 FUNC_0(VAR_0, VAR_2);
        return 1;
    }
    return 0;
}
