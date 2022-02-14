
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_cblock ;
typedef int DES_LONG ;


 int FUNC_0 (scalar_t__,int *,long,int,int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
    DES_LONG VAR_2, VAR_3[4];

    VAR_2 = FUNC_0(VAR_0, (DES_cblock *)VAR_3,
                        (long)FUNC_2((char *)VAR_0), 2,
                        (DES_cblock *)VAR_1);
    if (!FUNC_1(VAR_2, 0x70d7a63aL))
        return 0;
    if (!FUNC_1(VAR_3[0], 0x327eba8dL))
        return 0;
    if (!FUNC_1(VAR_3[1], 0x201a49ccL))
        return 0;
    if (!FUNC_1(VAR_3[2], 0x70d7a63aL))
        return 0;
    if (!FUNC_1(VAR_3[3], 0x501c2c26L))
        return 0;
    return 1;
}
