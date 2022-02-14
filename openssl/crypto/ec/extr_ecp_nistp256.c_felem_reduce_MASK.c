
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* longfelem ;
typedef scalar_t__* felem ;


 int FUNC_0 (scalar_t__*,scalar_t__* const) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_1(felem VAR_1, const longfelem VAR_2)
{
    VAR_1[0] = VAR_0[0] + VAR_2[0];
    VAR_1[1] = VAR_0[1] + VAR_2[1];
    VAR_1[2] = VAR_0[2] + VAR_2[2];
    VAR_1[3] = VAR_0[3] + VAR_2[3];

    FUNC_0(VAR_1, VAR_2);
}
