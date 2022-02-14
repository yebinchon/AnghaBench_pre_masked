
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PDWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static BOOL
FUNC_3(PDWORD VAR_4)
{
    ++VAR_3;

    while (FUNC_2(&VAR_1, &VAR_3, ((void*)0)))
    {

        ++VAR_3;
    }

    if (!FUNC_1(VAR_3))
    {
        FUNC_0("Job ID %lu isn't valid!\n", VAR_3);
        return VAR_0;
    }

    *VAR_4 = VAR_3;
    return VAR_2;
}
