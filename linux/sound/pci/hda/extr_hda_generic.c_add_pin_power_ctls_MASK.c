
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;
typedef int hda_jack_callback_fn ;


 scalar_t__ FUNC_0 (struct hda_codec*,scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*,scalar_t__ const,int,int) ;
 int FUNC_2 (struct hda_codec*,scalar_t__ const,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2, int VAR_3,
          const hda_nid_t *VAR_4, bool VAR_5)
{
 int VAR_6;
 hda_jack_callback_fn VAR_7 =
  VAR_5 ? VAR_1 : VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_4[VAR_6]; VAR_6++) {
  if (FUNC_0(VAR_2, VAR_4[VAR_6]))
   FUNC_2(VAR_2, VAR_4[VAR_6], VAR_7);
  else
   FUNC_1(VAR_2, VAR_4[VAR_6], 1, -1);
 }
}
