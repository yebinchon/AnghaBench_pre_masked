
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pkt {int index; unsigned long long payload; int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,...) ;

int FUNC_2(const struct arm_spe_pkt *VAR_2, char *VAR_3,
       size_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = VAR_2->index;
 unsigned long long VAR_9 = VAR_2->payload;
 const char *VAR_10 = FUNC_0(VAR_2->type);

 switch (VAR_2->type) {
 case 136:
 case 129:
 case 132:
  return FUNC_1(VAR_3, VAR_4, "%s", VAR_10);
 case 131: {
  size_t VAR_11 = VAR_4;

  VAR_5 = 0;
  VAR_5 = FUNC_1(VAR_3, VAR_4, "EV");
  VAR_3 += VAR_5;
  VAR_11 -= VAR_5;
  if (VAR_9 & 0x1) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " EXCEPTION-GEN");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x2) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " RETIRED");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x4) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " L1D-ACCESS");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x8) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " L1D-REFILL");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x10) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " TLB-ACCESS");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x20) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " TLB-REFILL");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x40) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " NOT-TAKEN");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_9 & 0x80) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, " MISPRED");
   VAR_3 += VAR_5;
   VAR_11 -= VAR_5;
  }
  if (VAR_8 > 1) {
   if (VAR_9 & 0x100) {
    VAR_5 = FUNC_1(VAR_3, VAR_4, " LLC-ACCESS");
    VAR_3 += VAR_5;
    VAR_11 -= VAR_5;
   }
   if (VAR_9 & 0x200) {
    VAR_5 = FUNC_1(VAR_3, VAR_4, " LLC-REFILL");
    VAR_3 += VAR_5;
    VAR_11 -= VAR_5;
   }
   if (VAR_9 & 0x400) {
    VAR_5 = FUNC_1(VAR_3, VAR_4, " REMOTE-ACCESS");
    VAR_3 += VAR_5;
    VAR_11 -= VAR_5;
   }
  }
  if (VAR_5 < 0)
   return VAR_5;
  VAR_11 -= VAR_5;
  return VAR_4 - VAR_11;
 }
 case 130:
  switch (VAR_8) {
  case 0: return FUNC_1(VAR_3, VAR_4, "%s", VAR_9 & 0x1 ?
     "COND-SELECT" : "INSN-OTHER");
  case 1: {
   size_t VAR_12 = VAR_4;

   if (VAR_9 & 0x1)
    VAR_5 = FUNC_1(VAR_3, VAR_4, "ST");
   else
    VAR_5 = FUNC_1(VAR_3, VAR_4, "LD");
   VAR_3 += VAR_5;
   VAR_12 -= VAR_5;
   if (VAR_9 & 0x2) {
    if (VAR_9 & 0x4) {
     VAR_5 = FUNC_1(VAR_3, VAR_4, " AT");
     VAR_3 += VAR_5;
     VAR_12 -= VAR_5;
    }
    if (VAR_9 & 0x8) {
     VAR_5 = FUNC_1(VAR_3, VAR_4, " EXCL");
     VAR_3 += VAR_5;
     VAR_12 -= VAR_5;
    }
    if (VAR_9 & 0x10) {
     VAR_5 = FUNC_1(VAR_3, VAR_4, " AR");
     VAR_3 += VAR_5;
     VAR_12 -= VAR_5;
    }
   } else if (VAR_9 & 0x4) {
    VAR_5 = FUNC_1(VAR_3, VAR_4, " SIMD-FP");
    VAR_3 += VAR_5;
    VAR_12 -= VAR_5;
   }
   if (VAR_5 < 0)
    return VAR_5;
   VAR_12 -= VAR_5;
   return VAR_4 - VAR_12;
  }
  case 2: {
   size_t VAR_13 = VAR_4;

   VAR_5 = FUNC_1(VAR_3, VAR_4, "B");
   VAR_3 += VAR_5;
   VAR_13 -= VAR_5;
   if (VAR_9 & 0x1) {
    VAR_5 = FUNC_1(VAR_3, VAR_4, " COND");
    VAR_3 += VAR_5;
    VAR_13 -= VAR_5;
   }
   if (VAR_9 & 0x2) {
    VAR_5 = FUNC_1(VAR_3, VAR_4, " IND");
    VAR_3 += VAR_5;
    VAR_13 -= VAR_5;
   }
   if (VAR_5 < 0)
    return VAR_5;
   VAR_13 -= VAR_5;
   return VAR_4 - VAR_13;
   }
  default: return 0;
  }
 case 133:
 case 128:
  return FUNC_1(VAR_3, VAR_4, "%s %lld", VAR_10, VAR_9);
 case 137:
  switch (VAR_8) {
  case 0:
  case 1: VAR_6 = !!(VAR_2->payload & VAR_1);
   VAR_7 = (VAR_2->payload & VAR_0) >> 61;
   VAR_9 &= ~(0xffULL << 56);
   return FUNC_1(VAR_3, VAR_4, "%s 0x%llx el%d ns=%d",
            (VAR_8 == 1) ? "TGT" : "PC", VAR_9, VAR_7, VAR_6);
  case 2: return FUNC_1(VAR_3, VAR_4, "VA 0x%llx", VAR_9);
  case 3: VAR_6 = !!(VAR_2->payload & VAR_1);
   VAR_9 &= ~(0xffULL << 56);
   return FUNC_1(VAR_3, VAR_4, "PA 0x%llx ns=%d",
     VAR_9, VAR_6);
  default: return 0;
  }
 case 135:
  return FUNC_1(VAR_3, VAR_4, "%s 0x%lx el%d", VAR_10,
    (unsigned long)VAR_9, VAR_8 + 1);
 case 134: {
  size_t VAR_14 = VAR_4;

  VAR_5 = FUNC_1(VAR_3, VAR_4, "%s %d ", VAR_10,
          (unsigned short)VAR_9);
  VAR_3 += VAR_5;
  VAR_14 -= VAR_5;
  switch (VAR_8) {
  case 0: VAR_5 = FUNC_1(VAR_3, VAR_4, "TOT"); break;
  case 1: VAR_5 = FUNC_1(VAR_3, VAR_4, "ISSUE"); break;
  case 2: VAR_5 = FUNC_1(VAR_3, VAR_4, "XLAT"); break;
  default: VAR_5 = 0;
  }
  if (VAR_5 < 0)
   return VAR_5;
  VAR_14 -= VAR_5;
  return VAR_4 - VAR_14;
 }
 default:
  break;
 }

 return FUNC_1(VAR_3, VAR_4, "%s 0x%llx (%d)",
   VAR_10, VAR_9, VAR_2->index);
}
