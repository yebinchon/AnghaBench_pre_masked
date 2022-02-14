
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iv ;
typedef int cbc_out ;
typedef int cbc_in ;
typedef int BF_LONG ;
typedef int BF_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int,int *,unsigned char*,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (unsigned char*,int,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(void)
{
    unsigned char VAR_6[40], VAR_7[40], VAR_8[8];
    int VAR_9 = 1;
    BF_KEY VAR_10;
    BF_LONG VAR_11;

    VAR_11 = FUNC_5(VAR_2) + 1;

    FUNC_1(&VAR_10, 16, VAR_4);
    FUNC_4(VAR_6, 0, sizeof(VAR_6));
    FUNC_4(VAR_7, 0, sizeof(VAR_7));
    FUNC_3(VAR_8, VAR_3, sizeof(VAR_8));
    FUNC_0((unsigned char *)VAR_2, VAR_7, VAR_11,
                   &VAR_10, VAR_8, VAR_1);
    if (!FUNC_2(VAR_7, 32, VAR_5, 32))
        VAR_9 = 0;

    FUNC_3(VAR_8, VAR_3, 8);
    FUNC_0(VAR_7, VAR_6, VAR_11, &VAR_10, VAR_8, VAR_0);
    if (!FUNC_2(VAR_6, VAR_11, VAR_2, FUNC_5(VAR_2) + 1))
        VAR_9 = 0;

    return VAR_9;
}
