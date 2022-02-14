
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned char FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 unsigned int VAR_4;
 unsigned char VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 VAR_5 = (unsigned char) FUNC_0(VAR_4);
 VAR_5 = (VAR_5 << 4) | FUNC_2(VAR_4);
 if (FUNC_1(VAR_4) == VAR_1
     && (VAR_5 == 0xf0 || VAR_5 == 0xff)) {
  VAR_4 = VAR_4 & (~(VAR_0 << 30));
  FUNC_4(VAR_2, VAR_3, VAR_4);
 }

 return;
}
