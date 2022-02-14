
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct snd_dmaengine_dai_dma_data {int maxburst; } ;
struct davinci_mcasp {int tdm_slots; scalar_t__ version; int* active_serializers; int num_serializer; scalar_t__* serial_dir; int dismod; int txnumevt; int rxnumevt; int dev; scalar_t__ fifo_base; int pdir; struct snd_dmaengine_dai_dma_data* dma_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_7 (struct davinci_mcasp*,scalar_t__,int,int ) ;
 int FUNC_8 (struct davinci_mcasp*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct davinci_mcasp*,int ,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct davinci_mcasp *VAR_22, int VAR_23,
     int VAR_24, int VAR_25)
{
 struct snd_dmaengine_dai_dma_data *VAR_26 = &VAR_22->dma_data[VAR_23];
 int VAR_27;
 u8 VAR_28 = 0;
 u8 VAR_29 = 0;
 u8 VAR_30 = VAR_22->tdm_slots;
 u8 VAR_31 = (VAR_25 + VAR_30 - 1) / VAR_30;
 u8 VAR_32, VAR_33;
 int VAR_34, VAR_35;
 u32 VAR_36;

 if (VAR_22->version < VAR_10)
  FUNC_8(VAR_22, VAR_0, VAR_9);

 if (VAR_23 == VAR_17) {
  FUNC_9(VAR_22, VAR_3, 0xFFFFFFFF);
  FUNC_6(VAR_22, VAR_4, VAR_20);
  VAR_33 = VAR_31;
  VAR_32 =
   VAR_22->active_serializers[VAR_16];
 } else {
  FUNC_9(VAR_22, VAR_2, 0xFFFFFFFF);
  FUNC_6(VAR_22, VAR_1, VAR_14);
  VAR_33 =
   VAR_22->active_serializers[VAR_17];
  VAR_32 = VAR_31;
 }

 for (VAR_27 = 0; VAR_27 < VAR_22->num_serializer; VAR_27++) {
  FUNC_8(VAR_22, FUNC_0(VAR_27),
          VAR_22->serial_dir[VAR_27]);
  if (VAR_22->serial_dir[VAR_27] == VAR_21 &&
     VAR_28 < VAR_33) {
   FUNC_7(VAR_22, FUNC_0(VAR_27),
           VAR_22->dismod, VAR_5);
   FUNC_10(FUNC_2(VAR_27), &VAR_22->pdir);
   VAR_28++;
  } else if (VAR_22->serial_dir[VAR_27] == VAR_15 &&
     VAR_29 < VAR_32) {
   FUNC_3(FUNC_2(VAR_27), &VAR_22->pdir);
   VAR_29++;
  } else {

   FUNC_7(VAR_22, FUNC_0(VAR_27),
           VAR_18, VAR_19);

   if (VAR_22->serial_dir[VAR_27] != VAR_7)
    FUNC_7(VAR_22,
            FUNC_0(VAR_27),
            VAR_22->dismod, VAR_5);
   FUNC_3(FUNC_2(VAR_27), &VAR_22->pdir);
  }
 }

 if (VAR_23 == VAR_17) {
  VAR_34 = VAR_28;
  VAR_35 = VAR_22->txnumevt;
  VAR_36 = VAR_22->fifo_base + VAR_11;
 } else {
  VAR_34 = VAR_29;
  VAR_35 = VAR_22->rxnumevt;
  VAR_36 = VAR_22->fifo_base + VAR_8;
 }

 if (VAR_34 < VAR_31) {
  FUNC_5(VAR_22->dev, "stream has more channels (%d) than are "
    "enabled in mcasp (%d)\n", VAR_25,
    VAR_34 * VAR_30);
  return -VAR_6;
 }


 if (!VAR_35) {

  if (VAR_34 > 1) {






   VAR_26->maxburst = VAR_34;
  } else {
   VAR_26->maxburst = 0;
  }

  goto out;
 }

 if (VAR_24 % VAR_34) {
  FUNC_4(VAR_22->dev, "Invalid combination of period words and "
   "active serializers: %d, %d\n", VAR_24,
   VAR_34);
  return -VAR_6;
 }






 VAR_35 = (VAR_35 / VAR_34) * VAR_34;

 while (VAR_24 % VAR_35 && VAR_35 > 0)
  VAR_35 -= VAR_34;
 if (VAR_35 <= 0)
  VAR_35 = VAR_34;

 FUNC_7(VAR_22, VAR_36, VAR_34, VAR_12);
 FUNC_7(VAR_22, VAR_36, FUNC_1(VAR_35), VAR_13);


 if (VAR_35 == 1)
  VAR_35 = 0;
 VAR_26->maxburst = VAR_35;

out:
 VAR_22->active_serializers[VAR_23] = VAR_34;

 return 0;
}
