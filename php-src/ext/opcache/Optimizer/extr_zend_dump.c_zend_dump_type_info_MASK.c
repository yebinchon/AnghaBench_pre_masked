
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* name; } ;
typedef TYPE_2__ zend_class_entry ;
typedef int uint32_t ;
struct TYPE_4__ {char* val; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_31 ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_32, zend_class_entry *VAR_33, int VAR_34, uint32_t VAR_35)
{
 int VAR_36 = 1;

 FUNC_0(VAR_31, " [");
 if (VAR_32 & VAR_29) {
  if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
  FUNC_0(VAR_31, "undef");
 }
 if (VAR_32 & VAR_25) {
  if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
  FUNC_0(VAR_31, "ref");
 }
 if (VAR_35 & VAR_30) {
  if (VAR_32 & VAR_23) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "rc1");
  }
  if (VAR_32 & VAR_24) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "rcn");
  }
 }
 if (VAR_32 & VAR_16) {
  if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
  FUNC_0(VAR_31, "class");
  if (VAR_33) {
   if (VAR_34) {
    FUNC_0(VAR_31, " (instanceof %s)", VAR_33->name->val);
   } else {
    FUNC_0(VAR_31, " (%s)", VAR_33->name->val);
   }
  }
 } else if ((VAR_32 & VAR_0) == VAR_0) {
  if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
  FUNC_0(VAR_31, "any");
 } else {
  if (VAR_32 & VAR_21) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "null");
  }
  if ((VAR_32 & VAR_18) && (VAR_32 & VAR_28)) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "bool");
  } else if (VAR_32 & VAR_18) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "false");
  } else if (VAR_32 & VAR_28) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "true");
  }
  if (VAR_32 & VAR_20) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "long");
  }
  if (VAR_32 & VAR_17) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "double");
  }
  if (VAR_32 & VAR_27) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "string");
  }
  if (VAR_32 & VAR_1) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "array");
   if ((VAR_32 & VAR_2) != 0 &&
       (VAR_32 & VAR_2) != VAR_2) {
    int VAR_37 = 1;
    FUNC_0(VAR_31, " [");
    if (VAR_32 & VAR_3) {
     if (VAR_37) VAR_37 = 0; else FUNC_0(VAR_31, ", ");
     FUNC_0(VAR_31, "long");
    }
    if (VAR_32 & VAR_4) {
     if (VAR_37) VAR_37 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "string");
     }
    FUNC_0(VAR_31, "]");
   }
   if (VAR_32 & (VAR_5|VAR_12)) {
    int VAR_38 = 1;
    FUNC_0(VAR_31, " of [");
    if ((VAR_32 & VAR_5) == VAR_5) {
     if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
     FUNC_0(VAR_31, "any");
    } else {
     if (VAR_32 & VAR_10) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "null");
     }
     if (VAR_32 & VAR_8) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "false");
     }
     if (VAR_32 & VAR_15) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "true");
     }
     if (VAR_32 & VAR_9) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "long");
     }
     if (VAR_32 & VAR_7) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "double");
     }
     if (VAR_32 & VAR_14) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "string");
     }
     if (VAR_32 & VAR_6) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "array");
     }
     if (VAR_32 & VAR_11) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "object");
     }
     if (VAR_32 & VAR_13) {
      if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
      FUNC_0(VAR_31, "resource");
     }
    }
    if (VAR_32 & VAR_12) {
     if (VAR_38) VAR_38 = 0; else FUNC_0(VAR_31, ", ");
     FUNC_0(VAR_31, "ref");
    }
    FUNC_0(VAR_31, "]");
   }
  }
  if (VAR_32 & VAR_22) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "object");
   if (VAR_33) {
    if (VAR_34) {
     FUNC_0(VAR_31, " (instanceof %s)", VAR_33->name->val);
    } else {
     FUNC_0(VAR_31, " (%s)", VAR_33->name->val);
    }
   }
  }
  if (VAR_32 & VAR_26) {
   if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
   FUNC_0(VAR_31, "resource");
  }
 }

 if (VAR_32 & VAR_19) {
  if (VAR_36) VAR_36 = 0; else FUNC_0(VAR_31, ", ");
  FUNC_0(VAR_31, "reg");
 }
 FUNC_0(VAR_31, "]");
}
