
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {scalar_t__ inv_jack_detect; int no_trigger_sense; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 if (!VAR_4->no_trigger_sense) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6 & VAR_0)
   FUNC_0(VAR_4, VAR_5, 0,
     VAR_3, 0);
 }
 VAR_7 = FUNC_0(VAR_4, VAR_5, 0,
      VAR_2, 0);
 if (VAR_4->inv_jack_detect)
  VAR_7 ^= VAR_1;
 return VAR_7;
}
