
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYSLINK_INFO ;
typedef int * PDOC_ITEM ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int const*,int *) ;
 int * FUNC_1 (int const*,int *) ;
 int * FUNC_2 (int const*,int *) ;

__attribute__((used)) static BOOL FUNC_3 (const SYSLINK_INFO *VAR_0, BOOL VAR_1)
{
    PDOC_ITEM VAR_2, VAR_3;

    VAR_2 = FUNC_0(VAR_0, ((void*)0));
    if(VAR_1)
        VAR_3 = FUNC_2(VAR_0, VAR_2);
    else
        VAR_3 = FUNC_1(VAR_0, VAR_2);

    return VAR_3 == ((void*)0);
}
