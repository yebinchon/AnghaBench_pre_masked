
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int jack_dirty; int nid; } ;
struct hda_codec {int addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,char*,int ,int ,int,int,int,int) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_6, unsigned int VAR_7)
{
 int VAR_8 = VAR_7 >> VAR_5;
 struct hda_jack_tbl *VAR_9;
 int VAR_10 = (VAR_7 & VAR_0) >> VAR_1;







 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (!VAR_9)
  return;
 VAR_9->jack_dirty = 1;

 FUNC_1(VAR_6,
  "HDMI hot plug event: Codec=%d Pin=%d Device=%d Inactive=%d Presence_Detect=%d ELD_Valid=%d\n",
  VAR_6->addr, VAR_9->nid, VAR_10, !!(VAR_7 & VAR_3),
  !!(VAR_7 & VAR_4), !!(VAR_7 & VAR_2));


 FUNC_0(VAR_6, VAR_9->nid, 0);
}
