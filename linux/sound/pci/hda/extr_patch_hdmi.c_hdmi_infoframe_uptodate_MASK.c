
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_3, hda_nid_t VAR_4,
        u8 *VAR_5, int VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_3, VAR_4, 0, VAR_2, 0)
           != VAR_0)
  return 0;

 FUNC_0(VAR_3, VAR_4, 0x0, 0x0);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, 0,
      VAR_1, 0);
  if (VAR_7 != VAR_5[VAR_8])
   return 0;
 }

 return 1;
}
