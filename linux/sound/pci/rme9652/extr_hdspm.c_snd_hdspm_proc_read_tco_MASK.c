
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct snd_info_entry {struct hdspm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdspm {unsigned int control_register; int io_type; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;



 int FUNC_0 (unsigned long long,unsigned int) ;
 void* FUNC_1 (struct hdspm*,scalar_t__) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct snd_info_entry *VAR_11,
     struct snd_info_buffer *VAR_12)
{
 struct hdspm *VAR_13 = VAR_11->private_data;
 unsigned int VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;
 u64 VAR_23 = 0;
 u32 VAR_24;

 FUNC_2(VAR_12, "--- TCO ---\n");

 VAR_14 = FUNC_1(VAR_13, VAR_9);
 VAR_15 = VAR_13->control_register;


 if (VAR_14 & VAR_10) {
  FUNC_2(VAR_12, "TCO module detected.\n");
  VAR_16 = FUNC_1(VAR_13, VAR_3+4);
  if (VAR_16 & VAR_4) {
   FUNC_2(VAR_12, "  LTC valid, ");
   switch (VAR_16 & (132 |
      131)) {
   case 0:
    FUNC_2(VAR_12, "24 fps, ");
    break;
   case 132:
    FUNC_2(VAR_12, "25 fps, ");
    break;
   case 131:
    FUNC_2(VAR_12, "29.97 fps, ");
    break;
   default:
    FUNC_2(VAR_12, "30 fps, ");
    break;
   }
   if (VAR_16 & VAR_8) {
    FUNC_2(VAR_12, "drop frame\n");
   } else {
    FUNC_2(VAR_12, "full frame\n");
   }
  } else {
   FUNC_2(VAR_12, "  no LTC\n");
  }
  if (VAR_16 & VAR_6) {
   FUNC_2(VAR_12, "  Video: NTSC\n");
  } else if (VAR_16 & VAR_7) {
   FUNC_2(VAR_12, "  Video: PAL\n");
  } else {
   FUNC_2(VAR_12, "  No video\n");
  }
  if (VAR_16 & VAR_5) {
   FUNC_2(VAR_12, "  Sync: lock\n");
  } else {
   FUNC_2(VAR_12, "  Sync: no lock\n");
  }

  switch (VAR_13->io_type) {
  case 130:
  case 134:
   VAR_23 = 110069313433624ULL;
   break;
  case 128:
  case 133:
   VAR_23 = 104857600000000ULL;
   break;
  case 129:
   break;
  }

  VAR_22 = FUNC_1(VAR_13, VAR_2);
  FUNC_2(VAR_12, "    period: %u\n", VAR_22);



  VAR_24 = FUNC_0(VAR_23, VAR_22);

  if (VAR_15 & VAR_1) {
   VAR_24 *= 4;
  } else if (VAR_15 & VAR_0) {
   VAR_24 *= 2;
  }

  FUNC_2(VAR_12, "  Frequency: %u Hz\n",
    (unsigned int) VAR_24);

  VAR_17 = FUNC_1(VAR_13, VAR_3);
  VAR_18 = VAR_17 & 0xF;
  VAR_17 >>= 4;
  VAR_18 += (VAR_17 & 0x3) * 10;
  VAR_17 >>= 4;
  VAR_19 = VAR_17 & 0xF;
  VAR_17 >>= 4;
  VAR_19 += (VAR_17 & 0x7) * 10;
  VAR_17 >>= 4;
  VAR_20 = VAR_17 & 0xF;
  VAR_17 >>= 4;
  VAR_20 += (VAR_17 & 0x7) * 10;
  VAR_17 >>= 4;
  VAR_21 = VAR_17 & 0xF;
  VAR_17 >>= 4;
  VAR_21 += (VAR_17 & 0x3) * 10;
  FUNC_2(VAR_12,
   "  LTC In: %02d:%02d:%02d:%02d\n",
   VAR_21, VAR_20, VAR_19, VAR_18);

 } else {
  FUNC_2(VAR_12, "No TCO module detected.\n");
 }
}
