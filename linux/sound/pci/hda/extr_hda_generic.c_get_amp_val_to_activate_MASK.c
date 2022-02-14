
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
 unsigned int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct hda_codec *VAR_6, hda_nid_t VAR_7,
       int VAR_8, unsigned int VAR_9, bool VAR_10)
{
 unsigned int VAR_11 = 0;

 if (VAR_9 & VAR_2) {

  if (VAR_10)
   VAR_11 = (VAR_9 & VAR_3) >> VAR_4;
 }
 if (VAR_9 & (VAR_1 | VAR_0)) {
  if (!VAR_10)
   VAR_11 |= VAR_5;
 }
 return VAR_11;
}
