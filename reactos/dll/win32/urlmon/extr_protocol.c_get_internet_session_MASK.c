
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetBindInfo ;
typedef int * HINTERNET ;


 scalar_t__ FUNC_0 (void**,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * VAR_0 ;

HINTERNET FUNC_3(IInternetBindInfo *VAR_1)
{
    HINTERNET VAR_2;

    if(VAR_0)
        return VAR_0;

    if(!VAR_1)
        return ((void*)0);

    VAR_2 = FUNC_2(VAR_1);
    if(VAR_2 && FUNC_0((void**)&VAR_0, VAR_2, ((void*)0)))
        FUNC_1(VAR_2);

    return VAR_0;
}
