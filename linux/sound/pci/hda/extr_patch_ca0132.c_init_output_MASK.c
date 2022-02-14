
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_5, hda_nid_t VAR_6, hda_nid_t VAR_7)
{
 if (VAR_6) {
  FUNC_2(VAR_5, VAR_6, VAR_4);
  if (FUNC_0(VAR_5, VAR_6) & VAR_1)
   FUNC_1(VAR_5, VAR_6, 0,
         VAR_0,
         VAR_2);
 }
 if (VAR_7 && (FUNC_0(VAR_5, VAR_7) & VAR_1))
  FUNC_1(VAR_5, VAR_7, 0,
        VAR_0, VAR_3);
}
