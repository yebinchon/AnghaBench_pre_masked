
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;
struct dsp_image_seg {scalar_t__ chip_addr; unsigned int count; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int const,int const) ;
 int FUNC_1 (struct hda_codec*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2,
   const struct dsp_image_seg *VAR_3)
{
 int VAR_4;
 const u32 *VAR_5;
 unsigned int VAR_6;

 if (VAR_3 == ((void*)0) || VAR_3->chip_addr != VAR_1) {
  FUNC_1(VAR_2, "hci_write invalid params\n");
  return -VAR_0;
 }

 VAR_6 = VAR_3->count;
 VAR_5 = (u32 *)(VAR_3->data);
 while (VAR_6 >= 2) {
  VAR_4 = FUNC_0(VAR_2, VAR_5[0], VAR_5[1]);
  if (VAR_4 < 0) {
   FUNC_1(VAR_2, "hci_write chipio failed\n");
   return VAR_4;
  }
  VAR_6 -= 2;
  VAR_5 += 2;
 }
 return 0;
}
