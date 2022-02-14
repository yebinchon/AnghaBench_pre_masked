
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_12(u8 *VAR_0, __be32 VAR_1)
{
 if (VAR_1 == 0)
  return -1;
 VAR_0[0] = (FUNC_10(VAR_1) || FUNC_5(VAR_1) ||
    FUNC_3(VAR_1) || FUNC_2(VAR_1) ||
    FUNC_6(VAR_1) || FUNC_8(VAR_1) ||
    FUNC_0(VAR_1) || FUNC_7(VAR_1) ||
    FUNC_9(VAR_1) || FUNC_4(VAR_1) ||
    FUNC_1(VAR_1)) ? 0x00 : 0x02;
 VAR_0[1] = 0;
 VAR_0[2] = 0x5E;
 VAR_0[3] = 0xFE;
 FUNC_11(VAR_0 + 4, &VAR_1, 4);
 return 0;
}
