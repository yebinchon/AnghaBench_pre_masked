
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_6;

    VAR_6 = FUNC_0(VAR_1, VAR_4,
                                      VAR_2);
    FUNC_1(VAR_6 == VAR_0, "First call to AddFile failed: 0x%08x\n", VAR_6);

    VAR_6 = FUNC_0(VAR_1, VAR_5,
                                      VAR_3);
    FUNC_1(VAR_6 == VAR_0, "Second call to AddFile failed: 0x%08x\n", VAR_6);
}
