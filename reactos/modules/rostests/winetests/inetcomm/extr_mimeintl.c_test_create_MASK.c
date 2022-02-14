
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IMimeInternational ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    IMimeInternational *VAR_1, *VAR_2;
    HRESULT VAR_3;
    ULONG VAR_4;

    VAR_3 = FUNC_1(&VAR_1);
    FUNC_2(VAR_3 == VAR_0, "ret %08x\n", VAR_3);
    VAR_3 = FUNC_1(&VAR_2);
    FUNC_2(VAR_3 == VAR_0, "ret %08x\n", VAR_3);


    if(VAR_1 == VAR_2)
    {


        VAR_4 = FUNC_0(VAR_2);
        FUNC_2(VAR_4 == 2 ||
           VAR_4 == 1,
           "got %d\n", VAR_4);

        VAR_4 = FUNC_0(VAR_1);
        FUNC_2(VAR_4 == 1, "got %d\n", VAR_4);
    }
    else
    {
        VAR_4 = FUNC_0(VAR_2);
        FUNC_2(VAR_4 == 0, "got %d\n", VAR_4);

        VAR_4 = FUNC_0(VAR_1);
        FUNC_2(VAR_4 == 0, "got %d\n", VAR_4);
    }

}
