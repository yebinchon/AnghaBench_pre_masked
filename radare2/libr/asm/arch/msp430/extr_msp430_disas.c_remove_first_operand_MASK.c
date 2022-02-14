
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp430_cmd {int operands; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msp430_cmd *VAR_0)
{
 if (FUNC_1(VAR_0->operands, ',')) {
  FUNC_0(VAR_0->operands, FUNC_1(VAR_0->operands, ',') + 2,
    FUNC_2(FUNC_1(VAR_0->operands, ',') + 2) + 1);
 }
}
