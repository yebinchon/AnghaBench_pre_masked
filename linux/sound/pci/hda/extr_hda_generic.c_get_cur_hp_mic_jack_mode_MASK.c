
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
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;
 unsigned int FUNC_4 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 int VAR_6 = FUNC_2(VAR_4, VAR_5);
 int VAR_7 = FUNC_1(VAR_4, VAR_5);
 unsigned int VAR_8 = FUNC_4(VAR_4, VAR_5);
 int VAR_9 = 0;

 if (VAR_8 & VAR_3) {
  if (VAR_6 > 1 && VAR_8 == VAR_1)
   VAR_9 = 1;
 } else if (VAR_8 & VAR_2) {
  VAR_9 = VAR_6;
  if (VAR_7 > 1) {
   unsigned int VAR_10 = FUNC_3(VAR_4, VAR_5);
   VAR_8 &= VAR_0;
   VAR_9 += FUNC_0(VAR_10, VAR_8);
  }
 }
 return VAR_9;
}
