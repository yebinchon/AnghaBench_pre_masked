
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char ut8 ;
typedef char unichar ;
typedef int ubuf ;
struct names {size_t type; scalar_t__ name; } ;
typedef int nbuf ;
struct TYPE_8__ {char* human; char* mime; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ RMagic ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;
 char* FUNC_2 (int,size_t) ;
 char* FUNC_3 (char*,size_t,char*,size_t) ;
 int FUNC_4 (char const*,size_t,char*,size_t*) ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*,int,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,size_t,char*) ;
 scalar_t__ FUNC_10 (char const*,size_t,char*,size_t*) ;
 scalar_t__ FUNC_11 (char const*,size_t,char*,size_t*) ;
 scalar_t__ FUNC_12 (char const*,size_t,char*,size_t*) ;
 size_t FUNC_13 (char const*,size_t,char*,size_t*) ;
 scalar_t__ FUNC_14 (char const*,size_t,char*,size_t*) ;
 char* FUNC_15 (size_t) ;
 int FUNC_16 (char const*,char*,int) ;
 struct names const* VAR_8 ;
 TYPE_2__* VAR_9 ;

int FUNC_17(RMagic *VAR_10, const ut8 *VAR_11, size_t VAR_12) {
return 0;
 size_t VAR_13;
 ut8 *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16;
 unichar *VAR_17 = ((void*)0);
 size_t VAR_18, VAR_19;
 const struct names *VAR_20;
 int VAR_21 = -1;
 int VAR_22 = VAR_10->flags & VAR_3;

 const char *VAR_23 = ((void*)0);
 const char *VAR_24 = ((void*)0);
 const char *VAR_25 = ((void*)0);
 const char *VAR_26 = ((void*)0);
 const char *VAR_27 = ((void*)0);

 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30 = 0;

 int VAR_31 = 0;
 int VAR_32 = 0;
 int VAR_33 = 0;
 int VAR_34 = 0;

 size_t VAR_35 = (size_t)-1;
 int VAR_36 = 0;





 while (VAR_12 > 1 && VAR_11[VAR_12 - 1] == '\0') {
  VAR_12--;
 }

 if (!(VAR_14 = FUNC_2 (1, (VAR_12 + 1) * sizeof (VAR_14[0])))) {
  goto done;
 }
 if (!(VAR_17 = FUNC_2 (1, (VAR_12 + 1) * sizeof (VAR_17[0])))) {
  goto done;
 }







 if (FUNC_10(VAR_11, VAR_12, VAR_17, &VAR_18)) {
  VAR_23 = "ASCII";
  VAR_24 = "us-ascii";
  VAR_25 = "text";
 } else if (FUNC_14(VAR_11, VAR_12, VAR_17, &VAR_18) > 0) {
  VAR_23 = "UTF-8 Unicode (with BOM)";
  VAR_24 = "utf-8";
  VAR_25 = "text";
 } else if (FUNC_4(VAR_11, VAR_12, VAR_17, &VAR_18) > 1) {
  VAR_23 = "UTF-8 Unicode";
  VAR_24 = "utf-8";
  VAR_25 = "text";
 } else if ((VAR_13 = FUNC_13(VAR_11, VAR_12, VAR_17, &VAR_18)) != 0) {
  if (VAR_13 == 1) {
   VAR_23 = "Little-endian UTF-16 Unicode";
  } else {
   VAR_23 = "Big-endian UTF-16 Unicode";
  }

  VAR_25 = "character data";
  VAR_24 = "utf-16";
 } else if (FUNC_12(VAR_11, VAR_12, VAR_17, &VAR_18)) {
  if (!FUNC_16 (VAR_11, "\xff\xff\xff\xff", 4)) {

   goto done;
  }
  VAR_23 = "ISO-8859";
  VAR_25 = "text";
  VAR_24 = "iso-8859-1";
 } else if (FUNC_11(VAR_11, VAR_12, VAR_17, &VAR_18)) {
  VAR_23 = "Non-ISO extended-ASCII";
  VAR_25 = "text";
  VAR_24 = "unknown";
 } else {
  FUNC_9(VAR_11, VAR_12, VAR_14);

  if (FUNC_10(VAR_14, VAR_12, VAR_17, &VAR_18)) {
   VAR_23 = "EBCDIC";
   VAR_25 = "character data";
   VAR_24 = "ebcdic";
  } else if (FUNC_12(VAR_14, VAR_12, VAR_17, &VAR_18)) {
   VAR_23 = "International EBCDIC";
   VAR_25 = "character data";
   VAR_24 = "ebcdic";
  } else {
   VAR_21 = 0;
   goto done;
  }
 }

 if (VAR_12 <= 1) {
  VAR_21 = 0;
  goto done;
 }







 VAR_19 = VAR_18 * 6;
 if (!(VAR_15 = FUNC_15(VAR_19))) {
  FUNC_5(VAR_10, VAR_19);
  goto done;
 }
 if (!(VAR_16 = FUNC_3 (VAR_15, VAR_19, VAR_17, VAR_18))) {
  goto done;
 }
 if (FUNC_7(VAR_10, VAR_15, VAR_16 - VAR_15, VAR_7) != 0) {
  VAR_21 = 1;
  goto done;
 }


 if ((VAR_10->flags & VAR_6) != 0) {
  goto subtype_identified;
 }

 VAR_13 = 0;
 while (VAR_13 < VAR_18) {
  size_t VAR_37;


  while (VAR_13 < VAR_18 && FUNC_0 (VAR_17[VAR_13])) {
   VAR_13++;
  }
  if (VAR_13 >= VAR_18) {
   break;
  }


  for (VAR_37 = VAR_13 + 1; VAR_37 < VAR_12; VAR_37++) {
   if (FUNC_0 (VAR_17[VAR_37])) {
    break;
   }
  }


  for (VAR_20 = VAR_8; VAR_20 < VAR_8 + VAR_2; VAR_20++) {
   if (FUNC_1((const ut8 *)VAR_20->name, VAR_17 + VAR_13,
       VAR_37 - VAR_13)) {
    VAR_26 = VAR_9[VAR_20->type].human;
    VAR_27 = VAR_9[VAR_20->type].mime;
    goto subtype_identified;
   }
  }

  VAR_13 = VAR_37;
 }

subtype_identified:


 for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++) {
  if (VAR_17[VAR_13] == '\n') {
   if (VAR_30) {
    VAR_31++;
   } else {
    VAR_32++;
   }
   VAR_35 = VAR_13;
  } else if (VAR_30) {
   VAR_33++;
  }

  VAR_30 = (VAR_17[VAR_13] == '\r');
  if (VAR_30) {
   VAR_35 = VAR_13;
  }

  if (VAR_17[VAR_13] == 0x85) {
   VAR_34++;
   VAR_35 = VAR_13;
  }

  if (VAR_13 > VAR_35 + VAR_1) {
   VAR_36 = 1;
  }

  if (VAR_17[VAR_13] == '\033') {
   VAR_28 = 1;
  }
  if (VAR_17[VAR_13] == '\b') {
   VAR_29 = 1;
  }
 }





 if (VAR_30 && VAR_12 < VAR_0) {
  VAR_33++;
 }

 if (VAR_22) {
  if (VAR_22 & VAR_5) {
   if (VAR_27) {
    if (FUNC_6 (VAR_10, VAR_27) == -1) {
     goto done;
    }
   } else {
    if (FUNC_6 (VAR_10, "text/plain") == -1) {
     goto done;
    }
   }
  }

  if ((VAR_22 == 0 || VAR_22 == VAR_3) && VAR_24) {
   if ((VAR_22 & VAR_5) &&
    FUNC_6 (VAR_10, " charset=") == -1) {
    goto done;
   }
   if (FUNC_6 (VAR_10, VAR_24) == -1) {
    goto done;
   }
  }

  if (VAR_22 == VAR_4) {
   if (FUNC_6 (VAR_10, "binary") == -1) {
    VAR_21 = 1;
    goto done;
   }
  }
 } else {
  if (FUNC_6 (VAR_10, VAR_23) == -1) {
   goto done;
  }

  if (VAR_26) {
   if (FUNC_6 (VAR_10, " ") == -1) {
    goto done;
   }
   if (FUNC_6 (VAR_10, VAR_26) == -1) {
    goto done;
   }
  }

  if (FUNC_6 (VAR_10, " ") == -1) {
   goto done;
  }
  if (FUNC_6 (VAR_10, VAR_25) == -1) {
   goto done;
  }

  if (VAR_36) {
   if (FUNC_6 (VAR_10, ", with very long lines") == -1) {
    goto done;
   }
  }





  if ((VAR_31 == 0 && VAR_33 == 0 && VAR_34 == 0 && VAR_32 == 0) ||
      (VAR_31 != 0 || VAR_33 != 0 || VAR_34 != 0)) {
   if (FUNC_6 (VAR_10, ", with") == -1) {
    goto done;
   }

   if (VAR_31 == 0 && VAR_33 == 0 && VAR_34 == 0 && VAR_32 == 0) {
    if (FUNC_6 (VAR_10, " no") == -1) {
     goto done;
    }
   } else {
    if (VAR_31) {
     if (FUNC_6 (VAR_10, " CRLF") == -1) {
      goto done;
     }
     if (VAR_33 || VAR_32 || VAR_34) {
      if (FUNC_6 (VAR_10, ",") == -1) {
       goto done;
      }
     }
    }
    if (VAR_33) {
     if (FUNC_6 (VAR_10, " CR") == -1) {
      goto done;
     }
     if (VAR_32 || VAR_34) {
      if (FUNC_6 (VAR_10, ",") == -1) {
       goto done;
      }
     }
    }
    if (VAR_32) {
     if (FUNC_6 (VAR_10, " LF") == -1) {
      goto done;
     }
     if (VAR_34) {
      if (FUNC_6 (VAR_10, ",") == -1) {
       goto done;
      }
     }
    }
    if (VAR_34) {
     if (FUNC_6 (VAR_10, " NEL") == -1) {
      goto done;
     }
    }
   }

   if (FUNC_6 (VAR_10, " line terminators") == -1) {
    goto done;
   }
  }

  if (VAR_28) {
   if (FUNC_6 (VAR_10, ", with escape sequences") == -1) {
    goto done;
   }
  }
  if (VAR_29) {
   if (FUNC_6 (VAR_10, ", with overstriking") == -1) {
    goto done;
   }
  }
 }
 VAR_21 = 1;
done:
 FUNC_8 (VAR_14);
 FUNC_8 (VAR_17);
 FUNC_8 (VAR_15);
 return VAR_21;
}
