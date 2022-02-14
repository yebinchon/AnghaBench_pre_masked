
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct uac_format_type_i_ext_descriptor {int bBitResolution; int bSubslotSize; } ;
struct uac_format_type_i_discrete_descriptor {int bBitResolution; int bSubframeSize; } ;
struct uac3_as_header_descriptor {int bBitResolution; int bSubslotSize; } ;
struct snd_usb_audio {scalar_t__ usb_id; } ;
struct audioformat {int protocol; int dsd_raw; int fmt_bits; int altsetting; int iface; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 scalar_t__ FUNC_0 (int,int) ;
 unsigned long long FUNC_1 (struct snd_usb_audio*,struct audioformat*,int) ;
 int FUNC_2 (struct snd_usb_audio*,struct audioformat*) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int ,int ,...) ;

__attribute__((used)) static u64 FUNC_4(struct snd_usb_audio *VAR_19,
         struct audioformat *VAR_20,
         u64 VAR_21, void *VAR_22)
{
 int VAR_23, VAR_24;
 u64 VAR_25 = 0;

 switch (VAR_20->protocol) {
 case 130:
 default: {
  struct uac_format_type_i_discrete_descriptor *VAR_26 = VAR_22;
  VAR_23 = VAR_26->bBitResolution;
  VAR_24 = VAR_26->bSubframeSize;
  VAR_21 = 1ULL << VAR_21;
  break;
 }

 case 129: {
  struct uac_format_type_i_ext_descriptor *VAR_27 = VAR_22;
  VAR_23 = VAR_27->bBitResolution;
  VAR_24 = VAR_27->bSubslotSize;

  if (VAR_21 & VAR_11) {
   VAR_25 |= VAR_9;

   VAR_20->dsd_raw = 1;
  }

  VAR_21 <<= 1;
  break;
 }
 case 128: {
  struct uac3_as_header_descriptor *VAR_28 = VAR_22;

  VAR_23 = VAR_28->bBitResolution;
  VAR_24 = VAR_28->bSubslotSize;

  if (VAR_21 & VAR_12)
   VAR_25 |= VAR_9;

  VAR_21 <<= 1;
  break;
 }
 }

 VAR_20->fmt_bits = VAR_23;

 if ((VAR_25 == 0) &&
     (VAR_21 == 0 || VAR_21 == (1 << VAR_18))) {

  FUNC_3(VAR_19, "%u:%d : format type 0 is detected, processed as PCM\n",
   VAR_20->iface, VAR_20->altsetting);
  VAR_21 = 1 << VAR_16;
 }
 if (VAR_21 & (1 << VAR_16)) {
  if (((VAR_19->usb_id == FUNC_0(0x0582, 0x0016)) ||

       (VAR_19->usb_id == FUNC_0(0x0582, 0x000c))) &&

      VAR_23 == 24 && VAR_24 == 2)
   VAR_24 = 3;
  else if (VAR_23 > VAR_24 * 8) {
   FUNC_3(VAR_19, "%u:%d : sample bitwidth %d in over sample bytes %d\n",
     VAR_20->iface, VAR_20->altsetting,
     VAR_23, VAR_24);
  }

  switch (VAR_24) {
  case 1:
   VAR_25 |= VAR_8;
   break;
  case 2:
   if (FUNC_2(VAR_19, VAR_20))
    VAR_25 |= VAR_3;
   else
    VAR_25 |= VAR_4;
   break;
  case 3:
   if (FUNC_2(VAR_19, VAR_20))
    VAR_25 |= VAR_5;
   else
    VAR_25 |= VAR_6;
   break;
  case 4:
   VAR_25 |= VAR_7;
   break;
  default:
   FUNC_3(VAR_19,
     "%u:%d : unsupported sample bitwidth %d in %d bytes\n",
     VAR_20->iface, VAR_20->altsetting,
     VAR_23, VAR_24);
   break;
  }
 }
 if (VAR_21 & (1 << VAR_17)) {


  if (VAR_19->usb_id == FUNC_0(0x04fa, 0x4201))
   VAR_25 |= VAR_8;
  else
   VAR_25 |= VAR_10;
 }
 if (VAR_21 & (1 << VAR_14)) {
  VAR_25 |= VAR_1;
 }
 if (VAR_21 & (1 << VAR_13)) {
  VAR_25 |= VAR_0;
 }
 if (VAR_21 & (1 << VAR_15)) {
  VAR_25 |= VAR_2;
 }
 if (VAR_21 & ~0x3f) {
  FUNC_3(VAR_19,
    "%u:%d : unsupported format bits %#llx\n",
    VAR_20->iface, VAR_20->altsetting, VAR_21);
 }

 VAR_25 |= FUNC_1(VAR_19, VAR_20, VAR_24);

 return VAR_25;
}
