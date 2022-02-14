
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef int DES_LONG ;


 int FUNC_0 (scalar_t__,unsigned char**,int ,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned char*,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void)
{
    DES_LONG VAR_5;
    DES_key_schedule VAR_6;
    unsigned char VAR_7[8];

    FUNC_1(&VAR_4, &VAR_6);
    VAR_5 = FUNC_0(VAR_2, &VAR_7, FUNC_4((char *)VAR_2), &VAR_6,
                       &VAR_3);
    if (!FUNC_2(VAR_5, VAR_1))
        return 0;
    return FUNC_3(VAR_7, 8, VAR_0, 8);
}
