
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {unsigned long long payload; int type; int count; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,...) ;

int FUNC_2(const struct intel_pt_pkt *VAR_3, char *VAR_4,
        size_t VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 unsigned long long VAR_9 = VAR_3->payload;
 const char *VAR_10 = FUNC_0(VAR_3->type);

 switch (VAR_3->type) {
 case 159:
 case 143:
 case 141:
 case 140:
 case 130:
 case 144:
  return FUNC_1(VAR_4, VAR_5, "%s", VAR_10);
 case 131: {
  size_t VAR_11 = VAR_5;

  VAR_6 = FUNC_1(VAR_4, VAR_11, "%s ", VAR_10);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_4 += VAR_6;
  VAR_11 -= VAR_6;
  for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++) {
   if (VAR_9 & VAR_0)
    VAR_6 = FUNC_1(VAR_4, VAR_11, "T");
   else
    VAR_6 = FUNC_1(VAR_4, VAR_11, "N");
   if (VAR_6 < 0)
    return VAR_6;
   VAR_4 += VAR_6;
   VAR_11 -= VAR_6;
   VAR_9 <<= 1;
  }
  VAR_6 = FUNC_1(VAR_4, VAR_11, " (%d)", VAR_3->count);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_11 -= VAR_6;
  return VAR_5 - VAR_11;
 }
 case 134:
 case 133:
 case 135:
 case 150:
  if (!(VAR_3->count))
   return FUNC_1(VAR_4, VAR_5, "%s no ip", VAR_10);
  VAR_2;
 case 153:
 case 128:
 case 146:
 case 149:
 case 154:
 case 129:
  return FUNC_1(VAR_4, VAR_5, "%s 0x%llx", VAR_10, VAR_9);
 case 132:
  return FUNC_1(VAR_4, VAR_5, "%s CTC 0x%x FC 0x%x", VAR_10,
    (unsigned)VAR_9, VAR_3->count);
 case 148:
  return FUNC_1(VAR_4, VAR_5, "%s %lld", VAR_10, VAR_9);
 case 147:
  return FUNC_1(VAR_4, VAR_5, "%s TXAbort:%u InTX:%u",
    VAR_10, (unsigned)(VAR_9 >> 1) & 1,
    (unsigned)VAR_9 & 1);
 case 142:
  VAR_8 = VAR_3->payload & VAR_1 ? 1 : 0;
  VAR_9 &= ~VAR_1;
  VAR_6 = FUNC_1(VAR_4, VAR_5, "%s 0x%llx (NR=%d)",
          VAR_10, VAR_9, VAR_8);
  return VAR_6;
 case 139:
  return FUNC_1(VAR_4, VAR_5, "%s 0x%llx IP:0", VAR_10, VAR_9);
 case 138:
  return FUNC_1(VAR_4, VAR_5, "%s 0x%llx IP:1", VAR_10, VAR_9);
 case 157:
 case 152:
  return FUNC_1(VAR_4, VAR_5, "%s IP:0", VAR_10);
 case 156:
 case 151:
  return FUNC_1(VAR_4, VAR_5, "%s IP:1", VAR_10);
 case 145:
  return FUNC_1(VAR_4, VAR_5, "%s 0x%llx Hints 0x%x Extensions 0x%x",
    VAR_10, VAR_9, (unsigned int)(VAR_9 & 0xff),
    (unsigned int)((VAR_9 >> 32) & 0x3));
 case 137:
  return FUNC_1(VAR_4, VAR_5, "%s 0x%llx HW:%u CState:%u Sub-CState:%u",
    VAR_10, VAR_9, !!(VAR_9 & 0x80),
    (unsigned int)((VAR_9 >> 12) & 0xf),
    (unsigned int)((VAR_9 >> 8) & 0xf));
 case 136:
  return FUNC_1(VAR_4, VAR_5, "%s 0x%llx Last CState:%u Deepest CState:%u Wake Reason 0x%x",
    VAR_10, VAR_9,
    (unsigned int)((VAR_9 >> 4) & 0xf),
    (unsigned int)(VAR_9 & 0xf),
    (unsigned int)((VAR_9 >> 8) & 0xf));
 case 158:
  return FUNC_1(VAR_4, VAR_5, "%s SZ %s-byte Type 0x%llx",
    VAR_10, VAR_3->count ? "4" : "8", VAR_9);
 case 155:
  return FUNC_1(VAR_4, VAR_5, "%s ID 0x%02x Value 0x%llx",
    VAR_10, VAR_3->count, VAR_9);
 default:
  break;
 }
 return FUNC_1(VAR_4, VAR_5, "%s 0x%llx (%d)",
   VAR_10, VAR_9, VAR_3->count);
}
