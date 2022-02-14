
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int limb ;
typedef unsigned int* felem ;


 int FUNC_0 (unsigned int**,int ,int) ;

__attribute__((used)) static void FUNC_1(const u64 VAR_0, unsigned int VAR_1,
                         const felem VAR_2[][3], felem VAR_3[3])
{
    unsigned VAR_4, VAR_5;
    limb *VAR_6 = &VAR_3[0][0];

    FUNC_0(VAR_3, 0, sizeof(*VAR_3) * 3);
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        const limb *VAR_7 = &VAR_2[VAR_4][0][0];
        u64 VAR_8 = VAR_4 ^ VAR_0;
        VAR_8 |= VAR_8 >> 4;
        VAR_8 |= VAR_8 >> 2;
        VAR_8 |= VAR_8 >> 1;
        VAR_8 &= 1;
        VAR_8--;
        for (VAR_5 = 0; VAR_5 < 4 * 3; VAR_5++)
            VAR_6[VAR_5] |= VAR_7[VAR_5] & VAR_8;
    }
}
