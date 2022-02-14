
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCWSTR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static
INT
FUNC_4(PCWSTR VAR_1, INT VAR_2)
{
    INT VAR_3;

    VAR_3 = FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_2));
    FUNC_3("Loaded metric setting '%S', iValue=%d(reg:%d), ret=%d(reg:%d)\n",
           VAR_1, VAR_2, FUNC_0(VAR_2), FUNC_1(VAR_3), VAR_3);
    return FUNC_1(VAR_3);
}
