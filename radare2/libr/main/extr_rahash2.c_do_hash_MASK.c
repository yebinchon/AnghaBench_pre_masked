
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_9__ {int * buf; } ;
struct TYPE_8__ {int len; int * buf; scalar_t__ prefix; } ;
struct TYPE_7__ {int desc; } ;
typedef TYPE_1__ RIO ;
typedef int RHash ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*,int,int*) ;
 int FUNC_2 (int *,int,int *,int,int,int,int) ;
 int FUNC_3 (int *,int,int,char,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 long long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*,...) ;
 int VAR_6 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,scalar_t__,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (char const*) ;
 int * FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*,int,int *,int) ;
 TYPE_2__ VAR_7 ;
 long long VAR_8 ;

__attribute__((used)) static int FUNC_17(const char *VAR_9, const char *VAR_10, RIO *VAR_11, int VAR_12, int VAR_13, int VAR_14, const ut8 *VAR_15) {
 ut64 VAR_16, VAR_17, VAR_18 = FUNC_12 (VAR_10);
 RHash *VAR_19;
 ut8 *VAR_20;
 int VAR_21 = 0;
 ut64 VAR_22;
 bool VAR_23 = 1;
 if (VAR_18 == VAR_1) {
  FUNC_4 ("rahash2: Invalid hashing algorithm specified\n");
  return 1;
 }
 VAR_17 = FUNC_15 (VAR_11->desc);
 if (VAR_17 < 1) {
  FUNC_4 ("rahash2: Invalid file size\n");
  return 1;
 }
 if (VAR_12 < 0) {
  VAR_12 = VAR_17 / -VAR_12;
 }
 if (VAR_12 == 0 || VAR_12 > VAR_17) {
  VAR_12 = VAR_17;
 }
 if (VAR_8 == 0LL) {
  VAR_8 = VAR_17;
 }
 if (VAR_3 > VAR_8) {
  FUNC_4 ("rahash2: Invalid -f -t range\n");
  return 1;
 }
 if (VAR_17 == -1LL) {
  FUNC_4 ("rahash2: Unknown file size\n");
  return 1;
 }
 VAR_20 = FUNC_0 (1, VAR_12 + 1);
 if (!VAR_20) {
  return 1;
 }
 VAR_19 = FUNC_13 (1, VAR_18);

 if (VAR_13 == 'j') {
  FUNC_6 ("[");
 }
 if (VAR_4) {
  for (VAR_22 = 1; VAR_22 < VAR_0; VAR_22 <<= 1) {
   if (VAR_18 & VAR_22) {
    ut64 VAR_24 = VAR_22 & VAR_18;
    int VAR_25 = FUNC_14 (VAR_24);
    FUNC_7 (VAR_19, VAR_22);
    if (VAR_7.buf && VAR_7.prefix) {
     FUNC_2 (VAR_19, VAR_24, VAR_7.buf, VAR_7.len, VAR_13, 0, VAR_14);
    }
    for (VAR_16 = VAR_3; VAR_16 < VAR_8; VAR_16 += VAR_12) {
     int VAR_26 = ((VAR_16 + VAR_12) > VAR_8)? (VAR_8 - VAR_16): VAR_12;
     FUNC_16 (VAR_11, VAR_16, VAR_20, VAR_26);
     FUNC_2 (VAR_19, VAR_24, VAR_20, VAR_26, VAR_13, 0, VAR_14);
    }
    if (VAR_7.buf && !VAR_7.prefix) {
     FUNC_2 (VAR_19, VAR_24, VAR_7.buf, VAR_7.len, VAR_13, 0, VAR_14);
    }
    FUNC_8 (VAR_19, VAR_22);
    if (VAR_5 > 0) {
     FUNC_9 (VAR_19, VAR_22, VAR_5, VAR_2);
    }
    if (!*FUNC_11 (VAR_22)) {
     continue;
    }
    if (VAR_13 == 'j') {
     if (VAR_23) {
      VAR_23 = 0;
     } else {
      FUNC_6 (",");
     }
    }
    if (!VAR_6 && VAR_13 != 'j') {
     FUNC_6 ("%s: ", VAR_9);
    }
    FUNC_3 (VAR_19, VAR_22, VAR_25, VAR_6? 'n': VAR_13, VAR_14);
    if (VAR_6 == 1) {
     FUNC_6 (" %s\n", VAR_9);
    } else {
     if (VAR_6 && !VAR_13) {
      FUNC_6 ("\n");
     }
    }
   }
  }
  if (VAR_2) {
   FUNC_5 (VAR_2->buf);
  }
 } else {

  if (VAR_7.buf) {
   FUNC_4 ("Warning: Seed ignored on per-block hashing.\n");
  }
  for (VAR_22 = 1; VAR_22 < VAR_0; VAR_22 <<= 1) {
   ut64 VAR_27, VAR_28, VAR_29, VAR_30;
   if (VAR_18 & VAR_22) {
    ut64 VAR_31 = VAR_22 & VAR_18;
    VAR_29 = VAR_3;
    VAR_30 = VAR_8;
    VAR_27 = VAR_3;
    VAR_28 = VAR_8;
    for (VAR_16 = VAR_27; VAR_16 < VAR_28; VAR_16 += VAR_12) {
     int VAR_32 = (VAR_16 + VAR_12 < VAR_17)? VAR_12: (VAR_17 - VAR_16);
     FUNC_16 (VAR_11, VAR_16, VAR_20, VAR_12);
     VAR_3 = VAR_16;
     VAR_8 = VAR_16 + VAR_12;
     if (VAR_8 > VAR_17) {
      VAR_8 = VAR_17;
     }
     FUNC_2 (VAR_19, VAR_31, VAR_20, VAR_32, VAR_13, 1, VAR_14);
    }
    FUNC_2 (VAR_19, VAR_31, ((void*)0), 0, VAR_13, 1, VAR_14);
    VAR_3 = VAR_29;
    VAR_8 = VAR_30;
   }
  }
 }
 if (VAR_13 == 'j') {
  FUNC_6 ("]\n");
 }

 FUNC_1 (VAR_19, VAR_15, FUNC_14 (VAR_18), &VAR_21);
 FUNC_10 (VAR_19);
 FUNC_5 (VAR_20);
 return VAR_21;
}
