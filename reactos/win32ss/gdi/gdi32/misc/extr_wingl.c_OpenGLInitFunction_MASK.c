
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PVOID ;
typedef int PCSTR ;
typedef int FARPROC ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_2(PCSTR VAR_3,
                               FARPROC *VAR_4)
{
    PVOID VAR_5;

    VAR_5 = (PVOID)FUNC_0(VAR_2, VAR_3);
    if (VAR_5 != ((void*)0))
    {
        (void)FUNC_1((PVOID*)VAR_4,
                                                VAR_5,
                                                ((void*)0));
        return VAR_1;
    }

    return VAR_0;
}
