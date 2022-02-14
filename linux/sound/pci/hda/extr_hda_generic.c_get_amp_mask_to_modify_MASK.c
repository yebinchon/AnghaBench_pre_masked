
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int,int,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_6,
        hda_nid_t VAR_7, int VAR_8, int VAR_9,
        unsigned int VAR_10)
{
 unsigned int VAR_11 = 0xff;

 if (VAR_10 & (VAR_1 | VAR_0)) {
  if (FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_4))
   VAR_11 &= ~0x80;
 }
 if (VAR_10 & VAR_2) {
  if (FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5) ||
      FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_3))
   VAR_11 &= ~0x7f;
 }
 return VAR_11;
}
