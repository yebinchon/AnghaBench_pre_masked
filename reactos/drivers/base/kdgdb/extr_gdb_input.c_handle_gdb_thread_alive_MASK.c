
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int * PETHREAD ;
typedef int KDSTATUS ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,char*) ;

__attribute__((used)) static
KDSTATUS
FUNC_6(void)
{
    ULONG_PTR VAR_1, VAR_2;
    PETHREAD VAR_3;
    KDSTATUS VAR_4;
    VAR_1 = FUNC_2(&VAR_0[2]);
    VAR_2 = FUNC_3(FUNC_5(VAR_0, ".") + 1);



    FUNC_0("Checking if p%p.%p is alive.\n", VAR_1, VAR_2);


    VAR_3 = FUNC_1(VAR_1, VAR_2);

    if (VAR_3 != ((void*)0))
        VAR_4 = FUNC_4("OK");
    else
        VAR_4 = FUNC_4("E03");

    return VAR_4;
}
