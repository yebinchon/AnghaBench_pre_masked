
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_spdif_out {int ctls; } ;
struct hda_codec {scalar_t__ const* slave_dig_outs; scalar_t__ spdif_status_reset; } ;
typedef scalar_t__ const hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*,scalar_t__ const,int,int) ;
 unsigned int FUNC_2 (struct hda_codec*,scalar_t__ const,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,scalar_t__ const,unsigned int,int ,unsigned int) ;
 struct hda_spdif_out* FUNC_4 (struct hda_codec*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_2, hda_nid_t VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 struct hda_spdif_out *VAR_6;
 unsigned int VAR_7;
 bool VAR_8;

 VAR_6 = FUNC_4(VAR_2, VAR_3);



 if (FUNC_0(VAR_6 == ((void*)0)))
  return;

 VAR_7 = FUNC_2(VAR_2, VAR_3, 0,
          VAR_1, 0);
 VAR_8 = VAR_2->spdif_status_reset &&
  (VAR_6->ctls & VAR_0) &&
  VAR_7 != VAR_5;



 if (VAR_8)
  FUNC_1(VAR_2, VAR_3,
        VAR_6->ctls & ~VAR_0 & 0xff,
        -1);
 FUNC_3(VAR_2, VAR_3, VAR_4, 0, VAR_5);
 if (VAR_2->slave_dig_outs) {
  const hda_nid_t *VAR_9;
  for (VAR_9 = VAR_2->slave_dig_outs; *VAR_9; VAR_9++)
   FUNC_3(VAR_2, *VAR_9, VAR_4, 0,
         VAR_5);
 }

 if (VAR_8)
  FUNC_1(VAR_2, VAR_3,
        VAR_6->ctls & 0xff, -1);
}
