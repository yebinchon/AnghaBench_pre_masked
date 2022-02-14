
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct hda_codec*,char*,...) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (int,unsigned char*) ;
 int FUNC_4 (int,int) ;
 void* FUNC_5 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int ,int ,int ,int) ;

int FUNC_7(struct hda_codec *VAR_28, hda_nid_t VAR_29,
    unsigned char *VAR_30, int *VAR_31, bool VAR_32)
{
 int VAR_33, VAR_34, VAR_35;
 int VAR_36 = 0;
 int VAR_37, VAR_38;



 VAR_33 = FUNC_5(VAR_28, VAR_29, 0, VAR_16, 0);

 if (VAR_33 <= 0) {
  FUNC_0(VAR_28, "HDMI ATI/AMD: no speaker allocation for ELD\n");
  return -VAR_23;
 }

 FUNC_1(VAR_30, 0, VAR_24 + VAR_25 + VAR_26 * 3);


 VAR_30[0] = VAR_27 << 3;


 VAR_30[7] = VAR_33 & VAR_11;


 if (VAR_33 & VAR_12)
  VAR_30[5] |= 0x04;

 VAR_37 = VAR_24;

 if (VAR_32) {
  int VAR_39;

  FUNC_6(VAR_28, VAR_29, 0, VAR_18, VAR_7);
  VAR_39 = FUNC_5(VAR_28, VAR_29, 0, VAR_15, 0);
  FUNC_3(VAR_39, VAR_30 + 8);

  FUNC_6(VAR_28, VAR_29, 0, VAR_18, VAR_6);
  VAR_39 = FUNC_5(VAR_28, VAR_29, 0, VAR_15, 0);
  FUNC_3(VAR_39, VAR_30 + 12);

  FUNC_6(VAR_28, VAR_29, 0, VAR_18, VAR_5);
  VAR_39 = FUNC_5(VAR_28, VAR_29, 0, VAR_15, 0);
  FUNC_2(VAR_39, VAR_30 + 16);

  FUNC_6(VAR_28, VAR_29, 0, VAR_18, VAR_8);
  VAR_39 = FUNC_5(VAR_28, VAR_29, 0, VAR_15, 0);
  FUNC_2(VAR_39, VAR_30 + 18);

  FUNC_6(VAR_28, VAR_29, 0, VAR_18, VAR_10);
  VAR_36 = FUNC_5(VAR_28, VAR_29, 0, VAR_15, 0);

  if (VAR_36 > VAR_25) {
   FUNC_0(VAR_28, "HDMI ATI/AMD: Truncating HDMI sink description with length %d\n",
       VAR_36);
   VAR_36 = VAR_25;
  }

  VAR_30[4] |= VAR_36;

  for (VAR_38 = 0; VAR_38 < VAR_36; VAR_38++) {
   FUNC_6(VAR_28, VAR_29, 0, VAR_18, VAR_9 + VAR_38);
   VAR_30[VAR_37++] = FUNC_5(VAR_28, VAR_29, 0, VAR_15, 0);
  }
 }

 for (VAR_38 = VAR_20; VAR_38 <= VAR_22; VAR_38++) {
  if (VAR_38 == VAR_21 || VAR_38 == VAR_19)
   continue;

  FUNC_6(VAR_28, VAR_29, 0, VAR_17, VAR_38 << 3);
  VAR_34 = FUNC_5(VAR_28, VAR_29, 0, VAR_13, 0);

  if (VAR_34 <= 0)
   continue;

  if (VAR_34 & VAR_2) {

   VAR_30[VAR_37++] = (VAR_34 & 0x0000ff) >> 0;
   VAR_30[VAR_37++] = (VAR_34 & 0x00ff00) >> 8;
   VAR_30[VAR_37++] = (VAR_34 & 0xff0000) >> 16;
  }

  if (VAR_38 == VAR_20
      && (VAR_34 & VAR_1)
      && (VAR_34 & VAR_1) >> 16 != (VAR_34 & VAR_2)) {

   VAR_30[VAR_37++] = ((VAR_34 & 0x000000ff) & ~VAR_0) | 0x1;

   VAR_30[VAR_37++] = (VAR_34 & 0xff000000) >> 24;
   VAR_30[VAR_37++] = (VAR_34 & 0x00ff0000) >> 16;
  }
 }

 if (VAR_37 == VAR_24 + VAR_36) {
  FUNC_0(VAR_28, "HDMI ATI/AMD: no audio descriptors for ELD\n");
  return -VAR_23;
 }
 VAR_35 = FUNC_5(VAR_28, VAR_29, 0, VAR_14, 0);
 if ((VAR_35 & VAR_4) && (VAR_35 & VAR_3)) {
  int VAR_40 = (VAR_35 & VAR_4);
  int VAR_41 = (VAR_35 & VAR_3) >> 8;

  if (VAR_40 <= 0xfb && VAR_41 <= 0xfb &&
      VAR_40 > VAR_41)
   VAR_30[6] = VAR_40 - VAR_41;

 }


 VAR_30[5] |= ((VAR_37 - VAR_24 - VAR_36) / 3) << 4;


 VAR_37 = FUNC_4(VAR_37, 4);


 VAR_30[2] = (VAR_37 - 4) / 4;

 *VAR_31 = VAR_37;

 return 0;
}
