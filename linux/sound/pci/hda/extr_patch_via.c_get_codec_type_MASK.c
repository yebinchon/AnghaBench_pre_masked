
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef enum VIA_HDA_CODEC { ____Placeholder_VIA_HDA_CODEC } VIA_HDA_CODEC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct hda_codec*,int,int ) ;

__attribute__((used)) static enum VIA_HDA_CODEC FUNC_1(struct hda_codec *VAR_17)
{
 u32 VAR_18 = VAR_17->core.vendor_id;
 u16 VAR_19 = VAR_18 >> 16;
 u16 VAR_20 = VAR_18 & 0xffff;
 enum VIA_HDA_CODEC VAR_21;


 if (VAR_19 != 0x1106)
  VAR_21 = VAR_1;
 else if (VAR_20 >= 0x1708 && VAR_20 <= 0x170b)
  VAR_21 = VAR_4;
 else if (VAR_20 >= 0xe710 && VAR_20 <= 0xe713)
  VAR_21 = VAR_9;
 else if (VAR_20 >= 0xe714 && VAR_20 <= 0xe717)
  VAR_21 = VAR_10;
 else if (VAR_20 >= 0xe720 && VAR_20 <= 0xe723) {
  VAR_21 = VAR_7;
  if (FUNC_0(VAR_17, 0x16, VAR_0) == 0x7)
   VAR_21 = VAR_5;
 } else if (VAR_20 >= 0xe724 && VAR_20 <= 0xe727)
  VAR_21 = VAR_6;
 else if ((VAR_20 & 0xfff) == 0x397
   && (VAR_20 >> 12) < 8)
  VAR_21 = VAR_8;
 else if ((VAR_20 & 0xfff) == 0x398
   && (VAR_20 >> 12) < 8)
  VAR_21 = VAR_2;
 else if ((VAR_20 & 0xfff) == 0x428
   && (VAR_20 >> 12) < 8)
  VAR_21 = VAR_12;
 else if (VAR_20 == 0x0433 || VAR_20 == 0xa721)
  VAR_21 = VAR_11;
 else if (VAR_20 == 0x0441 || VAR_20 == 0x4441)
  VAR_21 = VAR_12;
 else if (VAR_20 == 0x0438 || VAR_20 == 0x4438)
  VAR_21 = VAR_16;
 else if (VAR_20 == 0x0448)
  VAR_21 = VAR_15;
 else if (VAR_20 == 0x0440)
  VAR_21 = VAR_8;
 else if ((VAR_20 & 0xfff) == 0x446)
  VAR_21 = VAR_13;
 else if (VAR_20 == 0x4760)
  VAR_21 = VAR_3;
 else if (VAR_20 == 0x4761 || VAR_20 == 0x4762)
  VAR_21 = VAR_14;
 else
  VAR_21 = VAR_1;
 return VAR_21;
}
