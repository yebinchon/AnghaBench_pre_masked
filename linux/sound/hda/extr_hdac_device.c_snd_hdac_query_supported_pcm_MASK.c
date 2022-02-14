
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hdac_device {int dev; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int alsa_bits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,char*,int ,unsigned int,int,...) ;
 unsigned int FUNC_1 (struct hdac_device*,int ) ;
 unsigned int FUNC_2 (struct hdac_device*,int ) ;
 unsigned int FUNC_3 (struct hdac_device*,int ) ;
 TYPE_1__* VAR_17 ;

int FUNC_4(struct hdac_device *VAR_18, hda_nid_t VAR_19,
     u32 *VAR_20, u64 *VAR_21, unsigned int *VAR_22)
{
 unsigned int VAR_23, VAR_24, VAR_25;

 VAR_25 = FUNC_1(VAR_18, VAR_19);
 VAR_24 = FUNC_2(VAR_18, VAR_19);

 if (VAR_20) {
  u32 VAR_26 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++) {
   if (VAR_24 & (1 << VAR_23))
    VAR_26 |= VAR_17[VAR_23].alsa_bits;
  }
  if (VAR_26 == 0) {
   FUNC_0(&VAR_18->dev,
    "rates == 0 (nid=0x%x, val=0x%x, ovrd=%i)\n",
    VAR_19, VAR_24,
    (VAR_25 & VAR_10) ? 1 : 0);
   return -VAR_11;
  }
  *VAR_20 = VAR_26;
 }

 if (VAR_21 || VAR_22) {
  u64 VAR_27 = 0;
  unsigned int VAR_28, VAR_29;

  VAR_28 = FUNC_3(VAR_18, VAR_19);
  if (!VAR_28)
   return -VAR_11;

  VAR_29 = 0;
  if (VAR_28 & VAR_3) {
   if (VAR_24 & VAR_8) {
    VAR_27 |= VAR_16;
    VAR_29 = 8;
   }
   if (VAR_24 & VAR_4) {
    VAR_27 |= VAR_14;
    VAR_29 = 16;
   }
   if (VAR_25 & VAR_9) {
    if (VAR_24 & VAR_7)
     VAR_27 |= VAR_13;
    if (VAR_24 & (VAR_5|VAR_6))
     VAR_27 |= VAR_15;
    if (VAR_24 & VAR_6)
     VAR_29 = 24;
    else if (VAR_24 & VAR_5)
     VAR_29 = 20;
   } else if (VAR_24 & (VAR_5|VAR_6|
       VAR_7)) {
    VAR_27 |= VAR_15;
    if (VAR_24 & VAR_7)
     VAR_29 = 32;
    else if (VAR_24 & VAR_6)
     VAR_29 = 24;
    else if (VAR_24 & VAR_5)
     VAR_29 = 20;
   }
  }







  if (VAR_28 == VAR_1) {




   VAR_27 |= VAR_16;
   VAR_29 = 8;
  }
  if (VAR_27 == 0) {
   FUNC_0(&VAR_18->dev,
    "formats == 0 (nid=0x%x, val=0x%x, ovrd=%i, streams=0x%x)\n",
    VAR_19, VAR_24,
    (VAR_25 & VAR_10) ? 1 : 0,
    VAR_28);
   return -VAR_11;
  }
  if (VAR_21)
   *VAR_21 = VAR_27;
  if (VAR_22)
   *VAR_22 = VAR_29;
 }

 return 0;
}
