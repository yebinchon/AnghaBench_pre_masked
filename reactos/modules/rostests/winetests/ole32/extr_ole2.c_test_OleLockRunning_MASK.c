
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_4;

    VAR_4 = FUNC_0(&VAR_3, VAR_2, VAR_0);
    FUNC_1(VAR_4 == VAR_1, "OleLockRunning failed 0x%08x\n", VAR_4);
}
