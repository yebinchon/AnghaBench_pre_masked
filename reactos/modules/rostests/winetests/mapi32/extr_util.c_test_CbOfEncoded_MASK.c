
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (char*,char,unsigned int) ;
 int FUNC_1 (int,char*,unsigned int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    char VAR_0[129];
    unsigned int VAR_1;

    if (!&FUNC_2)
    {
        FUNC_3("CbOfEncoded is not available\n");
        return;
    }

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_0) - 1; VAR_1++)
    {
        ULONG VAR_2, VAR_3 = (((VAR_1 | 3) >> 2) + 1) * 3;

        FUNC_0(VAR_0, '\0', sizeof(VAR_0));
        FUNC_0(VAR_0, '?', VAR_1);
        VAR_2 = FUNC_2(VAR_0);
        FUNC_1(VAR_2 == VAR_3,
           "CbOfEncoded(length %d): expected %d, got %d\n",
           VAR_1, VAR_3, VAR_2);
    }
}
