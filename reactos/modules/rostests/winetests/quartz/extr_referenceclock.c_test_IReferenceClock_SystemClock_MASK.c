
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int IReferenceClock ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static void FUNC_5(void)
{
    IReferenceClock * VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (LPVOID*)&VAR_4);
    FUNC_2(VAR_5 == VAR_3, "Unable to create reference clock from system clock %x\n", VAR_5);
    if (VAR_5 == VAR_3)
    {
        FUNC_4("SystemClock", VAR_4);
 FUNC_3("SystemClock", VAR_4);
 FUNC_1(VAR_4);
    }
}
