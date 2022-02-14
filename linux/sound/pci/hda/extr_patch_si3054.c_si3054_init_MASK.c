
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct si3054_spec {int international; } ;
struct TYPE_2__ {int mfg; } ;
struct hda_codec {TYPE_1__ core; struct si3054_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct hda_codec*,char*,int) ;
 int FUNC_3 (struct hda_codec*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_18)
{
 struct si3054_spec *VAR_19 = VAR_18->spec;
 unsigned VAR_20;
 u16 VAR_21;

 if (FUNC_6(&VAR_18->core,
         VAR_17))
  return -VAR_3;

 FUNC_5(VAR_18, VAR_0, 0, VAR_1, 0);
 FUNC_5(VAR_18, VAR_18->core.mfg, 0, VAR_2, 0);
 FUNC_1(VAR_18, VAR_13, 9600);
 FUNC_1(VAR_18, VAR_12, VAR_7|VAR_4);
 FUNC_1(VAR_18, VAR_8, 0);

 VAR_20 = 10;
 do {
  FUNC_4(2);
  VAR_21 = FUNC_0(VAR_18, VAR_8);
 } while ((VAR_21 & VAR_15) != VAR_15 && VAR_20--);

 if((VAR_21&VAR_15) != VAR_15) {
  FUNC_3(VAR_18, "si3054: cannot initialize. EXT MID = %04x\n", VAR_21);


 }

 FUNC_1(VAR_18, VAR_10, 0xffff);
 FUNC_1(VAR_18, VAR_9, 0x0);
 FUNC_1(VAR_18, VAR_16, 0);
 FUNC_1(VAR_18, VAR_11,0x200);

 if((FUNC_0(VAR_18,VAR_14) & (1<<6)) == 0) {
  FUNC_2(VAR_18,
     "Link Frame Detect(FDT) is not ready (line status: %04x)\n",
    FUNC_0(VAR_18,VAR_14));
 }

 VAR_19->international = FUNC_0(VAR_18, VAR_5) & VAR_6;

 return 0;
}
