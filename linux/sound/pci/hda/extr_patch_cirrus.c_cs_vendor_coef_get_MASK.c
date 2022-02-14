
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {int vendor_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct hda_codec *VAR_2, unsigned int VAR_3)
{
 struct cs_spec *VAR_4 = VAR_2->spec;
 FUNC_1(VAR_2, VAR_4->vendor_nid, 0,
       VAR_1, VAR_3);
 return FUNC_0(VAR_2, VAR_4->vendor_nid, 0,
      VAR_0, 0);
}
