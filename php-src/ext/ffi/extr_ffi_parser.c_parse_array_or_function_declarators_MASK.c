
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int kind; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_13__ {int attr; } ;
typedef TYPE_2__ zend_ffi_dcl ;
typedef int uint32_t ;
typedef int HashTable ;


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
 scalar_t__ FUNC_0 (int,int,char*) ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 TYPE_2__ VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,int **) ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (char*,int) ;
 int VAR_67 ;
 unsigned char const* VAR_68 ;
 unsigned char const* VAR_69 ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(int VAR_70, zend_ffi_dcl *VAR_71, zend_ffi_dcl *VAR_72) {
 int VAR_73;
 const unsigned char *VAR_74;
 const unsigned char *VAR_75;
 int VAR_76;
 int VAR_77;
 int VAR_78;
 int VAR_79;
 zend_ffi_dcl VAR_80 = VAR_63;
 zend_ffi_val VAR_81 = {.kind = VAR_66};
 HashTable *VAR_82 = ((void*)0);
 uint32_t VAR_83 = 0;
 if (VAR_70 == VAR_32) {
  VAR_70 = FUNC_1();
  VAR_74 = VAR_68;
  VAR_75 = VAR_69;
  VAR_76 = VAR_67;
  VAR_78 = -2;
  VAR_73 = VAR_70;
  if (VAR_73 == VAR_18) {
   VAR_78 = 106;
   goto _yy_state_105;
  } else if (FUNC_0(VAR_73, (VAR_3,VAR_50,VAR_51,VAR_14,VAR_55,VAR_56,VAR_24,VAR_60,VAR_61,VAR_27,VAR_45,VAR_46,VAR_52,VAR_47,VAR_57,VAR_54,VAR_58,VAR_59), "\000\000\376\007\000\000\360\017\000\000\000\000\000")) {
   VAR_78 = 109;
   goto _yy_state_105;
  } else if (VAR_73 == VAR_41) {
   VAR_73 = FUNC_1();
   goto _yy_state_105_20;
  } else if (FUNC_0(VAR_73, (VAR_33,VAR_37,VAR_35,VAR_26,VAR_36,VAR_34,VAR_42,VAR_28,VAR_17,VAR_25,VAR_43,VAR_44,VAR_10,VAR_13,VAR_4,VAR_9,VAR_8,VAR_19,VAR_1), "\010\000\000\000\000\000\000\000\004\030\377\376\000")) {
   VAR_78 = 115;
   goto _yy_state_105;
  } else if (VAR_73 == VAR_39) {
   VAR_78 = 116;
   goto _yy_state_105;
  } else {
   FUNC_5("unexpected", VAR_73);
  }
_yy_state_105_20:
  if (VAR_73 == VAR_39) {
   VAR_78 = 114;
   goto _yy_state_105;
  } else if (FUNC_0(VAR_73, (VAR_33,VAR_37,VAR_35,VAR_26,VAR_36,VAR_34,VAR_42,VAR_28,VAR_17,VAR_25,VAR_43,VAR_44,VAR_10,VAR_13,VAR_4,VAR_9,VAR_8,VAR_19,VAR_1,VAR_41), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
   VAR_78 = 115;
   goto _yy_state_105;
  } else {
   FUNC_5("unexpected", VAR_73);
  }
_yy_state_105:
  VAR_68 = VAR_74;
  VAR_69 = VAR_75;
  VAR_67 = VAR_76;
  if (VAR_78 == 106) {
   VAR_70 = FUNC_1();
   if (FUNC_0(VAR_70, (VAR_3,VAR_50,VAR_51,VAR_14,VAR_55,VAR_56,VAR_24,VAR_60,VAR_61,VAR_27,VAR_45,VAR_46,VAR_52,VAR_47,VAR_57,VAR_54,VAR_58,VAR_59), "\000\000\376\007\000\000\360\017\000\000\000\000\000")) {
    VAR_70 = FUNC_4(VAR_70, &VAR_80);
   }
   VAR_70 = FUNC_2(VAR_70, &VAR_81);
  } else if (VAR_78 == 109) {
   VAR_70 = FUNC_4(VAR_70, &VAR_80);
   VAR_74 = VAR_68;
   VAR_75 = VAR_69;
   VAR_76 = VAR_67;
   VAR_77 = -2;
   VAR_73 = VAR_70;
   if (VAR_73 == VAR_18) {
    VAR_77 = 110;
    goto _yy_state_109;
   } else if (VAR_73 == VAR_41) {
    VAR_73 = FUNC_1();
    goto _yy_state_109_2;
   } else if (FUNC_0(VAR_73, (VAR_33,VAR_37,VAR_35,VAR_26,VAR_36,VAR_34,VAR_42,VAR_28,VAR_17,VAR_25,VAR_43,VAR_44,VAR_10,VAR_13,VAR_4,VAR_9,VAR_8,VAR_19,VAR_1), "\010\000\000\000\000\000\000\000\004\030\377\376\000")) {
    VAR_77 = 113;
    goto _yy_state_109;
   } else if (VAR_73 == VAR_39) {
    VAR_77 = 116;
    goto _yy_state_109;
   } else {
    FUNC_5("unexpected", VAR_73);
   }
_yy_state_109_2:
   if (VAR_73 == VAR_39) {
    VAR_77 = 112;
    goto _yy_state_109;
   } else if (FUNC_0(VAR_73, (VAR_33,VAR_37,VAR_35,VAR_26,VAR_36,VAR_34,VAR_42,VAR_28,VAR_17,VAR_25,VAR_43,VAR_44,VAR_10,VAR_13,VAR_4,VAR_9,VAR_8,VAR_19,VAR_1,VAR_41), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
    VAR_77 = 113;
    goto _yy_state_109;
   } else {
    FUNC_5("unexpected", VAR_73);
   }
_yy_state_109:
   VAR_68 = VAR_74;
   VAR_69 = VAR_75;
   VAR_67 = VAR_76;
   if (VAR_77 == 110) {
    VAR_70 = FUNC_1();
    VAR_70 = FUNC_2(VAR_70, &VAR_81);
   } else if (VAR_77 == 116) {
    VAR_83 |= VAR_62;
   } else if (VAR_77 == 112) {
    VAR_70 = FUNC_1();
    VAR_83 |= VAR_65;
   } else if (VAR_77 == 113) {
    VAR_70 = FUNC_2(VAR_70, &VAR_81);
   } else {
    FUNC_5("unexpected", VAR_70);
   }
  } else if (VAR_78 == 116 || VAR_78 == 114 || VAR_78 == 115) {
   if (VAR_78 == 116) {
    VAR_83 |= VAR_62;
   } else if (VAR_78 == 114) {
    VAR_70 = FUNC_1();
    VAR_83 |= VAR_65;
   } else {
    VAR_70 = FUNC_2(VAR_70, &VAR_81);
   }
  } else {
   FUNC_5("unexpected", VAR_70);
  }
  if (VAR_70 != VAR_39) {
   FUNC_5("']' expected, got", VAR_70);
  }
  VAR_70 = FUNC_1();
  if (VAR_70 == VAR_32 || VAR_70 == VAR_33) {
   VAR_70 = FUNC_8(VAR_70, VAR_71, VAR_72);
  }
  VAR_71->attr |= VAR_83;
  FUNC_6(VAR_71, &VAR_81);
 } else if (VAR_70 == VAR_33) {
  VAR_70 = FUNC_1();
  if (FUNC_0(VAR_70, (VAR_53,VAR_23,VAR_0,VAR_15,VAR_11,VAR_12,VAR_7,VAR_5,VAR_16,VAR_22,VAR_29,VAR_31,VAR_2,VAR_48,VAR_49,VAR_20,VAR_21,VAR_6,VAR_10,VAR_3,VAR_50,VAR_51,VAR_14,VAR_55,VAR_56,VAR_24,VAR_60,VAR_61,VAR_27,VAR_45,VAR_46,VAR_52,VAR_47,VAR_57,VAR_54,VAR_58,VAR_59,VAR_38), "\002\000\376\377\377\107\370\017\000\000\000\002\000")) {
   if (FUNC_0(VAR_70, (VAR_53,VAR_23,VAR_0,VAR_15,VAR_11,VAR_12,VAR_7,VAR_5,VAR_16,VAR_22,VAR_29,VAR_31,VAR_2,VAR_48,VAR_49,VAR_20,VAR_21,VAR_6,VAR_10,VAR_3,VAR_50,VAR_51,VAR_14,VAR_55,VAR_56,VAR_24,VAR_60,VAR_61,VAR_27,VAR_45,VAR_46,VAR_52,VAR_47,VAR_57,VAR_54,VAR_58,VAR_59), "\002\000\376\377\377\107\360\017\000\000\000\002\000")) {
    VAR_70 = FUNC_3(VAR_70, &VAR_82);
    while (1) {
     VAR_74 = VAR_68;
     VAR_75 = VAR_69;
     VAR_76 = VAR_67;
     VAR_79 = -2;
     VAR_73 = VAR_70;
     if (VAR_73 == VAR_30) {
      VAR_73 = FUNC_1();
      goto _yy_state_119_1;
     } else if (VAR_73 == VAR_40) {
      VAR_79 = 125;
      goto _yy_state_119;
     } else {
      FUNC_5("unexpected", VAR_73);
     }
_yy_state_119_1:
     if (FUNC_0(VAR_73, (VAR_53,VAR_23,VAR_0,VAR_15,VAR_11,VAR_12,VAR_7,VAR_5,VAR_16,VAR_22,VAR_29,VAR_31,VAR_2,VAR_48,VAR_49,VAR_20,VAR_21,VAR_6,VAR_10,VAR_3,VAR_50,VAR_51,VAR_14,VAR_55,VAR_56,VAR_24,VAR_60,VAR_61,VAR_27,VAR_45,VAR_46,VAR_52,VAR_47,VAR_57,VAR_54,VAR_58,VAR_59), "\002\000\376\377\377\107\360\017\000\000\000\002\000")) {
      VAR_79 = 120;
      goto _yy_state_119;
     } else if (VAR_73 == VAR_38) {
      VAR_79 = 122;
      goto _yy_state_119;
     } else {
      FUNC_5("unexpected", VAR_73);
     }
_yy_state_119:
     VAR_68 = VAR_74;
     VAR_69 = VAR_75;
     VAR_67 = VAR_76;
     if (VAR_79 != 120) {
      break;
     }
     VAR_70 = FUNC_1();
     VAR_70 = FUNC_3(VAR_70, &VAR_82);
    }
    if (VAR_79 == 122) {
     VAR_70 = FUNC_1();
     if (VAR_70 != VAR_38) {
      FUNC_5("'...' expected, got", VAR_70);
     }
     VAR_70 = FUNC_1();
     VAR_83 |= VAR_64;
    }
   } else {
    VAR_70 = FUNC_1();
    VAR_83 |= VAR_64;
   }
  }
  if (VAR_70 != VAR_40) {
   FUNC_5("')' expected, got", VAR_70);
  }
  VAR_70 = FUNC_1();
  if (VAR_70 == VAR_32 || VAR_70 == VAR_33) {
   VAR_70 = FUNC_8(VAR_70, VAR_71, VAR_72);
  }
  VAR_71->attr |= VAR_83;
  FUNC_7(VAR_71, VAR_82, VAR_72);
 } else {
  FUNC_5("unexpected", VAR_70);
 }
 return VAR_70;
}
