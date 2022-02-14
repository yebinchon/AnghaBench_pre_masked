
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_14__ {int block; int light; int data; int skylight; } ;
typedef TYPE_1__ raw_block ;
struct TYPE_15__ {unsigned char* pointer_to_free; int max_y; int xpos; int zpos; int** blockdata; int** data; int** light; int** skylight; TYPE_1__*** rb; } ;
typedef TYPE_2__ parse_chunk ;
struct TYPE_16__ {unsigned char* buffer_start; unsigned char* buffer_end; unsigned char* cur; scalar_t__ nesting; } ;
typedef TYPE_3__ nbt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int* FUNC_7 (TYPE_3__*,int ,...) ;
 char* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static parse_chunk *FUNC_11(unsigned char *VAR_5, size_t VAR_6)
{
   char *VAR_7;
   parse_chunk *VAR_8 = ((void*)0);

   nbt VAR_9, *VAR_10 = &VAR_9;
   VAR_10->buffer_start = VAR_5;
   VAR_10->buffer_end = VAR_5 + VAR_6;
   VAR_10->cur = VAR_10->buffer_start;
   VAR_10->nesting = 0;

   FUNC_3(VAR_10);
   while ((VAR_7 = FUNC_8(VAR_10)) != ((void*)0)) {
      if (!FUNC_10(VAR_7, "Level")) {
         int *VAR_11;
         VAR_8 = FUNC_1(sizeof(*VAR_8));




         VAR_8->rb[15][15][255].block = 0;

         VAR_8->max_y = 0;

         FUNC_3(VAR_10);
         while ((VAR_7 = FUNC_8(VAR_10)) != ((void*)0)) {
            if (!FUNC_10(VAR_7, "xPos"))
               VAR_8->xpos = *(int *) FUNC_7(VAR_10, VAR_3, 0);
            else if (!FUNC_10(VAR_7, "zPos"))
               VAR_8->zpos = *(int *) FUNC_7(VAR_10, VAR_3, 0);
            else if (!FUNC_10(VAR_7, "Sections")) {
               int VAR_12 = FUNC_5(VAR_10, VAR_2), VAR_13;
               if (VAR_12 == -1) {




                  FUNC_9(VAR_10);
                  VAR_12 = -1;
               }
               for (VAR_13=0; VAR_13 < VAR_12; ++VAR_13) {
                  int VAR_14, VAR_15;
                  uint8 *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
                  FUNC_4(VAR_10);
                  while ((VAR_7 = FUNC_8(VAR_10)) != ((void*)0)) {
                     if (!FUNC_10(VAR_7, "Y"))
                        VAR_14 = * (uint8 *) FUNC_7(VAR_10, VAR_0, 0);
                     else if (!FUNC_10(VAR_7, "BlockLight")) {
                        VAR_16 = FUNC_7(VAR_10, VAR_1, &VAR_15);
                        FUNC_0(VAR_15 == 2048);
                     } else if (!FUNC_10(VAR_7, "Blocks")) {
                        VAR_17 = FUNC_7(VAR_10, VAR_1, &VAR_15);
                        FUNC_0(VAR_15 == 4096);
                     } else if (!FUNC_10(VAR_7, "Data")) {
                        VAR_18 = FUNC_7(VAR_10, VAR_1, &VAR_15);
                        FUNC_0(VAR_15 == 2048);
                     } else if (!FUNC_10(VAR_7, "SkyLight")) {
                        VAR_19 = FUNC_7(VAR_10, VAR_1, &VAR_15);
                        FUNC_0(VAR_15 == 2048);
                     }
                  }
                  FUNC_6(VAR_10);

                  FUNC_0(VAR_14 < 16);




                  {
                     int VAR_20,VAR_21;
                     while (VAR_8->max_y < VAR_14*16) {
                        for (VAR_20=0; VAR_20 < 16; ++VAR_20)
                           for (VAR_21=0; VAR_21 < 16; ++VAR_21)
                              VAR_8->rb[VAR_21][VAR_20][VAR_8->max_y].block = 0;
                        ++VAR_8->max_y;
                     }
                  }


                  {
                     int VAR_22,VAR_23,VAR_24, VAR_25=0,VAR_26=0;
                     for (VAR_23=0; VAR_23 < 16; ++VAR_23) {
                        for (VAR_24=0; VAR_24 < 16; ++VAR_24) {
                           for (VAR_22=0; VAR_22 < 16; VAR_22 += 2) {
                              raw_block *VAR_27 = &VAR_8->rb[15-VAR_24][VAR_22][VAR_23 + VAR_14*16];
                              VAR_27[0].block = VAR_17[VAR_26];
                              VAR_27[0].light = VAR_16[VAR_25] & 15;
                              VAR_27[0].data = VAR_18[VAR_25] & 15;
                              VAR_27[0].skylight = VAR_19[VAR_25] & 15;

                              VAR_27[256].block = VAR_17[VAR_26+1];
                              VAR_27[256].light = VAR_16[VAR_25] >> 4;
                              VAR_27[256].data = VAR_18[VAR_25] >> 4;
                              VAR_27[256].skylight = VAR_19[VAR_25] >> 4;

                              VAR_25 += 1;
                              VAR_26 += 2;
                           }
                        }
                     }
                     VAR_8->max_y += 16;
                  }






               }

            } else if (!FUNC_10(VAR_7, "HeightMap")) {
               VAR_11 = FUNC_7(VAR_10, VAR_4, &VAR_6);
               FUNC_0(VAR_6 == 256);
            } else
               FUNC_9(VAR_10);
         }
         FUNC_6(VAR_10);

      } else
         FUNC_9(VAR_10);
   }
   FUNC_6(VAR_10);
   FUNC_0(VAR_10->cur == VAR_10->buffer_end);
   return VAR_8;
}
