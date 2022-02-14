
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_2(ULONG VAR_3)
{
    int VAR_4;

    FUNC_0("WaitToSend ");


    for (VAR_4 = VAR_1;
         ! FUNC_1(VAR_3) && VAR_4 > 0;
         VAR_4 --);


    if (! VAR_4)
    {
        FUNC_0("FAILED\n");
        return VAR_0;
    }

    FUNC_0("SUCCEEDED\n");

    return VAR_2;
}
