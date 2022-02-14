
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int zend_ffi_val ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_1__ zend_ffi_dcl ;




 int VAR_0 ;


 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (int,int,char*) ;

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
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_11(int VAR_31, zend_ffi_dcl *VAR_32) {
 do {
  switch (VAR_31) {
   case 155:
    if (VAR_32->flags & VAR_28) FUNC_8("unexpected", VAR_31);
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_29;
    break;
   case 167:
    if (VAR_32->flags & VAR_28) FUNC_8("unexpected", VAR_31);
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_23;
    break;
   case 157:
    if (VAR_32->flags & VAR_28) FUNC_8("unexpected", VAR_31);
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_27;
    break;
   case 173:
    if (VAR_32->flags & VAR_28) FUNC_8("unexpected", VAR_31);
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_22;
    break;
   case 161:
    if (VAR_32->flags & VAR_28) FUNC_8("unexpected", VAR_31);
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_26;
    break;
   case 164:
   case 136:
   case 135:
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_24;
    break;
   case 146:
    VAR_31 = FUNC_1();
    VAR_32->flags |= VAR_25;
    break;
   case 150:
    VAR_31 = FUNC_1();
    if (VAR_31 != VAR_10) {
     FUNC_8("'(' expected, got", VAR_31);
    }
    VAR_31 = FUNC_1();
    if ((FUNC_0(VAR_31, (VAR_20,152,172,159,163,162,166,169,158,153,148,147,171,142,141,156,154,168,165,170,140,139,160,134,133,151,129,128,149,145,144,138,143,132,137,131,130), "\002\000\376\377\377\107\360\017\000\000\000\002\000")) && FUNC_7(VAR_31)) {
     zend_ffi_dcl VAR_33 = VAR_21;
     VAR_31 = FUNC_4(VAR_31, &VAR_33);
     FUNC_9(VAR_32, &VAR_33);
    } else if (FUNC_0(VAR_31, (VAR_10,165,VAR_4,VAR_1,VAR_3,VAR_2,VAR_6,VAR_0,VAR_14,VAR_12,VAR_8,VAR_16,VAR_13,VAR_11,VAR_17,VAR_9,VAR_5,VAR_7,VAR_18,VAR_19), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
     zend_ffi_val VAR_34;
     VAR_31 = FUNC_3(VAR_31, &VAR_34);
     FUNC_10(VAR_32, &VAR_34);
    } else {
     FUNC_8("unexpected", VAR_31);
    }
    if (VAR_31 != VAR_15) {
     FUNC_8("')' expected, got", VAR_31);
    }
    VAR_31 = FUNC_1();
    break;
   case 145:
   case 144:
   case 138:
   case 143:
   case 132:
   case 137:
   case 131:
   case 130:
    VAR_31 = FUNC_2(VAR_31, VAR_32);
    break;
   case 170:
   case 140:
   case 139:
   case 160:
   case 134:
   case 133:
   case 151:
   case 129:
   case 128:
   case 149:
    VAR_31 = FUNC_5(VAR_31, VAR_32);
    break;
   case 152:
   case 172:
   case 159:
   case 163:
   case 162:
   case 166:
   case 169:
   case 158:
   case 153:
   case 148:
   case 147:
   case 171:
   case 142:
   case 141:
   case 156:
   case 154:
   case 168:
   case 165:
    VAR_31 = FUNC_6(VAR_31, VAR_32);
    break;
   default:
    FUNC_8("unexpected", VAR_31);
  }
 } while ((FUNC_0(VAR_31, (155,167,157,173,161,164,136,135,146,150,145,144,138,143,132,137,131,130,170,140,139,160,134,133,151,129,128,149,152,172,159,163,162,166,169,158,153,148,147,171,142,141,156,154,168,165), "\200\377\377\377\377\107\360\017\000\000\000\002\000")) && (VAR_31 != 165 || !(VAR_32->flags & VAR_30)));
 return VAR_31;
}
