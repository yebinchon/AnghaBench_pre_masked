
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef size_t ut32 ;
struct TYPE_2__ {int type; int ins; } ;
typedef int RStrBuf ;


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
 int * VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_0 (int *,char*,int const,int const) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2 (const ut8 *VAR_12, int VAR_13, RStrBuf *VAR_14) {
 int VAR_15 = 1;
 if (VAR_12[0] == 0xfe) {
  if (VAR_13 < 2) {
   return 0;
  }
  if (VAR_11[VAR_12[1]].type & VAR_8) {
   if (VAR_11[VAR_12[1]].type & VAR_7) {
    if (VAR_13 < 3) {
     return 0;
    }
    VAR_15 = 6 + (VAR_12[2] & 0x1);
   }
   if (VAR_11[VAR_12[1]].type & VAR_5) {
    if (VAR_13 < 3) {
     return 0;
    }
    VAR_15 = 5 + (VAR_12[2] & 0x1);
   }
   if (VAR_11[VAR_12[1]].type & VAR_3) {
    if (VAR_13 < 3) {
     return 0;
    }
    VAR_15 = 4 + (VAR_12[1] & 0x1);
   }
   if (VAR_11[VAR_12[1]].type & VAR_6) {
    VAR_15 = 6;
   }
   if (VAR_11[VAR_12[1]].type & VAR_4) {
    VAR_15 = 5;
   }
   if (VAR_11[VAR_12[1]].type & VAR_2) {
    VAR_15 = 4;
   }
   if (VAR_11[VAR_12[1]].type & VAR_0) {
    VAR_15 = 3;
   }
   if (VAR_15 <= VAR_13) {
    const ut32 VAR_16 = ((VAR_12[1] & 0x70) >> 4) ^ 0x4;
    FUNC_1 (VAR_14, VAR_10[VAR_16]);
    if ((VAR_11[VAR_12[1]].type & (VAR_1 | VAR_9)) == (VAR_1 | VAR_9) &&
     VAR_12[2] > 0x19 && VAR_12[3] > 0x19) {
     FUNC_0(VAR_14, " rb%02x, rb%02x", VAR_12[2] - 0x1a, VAR_12[3] - 0x1a);
    }
   } else {
    VAR_15 = 0;
   }
   return VAR_15;
  }
 }
 if (VAR_11[VAR_12[0]].type & VAR_7) {
  if (VAR_13 < 2) {
   return 0;
  }
  VAR_15 = 5 + (VAR_12[1] & 0x1);
 }
 if (VAR_11[VAR_12[0]].type & VAR_5) {
  if (VAR_13 < 2) {
   return 0;
  }
  VAR_15 = 4 + (VAR_12[1] & 0x1);
 }
 if (VAR_11[VAR_12[0]].type & VAR_3) {
  if (VAR_13 < 2) {
   return 0;
  }
  VAR_15 = 3 + (VAR_12[1] & 0x1);
 }
 if (VAR_11[VAR_12[0]].type & VAR_6) {
  VAR_15 = 5;
 }
 if (VAR_11[VAR_12[0]].type & VAR_4) {
  VAR_15 = 4;
 }
 if (VAR_11[VAR_12[0]].type & VAR_2) {
  VAR_15 = 3;
 }
 if (VAR_11[VAR_12[0]].type & VAR_0) {
  VAR_15 = 2;
 }
 if (VAR_15 <= VAR_13) {
  FUNC_1 (VAR_14, VAR_11[VAR_12[0]].ins);
  if ((VAR_11[VAR_12[0]].type & (VAR_1 | VAR_9)) == (VAR_1 | VAR_9) &&
   VAR_12[1] > 0x19 && VAR_12[2] > 0x19) {
   FUNC_0(VAR_14, " rb%02x, rb%02x", VAR_12[1] - 0x1a, VAR_12[2] - 0x1a);
  }
 } else {
  VAR_15 = 0;
 }
 return VAR_15;
}
