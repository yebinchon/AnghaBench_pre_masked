
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,int const) ;

__attribute__((used)) static void
FUNC_3(void)
{
    const int VAR_4 = FUNC_0(VAR_2) + VAR_3;

    if (!FUNC_2(VAR_1, VAR_4))
    {
        FUNC_1(VAR_0, "ERROR: Random number generator cannot obtain entropy for PRNG");
    }
}
