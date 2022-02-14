
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_cvt_setup {int format_id; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2, struct hda_cvt_setup *VAR_3,
         hda_nid_t VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 if (VAR_3->format_id != VAR_5) {
  VAR_6 = FUNC_1(VAR_2, VAR_4, 0,
         VAR_0, 0);
  if (VAR_6 != VAR_5) {
   FUNC_0(1);
   FUNC_2(VAR_2, VAR_4, 0,
         VAR_1,
         VAR_5);
  }
  VAR_3->format_id = VAR_5;
 }
}
