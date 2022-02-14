
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_10;

    if(VAR_8 == VAR_0) {
        FUNC_2(VAR_4);
    }
    if(VAR_8 != VAR_1) {
        FUNC_2(VAR_7);
        FUNC_2(VAR_3);
        FUNC_2(VAR_5);
    }

    VAR_10 = FUNC_1(VAR_9, VAR_2);
    FUNC_3(VAR_10 == VAR_6, "UIActivate failed: %08x\n", VAR_10);

    if(VAR_8 != VAR_1) {
        FUNC_0(VAR_7);
        FUNC_0(VAR_3);
        FUNC_0(VAR_5);
    }
    if(VAR_8 == VAR_0) {
        FUNC_0(VAR_4);
    }
}
