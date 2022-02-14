
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {unsigned int tag; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2, hda_nid_t VAR_3,
      bool VAR_4)
{
 struct hda_jack_tbl *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5) {



  unsigned int VAR_6 = VAR_4 ? 0 : (VAR_0 | VAR_5->tag);
  FUNC_0(VAR_2, VAR_3, 0,
       VAR_1, VAR_6);
 } else {



  if (!VAR_4)
   FUNC_1(VAR_2, VAR_3);
 }
}
