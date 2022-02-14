
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,char*,...) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;

int FUNC_4(struct hda_codec *VAR_6, hda_nid_t VAR_7,
       unsigned char *VAR_8, int *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;






 VAR_12 = FUNC_3(VAR_6, VAR_7);
 if (VAR_12 == 0) {

  FUNC_1(VAR_6, "HDMI: ELD buf size is 0, force 128\n");
  VAR_12 = 128;
 }
 if (VAR_12 < VAR_3 || VAR_12 > VAR_4) {
  FUNC_1(VAR_6, "HDMI: invalid ELD buf size %d\n", VAR_12);
  return -VAR_5;
 }


 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  unsigned int VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_10);




  if (!(VAR_13 & VAR_1)) {
   FUNC_1(VAR_6, "HDMI: invalid ELD data byte %d\n", VAR_10);
   VAR_11 = -VAR_2;
   goto error;
  }
  VAR_13 &= VAR_0;






  if (!VAR_13 && !VAR_10) {
   FUNC_0(VAR_6, "HDMI: 0 ELD data\n");
   VAR_11 = -VAR_2;
   goto error;
  }
  VAR_8[VAR_10] = VAR_13;
 }

 *VAR_9 = VAR_12;
error:
 return VAR_11;
}
