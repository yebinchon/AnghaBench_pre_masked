
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int const*,int const*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0)
{
 static const hda_nid_t VAR_1[] = { 0x1d, 0 };
 static const hda_nid_t VAR_2[] = { 0x0e, 0x0f, 0x0b, 0 };
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
