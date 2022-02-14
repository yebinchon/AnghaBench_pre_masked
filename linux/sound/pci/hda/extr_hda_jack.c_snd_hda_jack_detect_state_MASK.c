
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {scalar_t__ phantom_jack; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hda_jack_tbl* FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;

int FUNC_2(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 struct hda_jack_tbl *VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 && VAR_6->phantom_jack)
  return VAR_2;
 else if (FUNC_1(VAR_4, VAR_5) & VAR_0)
  return VAR_3;
 else
  return VAR_1;
}
