
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MIB_IPFORWARDTABLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_3 = 0, VAR_4 = FUNC_0(((void*)0), &VAR_3, VAR_1);

    if (VAR_4 == VAR_0)
    {
        MIB_IPFORWARDTABLE *VAR_5 = FUNC_2(FUNC_1(), 0, VAR_3);
        if (VAR_5)
        {
            if (!FUNC_0(VAR_5, &VAR_3, VAR_1)) VAR_2 = VAR_5;
            else FUNC_3(FUNC_1(), 0, VAR_5 );
        }
    }
}
