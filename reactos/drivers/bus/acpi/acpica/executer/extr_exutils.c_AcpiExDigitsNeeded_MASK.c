
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef int UINT32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,scalar_t__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static UINT32
FUNC_3 (
    UINT64 VAR_1,
    UINT32 VAR_2)
{
    UINT32 VAR_3;
    UINT64 VAR_4;


    FUNC_0 (VAR_0);




    if (VAR_1 == 0)
    {
        FUNC_2 (1);
    }

    VAR_4 = VAR_1;
    VAR_3 = 0;



    while (VAR_4)
    {
        (void) FUNC_1 (VAR_4, VAR_2, &VAR_4, ((void*)0));
        VAR_3++;
    }

    FUNC_2 (VAR_3);
}
