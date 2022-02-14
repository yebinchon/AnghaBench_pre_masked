
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_5, hda_nid_t VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_5, VAR_6);




 VAR_7 = (VAR_7 & (~VAR_1)) |
  (VAR_4 << VAR_2);
 VAR_7 = (VAR_7 & (~(VAR_0 | VAR_3))) |
  0x1f;
 FUNC_1(VAR_5, VAR_6, VAR_7);
}
