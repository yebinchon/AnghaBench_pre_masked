
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
 VAR_4 &= ~(VAR_0);
 VAR_4 |= 0x02;
 FUNC_1(VAR_2, VAR_3, VAR_1, VAR_4);
}
