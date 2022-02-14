
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int smallfelem ;
typedef int nq ;
typedef scalar_t__ limb ;
typedef int const* felem_bytearray ;
typedef int felem ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const* const,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int const,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int,int,int const**,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(felem VAR_0, felem VAR_1, felem VAR_2,
                      const felem_bytearray VAR_3[],
                      const unsigned VAR_4, const u8 *VAR_5,
                      const int VAR_6, const smallfelem VAR_7[][17][3],
                      const smallfelem VAR_8[2][16][3])
{
    int VAR_9, VAR_10;
    unsigned VAR_11, VAR_12 = (VAR_5 != ((void*)0));
    felem VAR_13[3], VAR_14;
    smallfelem VAR_15[3];
    u64 VAR_16;
    u8 VAR_17, VAR_18;


    FUNC_5(VAR_13, 0, sizeof(VAR_13));






    VAR_10 = 1;

    for (VAR_9 = (VAR_4 ? 255 : 31); VAR_9 >= 0; --VAR_9) {

        if (!VAR_10)
            FUNC_7(VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[0], VAR_13[1], VAR_13[2]);


        if (VAR_12 && (VAR_9 <= 31)) {

            VAR_16 = FUNC_4(VAR_5, VAR_9 + 224) << 3;
            VAR_16 |= FUNC_4(VAR_5, VAR_9 + 160) << 2;
            VAR_16 |= FUNC_4(VAR_5, VAR_9 + 96) << 1;
            VAR_16 |= FUNC_4(VAR_5, VAR_9 + 32);

            FUNC_8(VAR_16, 16, VAR_8[1], VAR_15);

            if (!VAR_10) {

                FUNC_6(VAR_13[0], VAR_13[1], VAR_13[2],
                          VAR_13[0], VAR_13[1], VAR_13[2], 1, VAR_15[0], VAR_15[1], VAR_15[2]);
            } else {
                FUNC_9(VAR_13[0], VAR_15[0]);
                FUNC_9(VAR_13[1], VAR_15[1]);
                FUNC_9(VAR_13[2], VAR_15[2]);
                VAR_10 = 0;
            }


            VAR_16 = FUNC_4(VAR_5, VAR_9 + 192) << 3;
            VAR_16 |= FUNC_4(VAR_5, VAR_9 + 128) << 2;
            VAR_16 |= FUNC_4(VAR_5, VAR_9 + 64) << 1;
            VAR_16 |= FUNC_4(VAR_5, VAR_9);

            FUNC_8(VAR_16, 16, VAR_8[0], VAR_15);

            FUNC_6(VAR_13[0], VAR_13[1], VAR_13[2],
                      VAR_13[0], VAR_13[1], VAR_13[2], 1, VAR_15[0], VAR_15[1], VAR_15[2]);
        }


        if (VAR_4 && (VAR_9 % 5 == 0)) {

            for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
                VAR_16 = FUNC_4(VAR_3[VAR_11], VAR_9 + 4) << 5;
                VAR_16 |= FUNC_4(VAR_3[VAR_11], VAR_9 + 3) << 4;
                VAR_16 |= FUNC_4(VAR_3[VAR_11], VAR_9 + 2) << 3;
                VAR_16 |= FUNC_4(VAR_3[VAR_11], VAR_9 + 1) << 2;
                VAR_16 |= FUNC_4(VAR_3[VAR_11], VAR_9) << 1;
                VAR_16 |= FUNC_4(VAR_3[VAR_11], VAR_9 - 1);
                FUNC_1(&VAR_17, &VAR_18, VAR_16);




                FUNC_8(VAR_18, 17, VAR_7[VAR_11], VAR_15);
                FUNC_10(VAR_14, VAR_15[1]);

                FUNC_0(VAR_14, VAR_15[1], (((limb) VAR_17) - 1));
                FUNC_3(VAR_15[1], VAR_14);

                if (!VAR_10) {
                    FUNC_6(VAR_13[0], VAR_13[1], VAR_13[2],
                              VAR_13[0], VAR_13[1], VAR_13[2],
                              VAR_6, VAR_15[0], VAR_15[1], VAR_15[2]);
                } else {
                    FUNC_9(VAR_13[0], VAR_15[0]);
                    FUNC_9(VAR_13[1], VAR_15[1]);
                    FUNC_9(VAR_13[2], VAR_15[2]);
                    VAR_10 = 0;
                }
            }
        }
    }
    FUNC_2(VAR_0, VAR_13[0]);
    FUNC_2(VAR_1, VAR_13[1]);
    FUNC_2(VAR_2, VAR_13[2]);
}
