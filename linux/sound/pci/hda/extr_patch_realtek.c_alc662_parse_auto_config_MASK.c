
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int const*,int const*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0)
{
 static const hda_nid_t VAR_1[] = { 0x1d, 0 };
 static const hda_nid_t VAR_2[] = { 0x15, 0x1b, 0x14, 0x21 };
 static const hda_nid_t VAR_3[] = { 0x15, 0x1b, 0x14, 0 };
 const hda_nid_t *VAR_4;

 if (VAR_0->core.vendor_id == 0x10ec0272 || VAR_0->core.vendor_id == 0x10ec0663 ||
     VAR_0->core.vendor_id == 0x10ec0665 || VAR_0->core.vendor_id == 0x10ec0670 ||
     VAR_0->core.vendor_id == 0x10ec0671)
  VAR_4 = VAR_2;
 else
  VAR_4 = VAR_3;
 return FUNC_0(VAR_0, VAR_1, VAR_4);
}
