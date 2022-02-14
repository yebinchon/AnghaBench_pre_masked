
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int num_total_dacs; int num_total_adcs; struct hoontech_spec* spec; } ;
struct hoontech_spec {int config; int* boxconfig; int boxbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ,int) ;
 struct hoontech_spec* FUNC_13 (int,int ) ;
 int FUNC_14 (struct snd_ice1712*,int,int,int) ;
 int FUNC_15 (struct snd_ice1712*,int,int) ;
 int FUNC_16 (struct snd_ice1712*,int) ;
 int FUNC_17 (struct snd_ice1712*,int) ;
 int FUNC_18 (struct snd_ice1712*,int) ;
 int FUNC_19 (struct snd_ice1712*,int) ;

__attribute__((used)) static int FUNC_20(struct snd_ice1712 *VAR_11, bool VAR_12)
{
 struct hoontech_spec *VAR_13;
 int VAR_14, VAR_15;

 VAR_11->num_total_dacs = 8;
 VAR_11->num_total_adcs = 8;

 VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;
 VAR_11->spec = VAR_13;

 FUNC_12(VAR_13->boxbits, 0);
 FUNC_11(VAR_13->boxbits, 0, 1);
 FUNC_0(VAR_13->boxbits, 0);
 FUNC_1(VAR_13->boxbits, 0);

 FUNC_12(VAR_13->boxbits, 1);
 FUNC_11(VAR_13->boxbits, 1, 1);
 FUNC_2(VAR_13->boxbits, 1);
 FUNC_3(VAR_13->boxbits, 1);
 FUNC_4(VAR_13->boxbits, 1);

 FUNC_12(VAR_13->boxbits, 2);
 FUNC_11(VAR_13->boxbits, 2, 1);
 FUNC_5(VAR_13->boxbits, 1);
 FUNC_7(VAR_13->boxbits, 1);
 FUNC_6(VAR_13->boxbits, 0);

 FUNC_12(VAR_13->boxbits, 3);
 FUNC_11(VAR_13->boxbits, 3, 1);
 FUNC_9(VAR_13->boxbits, 0);
 FUNC_10(VAR_13->boxbits, 1);
 FUNC_8(VAR_13->boxbits, 0);


 if (VAR_12)
  VAR_13->config = VAR_10;
 else
  VAR_13->config = 0;
 VAR_13->boxconfig[0] = VAR_2 |
         VAR_3 |
         VAR_4 |
         VAR_5 |
         VAR_6 |
         VAR_7;
 if (VAR_12) {
  VAR_13->boxconfig[1] =
  VAR_13->boxconfig[2] =
  VAR_13->boxconfig[3] = VAR_13->boxconfig[0];
 } else {
  VAR_13->boxconfig[1] =
  VAR_13->boxconfig[2] =
  VAR_13->boxconfig[3] = 0;
 }

 FUNC_16(VAR_11,
  (VAR_13->config & VAR_8) ? 1 : 0);
 FUNC_19(VAR_11,
  (VAR_13->config & VAR_10) ? 1 : 0);
 FUNC_17(VAR_11,
  (VAR_13->config & VAR_9) ? 1 : 0);
 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  if (VAR_13->boxconfig[VAR_14] & VAR_7)
                        FUNC_18(VAR_11, 1);
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
   FUNC_14(VAR_11, VAR_14, VAR_15,
    (VAR_13->boxconfig[VAR_14] & (1 << VAR_15)) ? 1 : 0);
  if (VAR_13->boxconfig[VAR_14] & VAR_6)
   FUNC_15(VAR_11, VAR_14, 1);
 }

 return 0;
}
