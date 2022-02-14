
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1,
           int VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;

 if (VAR_2 != -1) {
  VAR_4 |= 0xff;
  VAR_5 = VAR_2;
 }
 if (VAR_3 != -1) {
  VAR_4 |= 0xff00;
  VAR_5 |= VAR_3 << 8;
 }
 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5);
}
