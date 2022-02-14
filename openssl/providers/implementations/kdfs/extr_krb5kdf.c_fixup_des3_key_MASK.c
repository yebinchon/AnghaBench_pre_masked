
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_cblock ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0)
{
    unsigned char *VAR_1;
    int VAR_2, VAR_3;

    for (VAR_2 = 2; VAR_2 >= 0; VAR_2--) {
        VAR_1 = &VAR_0[VAR_2 * 8];
        FUNC_2(VAR_1, &VAR_0[VAR_2 * 7], 7);
        VAR_1[7] = 0;
        for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
            VAR_1[7] |= (VAR_1[VAR_3] & 1) << (VAR_3 + 1);
        FUNC_1((DES_cblock *)VAR_1);
    }


    if (FUNC_0(&VAR_0[0], &VAR_0[8], 8) == 0 ||
        FUNC_0(&VAR_0[8], &VAR_0[16], 8) == 0) {
        return 0;
    }

    return 1;
}
