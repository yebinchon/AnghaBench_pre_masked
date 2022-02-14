
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4, int VAR_5)
{
 if (FUNC_1(FUNC_0(VAR_3, VAR_4)) != VAR_2)
  return;
 if (FUNC_3(VAR_3, VAR_4) & VAR_0)
  FUNC_2(VAR_3, VAR_4, 0, VAR_1,
        VAR_5 ? 2 : 0);
}
