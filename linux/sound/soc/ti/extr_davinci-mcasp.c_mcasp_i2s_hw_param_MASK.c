
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {int tdm_slots; int* tdm_mask; int channels; int dat_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct davinci_mcasp*,int ,int ) ;
 scalar_t__ FUNC_4 (struct davinci_mcasp*) ;
 int FUNC_5 (struct davinci_mcasp*,int ,int ,int ) ;
 int FUNC_6 (struct davinci_mcasp*,int ,int) ;
 int FUNC_7 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct davinci_mcasp *VAR_13, int VAR_14,
         int VAR_15)
{
 int VAR_16, VAR_17;
 int VAR_18;
 int VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;

 VAR_18 = VAR_13->tdm_slots;







 if (VAR_13->tdm_mask[VAR_14]) {
  VAR_17 = FUNC_2(VAR_13->tdm_mask[VAR_14]);
  VAR_19 = (VAR_15 + VAR_17 - 1) /
   VAR_17;
  if (VAR_19 == 1)
   VAR_17 = VAR_15;
  for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
   if ((1 << VAR_16) & VAR_13->tdm_mask[VAR_14]) {
    VAR_20 |= (1 << VAR_16);
    if (--VAR_17 <= 0)
     break;
   }
  }
 } else {
  VAR_19 = (VAR_15 + VAR_18 - 1) / VAR_18;
  if (VAR_19 == 1)
   VAR_17 = VAR_15;
  else
   VAR_17 = VAR_18;

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   VAR_20 |= (1 << VAR_16);
 }

 FUNC_3(VAR_13, VAR_0, VAR_12);

 if (!VAR_13->dat_port)
  VAR_21 = VAR_11;

 if (VAR_14 == VAR_9) {
  FUNC_7(VAR_13, VAR_6, VAR_20);
  FUNC_6(VAR_13, VAR_5, VAR_21 | VAR_10);
  FUNC_5(VAR_13, VAR_4,
          FUNC_1(VAR_18), FUNC_1(0x1FF));
 } else if (VAR_14 == VAR_8) {
  FUNC_7(VAR_13, VAR_3, VAR_20);
  FUNC_6(VAR_13, VAR_2, VAR_21 | VAR_7);
  FUNC_5(VAR_13, VAR_1,
          FUNC_0(VAR_18), FUNC_0(0x1FF));





  if (FUNC_4(VAR_13) && !VAR_13->channels)
   FUNC_5(VAR_13, VAR_4,
           FUNC_1(VAR_18), FUNC_1(0x1FF));
 }

 return 0;
}
