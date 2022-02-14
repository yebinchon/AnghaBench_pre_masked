
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IEnumGUID ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int **) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    IEnumGUID *VAR_5;
    BOOL VAR_6 = VAR_1;

    if (FUNC_4(FUNC_2(VAR_4, &VAR_5)))
    {
        ULONG VAR_7;
        GUID VAR_8;
        while (FUNC_0(VAR_5, 1, &VAR_8, &VAR_7) == VAR_2)
        {
            if(FUNC_3(&VAR_8,&VAR_0))
                VAR_6 = VAR_3;
        }
        FUNC_1(VAR_5);
    }
    FUNC_5(VAR_6,"Did not find registered text service\n");
}
