
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int codec; TYPE_3__* dma_adb; int * mixspdif; struct pcm_vol* pcm_vol; int * a3d; TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
typedef int u32 ;
struct pcm_vol {int dma; int* mixin; scalar_t__* vol; } ;
struct TYPE_18__ {int dma; int dir; int type; int nr_ch; int * resources; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_16__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int *,int,TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *,int,int ) ;
 int FUNC_15 (TYPE_2__*,int,int,int,int) ;
 int FUNC_16 (TYPE_2__*,int,int,int,int) ;
 int FUNC_17 (TYPE_2__*,int,int,int,int ) ;
 int FUNC_18 (TYPE_2__*,int,int,int,int) ;
 int FUNC_19 (TYPE_2__*,int,int,int,int) ;
 int FUNC_20 (TYPE_2__*,int,int,int,int,int) ;
 int FUNC_21 (TYPE_2__*,int,int,int ) ;
 int FUNC_22 (TYPE_2__*,int,int,int ,int ) ;

__attribute__((used)) static int
FUNC_23(vortex_t *VAR_13, int VAR_14, int VAR_15, int VAR_16,
   int VAR_17, int VAR_18)
{
 stream_t *VAR_19;
 int VAR_20, VAR_21;
 struct pcm_vol *VAR_22;

 if (VAR_14 >= 0) {
  VAR_21 = 0;
  FUNC_14(VAR_13,
          VAR_13->dma_adb[VAR_14].resources, VAR_21,
          VAR_9);
 } else {
  VAR_21 = 1;
  if ((VAR_14 =
       FUNC_14(VAR_13, ((void*)0), VAR_21,
        VAR_9)) < 0)
   return -VAR_1;
 }

 VAR_19 = &VAR_13->dma_adb[VAR_14];
 VAR_19->dma = VAR_14;
 VAR_19->dir = VAR_16;
 VAR_19->type = VAR_17;


 if (VAR_16 == VAR_4) {
  int VAR_23[4], VAR_24[4], VAR_25;

  int VAR_26 = 0;


  if (VAR_19->type != VAR_7) {
   for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
    if ((VAR_23[VAR_20] = FUNC_14(VAR_13,
          VAR_19->resources, VAR_21,
          VAR_12)) < 0) {
     FUNC_10(VAR_19->resources, 0,
            sizeof(VAR_19->resources));
     return -VAR_1;
    }
    if (VAR_19->type != VAR_5) {
     if ((VAR_24[VAR_20] = FUNC_14(VAR_13,
           VAR_19->resources,
           VAR_21,
           VAR_10)) < 0) {
      FUNC_10(VAR_19->resources,
             0,
             sizeof(VAR_19->resources));
      return -VAR_1;
     }
    }
   }
  }

  if (VAR_19->type == VAR_5) {
   if ((VAR_26 =
        FUNC_14(VAR_13,
         VAR_19->resources, VAR_21,
         VAR_8)) < 0) {
    FUNC_10(VAR_19->resources, 0,
           sizeof(VAR_19->resources));
    FUNC_9(VAR_13->card->dev,
     "out of A3D sources. Sorry\n");
    return -VAR_1;
   }

   FUNC_13(&VAR_13->a3d[VAR_26], VAR_21,
             VAR_13);
  }

  if ((VAR_19->type == VAR_7) && (VAR_21)) {
   FUNC_22(VAR_13, 0, 0x14,
         FUNC_2(VAR_13->mixspdif[0]),
         FUNC_3(0));
   FUNC_22(VAR_13, 0, 0x14,
         FUNC_2(VAR_13->mixspdif[1]),
         FUNC_3(1));
  }


  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
   if (VAR_19->type == VAR_6) {
    FUNC_15(VAR_13, VAR_21,
            VAR_23[VAR_15 - 1],
            VAR_14,
            VAR_23[VAR_20]);
    FUNC_19(VAR_13, VAR_21,
           0x11, VAR_23[VAR_20],
           VAR_24[VAR_20]);
    FUNC_17(VAR_13, VAR_21,
           VAR_24[VAR_20],
           FUNC_6(VAR_20), 0);

    FUNC_17(VAR_13, VAR_21,
           VAR_24[VAR_20],
           FUNC_7(VAR_20 % 2), 0);
    FUNC_21(VAR_13,
             FUNC_7(VAR_20 % 2),
             VAR_24[VAR_20],
             VAR_3);

   }

   if (VAR_19->type == VAR_5) {
    FUNC_15(VAR_13, VAR_21,
            VAR_23[VAR_15 - 1],
         VAR_14,
            VAR_23[VAR_20]);
    FUNC_22(VAR_13, VAR_21, 0x11, FUNC_4(VAR_23[VAR_20]), FUNC_0(VAR_26));



   }
   if (VAR_19->type == VAR_7)
    FUNC_22(VAR_13, VAR_21, 0x14,
          FUNC_1(VAR_19->dma),
          FUNC_3(VAR_20));

  }
  if (VAR_19->type != VAR_7 && VAR_19->type != VAR_5) {
   VAR_25 = (FUNC_8(VAR_13) ? 4 : 2);
   for (VAR_20 = VAR_15; VAR_20 < VAR_25; VAR_20++) {
    FUNC_17(VAR_13, VAR_21,
           VAR_24[VAR_20 % VAR_15],
           FUNC_6(VAR_20), 0);

    FUNC_17(VAR_13, VAR_21,
           VAR_24[VAR_20 % VAR_15],
           FUNC_7(VAR_20 % 2),
        0);
    FUNC_21(VAR_13,
             FUNC_7(VAR_20 % 2),
             VAR_24[VAR_20 % VAR_15],
             VAR_3);

   }
   if (VAR_19->type == VAR_6 && VAR_21) {
    VAR_22 = &VAR_13->pcm_vol[VAR_18];
    VAR_22->dma = VAR_14;
    for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
     VAR_22->mixin[VAR_20] = VAR_24[VAR_20];
    for (VAR_20 = 0; VAR_20 < VAR_25; VAR_20++)
     VAR_22->vol[VAR_20] = 0;
   }
  }

  else {
   if (VAR_15 == 1 && VAR_19->type == VAR_7)
    FUNC_22(VAR_13, VAR_21, 0x14,
          FUNC_1(VAR_19->dma),
          FUNC_3(1));
  }

  if ((VAR_19->type == VAR_7) && (!VAR_21)) {
   FUNC_22(VAR_13, 1, 0x14,
         FUNC_2(VAR_13->mixspdif[0]),
         FUNC_3(0));
   FUNC_22(VAR_13, 1, 0x14,
         FUNC_2(VAR_13->mixspdif[1]),
         FUNC_3(1));
  }


 } else {
  int VAR_27[2], VAR_28[2];

  if (VAR_15 < 1)
   return -VAR_2;


  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
   if ((VAR_28[VAR_20] =
        FUNC_14(VAR_13,
         VAR_19->resources, VAR_21,
         VAR_11))
       < 0) {
    FUNC_10(VAR_19->resources, 0,
           sizeof(VAR_19->resources));
    return -VAR_1;
   }
   if ((VAR_27[VAR_20] =
        FUNC_14(VAR_13,
         VAR_19->resources, VAR_21,
         VAR_12)) < 0) {
    FUNC_10(VAR_19->resources, 0,
           sizeof(VAR_19->resources));
    return -VAR_1;
   }
  }


  FUNC_17(VAR_13, VAR_21, FUNC_5(0), VAR_28[0], 0);
  FUNC_16(VAR_13, VAR_21, 0x11, VAR_28[0], VAR_27[0]);
  if (VAR_15 == 1) {
   FUNC_17(VAR_13, VAR_21,
          FUNC_5(1), VAR_28[0], 0);
   FUNC_18(VAR_13, VAR_21,
           VAR_27[0],
           VAR_27[0], VAR_14);
  } else {
   FUNC_17(VAR_13, VAR_21,
          FUNC_5(1), VAR_28[1], 0);
   FUNC_16(VAR_13, VAR_21, 0x11, VAR_28[1],
        VAR_27[1]);
   FUNC_20(VAR_13, VAR_21,
        VAR_27[1], VAR_27[0],
        VAR_27[1], VAR_14);
  }
 }
 VAR_13->dma_adb[VAR_14].nr_ch = VAR_15;
 return VAR_14;
}
