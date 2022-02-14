
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef scalar_t__ BG_JOB_STATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_5;
    BG_JOB_STATE VAR_6;

    VAR_6 = VAR_2;
    VAR_5 = FUNC_1(VAR_4, &VAR_6);
    FUNC_2(VAR_5 == VAR_3, "got 0x%08x\n", VAR_5);
    FUNC_2(VAR_6 != VAR_1, "got %u\n", VAR_6);

    VAR_5 = FUNC_0(VAR_4);
    FUNC_2(VAR_5 == VAR_3, "got 0x%08x\n", VAR_5);

    VAR_6 = VAR_2;
    VAR_5 = FUNC_1(VAR_4, &VAR_6);
    FUNC_2(VAR_5 == VAR_3, "got 0x%08x\n", VAR_5);
    FUNC_2(VAR_6 == VAR_1, "got %u\n", VAR_6);

    VAR_5 = FUNC_0(VAR_4);
    FUNC_2(VAR_5 == VAR_0, "got 0x%08x\n", VAR_5);
}
