
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {scalar_t__ vendor_nid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4)
{
 struct cs_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6;


 if (VAR_5->vendor_nid == VAR_0) {
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if (FUNC_2(VAR_4, VAR_2))
   VAR_6 |= 1 << 4;
  if (FUNC_2(VAR_4, VAR_1))
   VAR_6 |= 1 << 3;




  FUNC_1(VAR_4, VAR_3, VAR_6);
 }
}
