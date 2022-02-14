
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int *,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int const**) ;
 int FUNC_3 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct snd_info_buffer *VAR_4,
       struct hda_codec *VAR_5, hda_nid_t VAR_6,
       unsigned int VAR_7, hda_nid_t *VAR_8,
       int VAR_9)
{
 int VAR_10, VAR_11 = -1;
 const hda_nid_t *VAR_12;
 int VAR_13;

 if (VAR_9 > 1 &&
     VAR_7 != VAR_1 &&
     VAR_7 != VAR_3 &&
     VAR_7 != VAR_2)
  VAR_11 = FUNC_1(VAR_5, VAR_6, 0,
       VAR_0, 0);
 FUNC_3(VAR_4, "  Connection: %d\n", VAR_9);
 if (VAR_9 > 0) {
  FUNC_3(VAR_4, "    ");
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   FUNC_3(VAR_4, " 0x%02x", VAR_8[VAR_10]);
   if (VAR_10 == VAR_11)
    FUNC_3(VAR_4, "*");
  }
  FUNC_3(VAR_4, "\n");
 }


 VAR_13 = FUNC_2(VAR_5, VAR_6, &VAR_12);
 if (VAR_13 >= 0 && (VAR_13 != VAR_9 ||
         FUNC_0(VAR_12, VAR_8, VAR_9) != 0)) {
  FUNC_3(VAR_4, "  In-driver Connection: %d\n", VAR_13);
  if (VAR_13 > 0) {
   FUNC_3(VAR_4, "    ");
   for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
    FUNC_3(VAR_4, " 0x%02x", VAR_12[VAR_10]);
   FUNC_3(VAR_4, "\n");
  }
 }
}
