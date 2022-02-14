
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int) ;

__attribute__((used)) static u32 FUNC_1(struct hda_codec *VAR_2, hda_nid_t VAR_3, int VAR_4,
        unsigned int VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

 VAR_6 = (VAR_6 & VAR_0) >> VAR_1;
 if (VAR_5 < VAR_6)
  VAR_6 -= VAR_5;
 return VAR_6;
}
