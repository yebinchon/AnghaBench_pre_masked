
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char ut8 ;
typedef int ut64 ;
typedef scalar_t__ st64 ;
struct TYPE_2__ {int len; char* buf; scalar_t__ prefix; } ;
typedef int RIODesc ;
typedef int RIO ;
typedef int RHash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,int,int*) ;
 int FUNC_3 (char*,char const*,int *,int,int,int,char*) ;
 int FUNC_4 (int *,int,char const*,int,int,int,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*,int,char*,int,char*,int,int ) ;
 int FUNC_8 (char const*,int,char*,char*,int,int ) ;
 int FUNC_9 (char*,...) ;
 size_t FUNC_10 (void*,int,int,int ) ;
 int FUNC_11 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int) ;
 int VAR_6 ;
 char* FUNC_13 (int) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (int,char**,char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char const*) ;
 int * FUNC_20 (int,int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (char const*,char*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 () ;
 int * FUNC_26 (int *,char*,int ,int ) ;
 int FUNC_27 (int *,int ,char*,int) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (int *,void*) ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_30 (int*) ;
 char* FUNC_31 (char*,int) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*,char const*,char*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_34 (void*,int) ;
 int VAR_11 ;
 int FUNC_35 (char const*,char*) ;
 int FUNC_36 (char*,char*) ;
 int FUNC_37 (char const*) ;
 int FUNC_38 (char*,char*,int) ;
 int VAR_12 ;

int FUNC_39(int VAR_13, char **VAR_14) {
 ut64 VAR_15;
 int VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 const char *VAR_22 = "sha256";
 const char *VAR_23 = ((void*)0);
 const char *VAR_24 = ((void*)0);
 const char *VAR_25 = ((void*)0);
 char *VAR_26 = ((void*)0);
 ut8 *VAR_27 = ((void*)0);
 int VAR_28 = -1;
 char *VAR_29 = ((void*)0);
 const char *VAR_30 = ((void*)0);
 const char *VAR_31 = ((void*)0);
 ut8 *VAR_32 = ((void*)0);
 int VAR_33 = -1;
 int VAR_34 = 0;
 size_t VAR_35 = 0;
 ut64 VAR_36;
 RHash *VAR_37;
 RIO *VAR_38;

 while ((VAR_17 = FUNC_17 (VAR_13, VAR_14, "p:jD:rveE:a:i:I:S:s:x:b:nBhf:t:kLqc:")) != -1) {
  switch (VAR_17) {
  case 'q': VAR_7++; break;
  case 'i':
   VAR_6 = FUNC_1 (VAR_8);
   if (VAR_6 < 0) {
    FUNC_9 ("error: -i argument must be positive\n");
    return 1;
   }
   break;
  case 'j': VAR_18 = 'j'; break;
  case 'S': VAR_23 = VAR_8; break;
  case 'I': VAR_29 = VAR_8; break;
  case 'n': VAR_20 = 1; break;
  case 'D': VAR_24 = VAR_8; break;
  case 'E': VAR_25 = VAR_8; break;
  case 'L': FUNC_0 (); return 0;
  case 'e': VAR_21 = 1; break;
  case 'r': VAR_18 = 1; break;
  case 'k': VAR_18 = 2; break;
  case 'p': VAR_31 = VAR_8; break;
  case 'a': VAR_22 = VAR_8; break;
  case 'B': VAR_5 = 0; break;
  case 'b': VAR_19 = (int) FUNC_29 (((void*)0), VAR_8); break;
  case 'f': VAR_4 = FUNC_29 (((void*)0), VAR_8); break;
  case 't': VAR_12 = 1 + FUNC_29 (((void*)0), VAR_8); break;
  case 'v': return FUNC_28 ("rahash2");
  case 'h': return FUNC_6 (0);
  case 's': FUNC_34 (VAR_8, 0); break;
  case 'x': FUNC_34 (VAR_8, 1); break;
  case 'c': VAR_30 = VAR_8; break;
  default: return FUNC_6 (0);
  }
 }
 if (VAR_25 && VAR_24) {
  FUNC_9 ("rahash2: Option -E and -D are incompatible with each other.\n");
  return 1;
 }
 if (VAR_30) {
  int VAR_39;
  if (VAR_19 && !VAR_5) {
   FUNC_9 ("rahash2: Option -c incompatible with -b and -B options.\n");
   return 1;
  }
  bool VAR_40 = 0;
  if (VAR_25) {
   VAR_40 = !FUNC_35 (VAR_25, "base64") || !FUNC_35 (VAR_25, "base91");
  } else if (VAR_24) {
   VAR_40 = !FUNC_35 (VAR_24, "base64") || !FUNC_35 (VAR_24, "base91");
  }
  if (VAR_40) {
   FUNC_9 ("rahash2: Option -c incompatible with -E base64, -E base91, -D base64 or -D base91 options.\n");
   return 1;
  }
  VAR_36 = FUNC_19 (VAR_22);

  if (!FUNC_12 (VAR_36)) {
   FUNC_9 ("rahash2: Option -c incompatible with multiple algorithms in -a.\n");
   return 1;
  }
  VAR_32 = FUNC_13 ((FUNC_37 (VAR_30) + 1) * 2);
  if (!VAR_32) {
   return 1;
  }
  VAR_39 = FUNC_22 (VAR_30, VAR_32);
  if (VAR_39 < 1) {
   FUNC_9 ("rahash2: Invalid -c hex hash\n");
   FUNC_11 (VAR_32);
   return 1;
  } else if (VAR_39 != FUNC_21 (VAR_36)) {
   FUNC_9 (
    "rahash2: Given -c hash has %d byte(s) but the selected algorithm returns %d byte(s).\n",
    VAR_39,
    FUNC_21 (VAR_36));
   FUNC_11 (VAR_32);
   return 1;
  }
 }
 if ((st64) VAR_4 >= 0 && (st64) VAR_12 < 0) {
  VAR_12 = 0;
 }
 if (VAR_4 || VAR_12) {
  if (VAR_12 && VAR_4 >= VAR_12) {
   FUNC_9 ("Invalid -f or -t offsets\n");
   return 1;
  }
 }
 if (VAR_31) {



  for (VAR_15 = VAR_9; VAR_15 < VAR_13; VAR_15++) {
   FUNC_15 ("%s:\n", VAR_14[VAR_15]);
   FUNC_33 ("r2 -qfnc \"p==%s 100\" \"%s\"", VAR_31, VAR_14[VAR_15]);
  }
  return 0;
 }

 if (VAR_29) {
  VAR_27 = (ut8 *) FUNC_13 (FUNC_37 (VAR_29) + 128);
  if (!FUNC_38 (VAR_29, "s:", 2)) {
   FUNC_36 ((char *) VAR_27, VAR_29 + 2);
   VAR_28 = FUNC_37 (VAR_29 + 2);
  } else {
   VAR_28 = FUNC_22 (VAR_29, VAR_27);
   if (VAR_28 < 1) {
    FUNC_36 ((char *) VAR_27, VAR_29);
    VAR_28 = FUNC_37 (VAR_29);
   }
  }
 }
 FUNC_5 (VAR_23);
 if (VAR_26) {

  VAR_16 = 0;
  if (!FUNC_35 (VAR_26, "-")) {
   VAR_26 = FUNC_13 (32768);
   if (!VAR_26) {
    FUNC_11 (VAR_27);
    return 1;
   }
   VAR_35 = FUNC_10 ((void *) VAR_26, 1, 32768 - 1, VAR_11);
   if (VAR_35 < 1) {
    VAR_35 = 0;
   }
   VAR_26[VAR_35] = '\0';
   VAR_33 = VAR_35;
  }
  if (VAR_34) {
   ut8 *VAR_41 = FUNC_13 ((FUNC_37 (VAR_26) + 1) * 2);
   VAR_33 = FUNC_22 (VAR_26, VAR_41);
   if (VAR_33 < 1) {
    FUNC_9 ("Invalid hex string\n");
    FUNC_11 (VAR_41);
    FUNC_11 (VAR_27);
    return 1;
   }
   VAR_26 = (char *) VAR_41;

  } else {
   if (!VAR_35) {
    VAR_33 = FUNC_37 (VAR_26);
   }
  }
  if (VAR_4) {
   if (VAR_4 >= VAR_33) {
    FUNC_9 ("Invalid -f.\n");
    FUNC_11 (VAR_27);
    return 1;
   }
  }
  if (VAR_12) {
   if (VAR_12 > VAR_33) {
    FUNC_9 ("Invalid -t.\n");
    return 1;
   }
  } else {
   VAR_12 = VAR_33;
  }
  VAR_26 = VAR_26 + VAR_4;
  VAR_33 = VAR_12 - VAR_4;
  VAR_26[VAR_33] = '\0';
  if (!VAR_35 && !VAR_34) {
   VAR_33 = FUNC_32 (VAR_26);
  }
  if (VAR_25) {
   return FUNC_7 (VAR_25, 0, VAR_26, VAR_33, VAR_27, VAR_28, 0);
  } else if (VAR_24) {
   return FUNC_7 (VAR_24, 1, VAR_26, VAR_33, VAR_27, VAR_28, 0);
  } else {
   char *VAR_42 = (char *) VAR_26;
   int VAR_43 = VAR_33;
   if (VAR_3) {

    VAR_42 = FUNC_13 (VAR_43 + VAR_10.len);
    if (VAR_10.prefix) {
     FUNC_14 (VAR_42, VAR_10.buf, VAR_10.len);
     FUNC_14 (VAR_42 + VAR_10.len, VAR_26, VAR_33);
    } else {
     FUNC_14 (VAR_42, VAR_26, VAR_33);
     FUNC_14 (VAR_42 + VAR_43, VAR_10.buf, VAR_10.len);
    }
    VAR_43 += VAR_10.len;
    VAR_42[VAR_43] = 0;
   }
   VAR_36 = FUNC_19 (VAR_22);
   if (VAR_36 == 0) {
    FUNC_9 ("Invalid algorithm. See -E, -D maybe?\n");
    if (VAR_42 != VAR_26) {
     FUNC_11 (VAR_42);
    }
    FUNC_11 (VAR_27);
    return 1;
   }
   for (VAR_15 = 1; VAR_15 < VAR_1; VAR_15 <<= 1) {
    if (VAR_36 & VAR_15) {
     ut64 VAR_44 = VAR_15 & VAR_36;
     VAR_37 = FUNC_20 (1, VAR_44);
     VAR_4 = 0;
     VAR_12 = VAR_43;
     FUNC_4 (VAR_37, VAR_44, (const ut8 *) VAR_42, VAR_43, VAR_18, 1, VAR_21);
     FUNC_2 (VAR_37, VAR_32, FUNC_21 (VAR_36), &VAR_16);
     FUNC_18 (VAR_37);
    }
   }
   if (VAR_3) {
    if (VAR_42 != VAR_26) {
     FUNC_11 (VAR_42);
    }
    FUNC_11 (VAR_10.buf);
   }
   return VAR_16;
  }
 }
 if (VAR_9 >= VAR_13) {
  FUNC_11 (VAR_27);
  return FUNC_6 (1);
 }
 if (VAR_20) {
  VAR_19 = -VAR_19;
 } else if (VAR_19 < 0) {
  FUNC_9 ("rahash2: Invalid block size\n");
  FUNC_11 (VAR_27);
  return 1;
 }

 VAR_38 = FUNC_25 ();
 for (VAR_16 = 0, VAR_15 = VAR_9; VAR_15 < VAR_13; VAR_15++) {
  if (VAR_25) {
   int VAR_45 = FUNC_8 (VAR_25, 0, VAR_14[VAR_15], VAR_27, VAR_28, 0);
   if (VAR_45 == -1) {
    continue;
   } else {
    return VAR_45;
   }
  } else if (VAR_24) {
   int VAR_46 = FUNC_8 (VAR_24, 1, VAR_14[VAR_15], VAR_27, VAR_28, 0);
   if (VAR_46 == -1) {
    continue;
   } else {
    return VAR_46;
   }
  } else {
   RIODesc *VAR_47 = ((void*)0);
   if (!FUNC_35 (VAR_14[VAR_15], "-")) {
    int VAR_48 = 0;
    ut8 *VAR_49 = (ut8 *) FUNC_30 (&VAR_48);
    char *VAR_50 = FUNC_31 ("malloc://%d", VAR_48);
    if (VAR_48 > 0) {
     VAR_47 = FUNC_26 (VAR_38, VAR_50, VAR_2, 0);
     if (!VAR_47) {
      FUNC_9 ("rahash2: Cannot open malloc://1024\n");
      FUNC_11 (VAR_27);
      return 1;
     }
     FUNC_27 (VAR_38, 0, VAR_49, VAR_48);
    }
    FUNC_11 (VAR_50);
   } else {
    if (FUNC_16 (VAR_14[VAR_15])) {
     FUNC_9 ("rahash2: Cannot hash directories\n");
     FUNC_11 (VAR_27);
     return 1;
    }
    VAR_47 = FUNC_26 (VAR_38, VAR_14[VAR_15], VAR_2, 0);
    if (!VAR_47) {
     FUNC_9 ("rahash2: Cannot open '%s'\n", VAR_14[VAR_15]);
     FUNC_11 (VAR_27);
     return 1;
    }
   }
   VAR_16 |= FUNC_3 (VAR_14[VAR_15], VAR_22, VAR_38, VAR_19, VAR_18, VAR_21, VAR_32);
   VAR_12 = 0;
   FUNC_23 (VAR_47);
  }
 }
 FUNC_11 (VAR_26);
 FUNC_24 (VAR_38);
 FUNC_11 (VAR_27);

 return VAR_16;
}
