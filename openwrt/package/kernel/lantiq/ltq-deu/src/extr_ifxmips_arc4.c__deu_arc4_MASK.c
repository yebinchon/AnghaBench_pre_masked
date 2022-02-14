
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int GO; scalar_t__ BUS; } ;
struct arc4_t {int IDLEN; int ID3R; int ID2R; int ID1R; int ID0R; int OD3R; int OD2R; int OD1R; int OD0R; TYPE_1__ controlr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0 (void *VAR_3, u8 *VAR_4, const u8 *VAR_5,
            u8 *VAR_6, u32 VAR_7, int VAR_8, int VAR_9)
{
        volatile struct arc4_t *VAR_10 = (struct arc4_t *) VAR_0;

        int VAR_11 = 0;
        unsigned long VAR_12;


        volatile u32 VAR_13[4];
        volatile u8 *VAR_14;
        int VAR_15, VAR_16;


        VAR_2;

        VAR_10->IDLEN = VAR_7;


        while (VAR_11 < VAR_7) {
                VAR_10->ID3R = *((u32 *) VAR_5 + (VAR_11>>2) + 0);
                VAR_10->ID2R = *((u32 *) VAR_5 + (VAR_11>>2) + 1);
                VAR_10->ID1R = *((u32 *) VAR_5 + (VAR_11>>2) + 2);
                VAR_10->ID0R = *((u32 *) VAR_5 + (VAR_11>>2) + 3);

                VAR_10->controlr.GO = 1;

                while (VAR_10->controlr.BUS) {

                }



                VAR_13[0] = VAR_10->OD3R;
                VAR_13[1] = VAR_10->OD2R;
                VAR_13[2] = VAR_10->OD1R;
                VAR_13[3] = VAR_10->OD0R;

                VAR_15 = VAR_7 - VAR_11;
                if (VAR_15 > 16)
                     VAR_15 = 16;

                VAR_14 = (u8 *)&VAR_13[0];
                for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
                     *VAR_4++ = *VAR_14++;







                VAR_11 += 16;
        }




        VAR_1;
}
