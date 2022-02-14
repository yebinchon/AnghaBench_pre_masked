
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int ) ;
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
 int VAR_31 ;
 int FUNC_1 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (int ) ;
 int VAR_37 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_38 ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;

bool FUNC_16(uint16_t VAR_39, keyrecord_t *VAR_40) {
    switch (VAR_39) {

case 154:
if (VAR_40->event.pressed) {
    FUNC_11(VAR_34);
}
return 1;
break;

case 139:
if (VAR_40->event.pressed) {
    FUNC_11(VAR_35);
}
return 1;
break;

case 138:
if (VAR_40->event.pressed) {
    FUNC_6(FUNC_1(VAR_1), VAR_8, 0);
} else {
    FUNC_5(FUNC_1(VAR_1), VAR_8, 0);
}
return 0;
break;
case 133:
if (VAR_40->event.pressed) {
    FUNC_6(FUNC_1(VAR_0), VAR_15, 1);
} else {
    FUNC_5(FUNC_1(VAR_0), VAR_15, 1);
}
return 0;
break;

case 136:
if (VAR_40->event.pressed) {
    FUNC_6(VAR_7, VAR_12, 2);
} else {
    FUNC_5(VAR_7, VAR_12, 2);
}
return 0;
break;
case 131:
if (VAR_40->event.pressed) {
    FUNC_6(VAR_2, VAR_19, 3);
} else {
    FUNC_5(VAR_2, VAR_19, 3);
}
return 0;
break;

case 137:
if (VAR_40->event.pressed) {
    FUNC_6(VAR_9, VAR_10, 4);
} else {
    FUNC_5(VAR_9, VAR_10, 4);
}
return 0;
break;
case 132:
if (VAR_40->event.pressed) {
    FUNC_6(VAR_16, VAR_17, 5);
} else {
    FUNC_5(VAR_16, VAR_17, 5);
}
return 0;
break;

case 134:
if (VAR_40->event.pressed) {
    FUNC_6(VAR_6, VAR_13, 6);
} else {
    FUNC_5(VAR_6, VAR_13, 6);
}
return 0;
break;
case 129:
if (VAR_40->event.pressed) {
    FUNC_6(VAR_14, VAR_20, 7);
} else {
    FUNC_5(VAR_14, VAR_20, 7);
}
return 0;
break;

case 135:
if (VAR_40->event.pressed) {
    VAR_38 = FUNC_14();
    VAR_37 = 8;
    FUNC_4(VAR_36);
} else {
    FUNC_3(VAR_36);
    if (VAR_37 == 8 && FUNC_13(VAR_38) < VAR_32) {
        FUNC_12(VAR_4);
        VAR_37 = 10;
    }
}
return 0;
break;
case 130:
if (VAR_40->event.pressed) {
    VAR_38 = FUNC_14();
    VAR_37 = 9;
    FUNC_4(VAR_36);
} else {
    FUNC_3(VAR_36);
    if (VAR_37 == 9 && FUNC_13(VAR_38) < VAR_32) {
        FUNC_12(VAR_21);
        VAR_37 = 10;
    }
}
return 0;
break;

case 143:
if (VAR_40->event.pressed) {
    FUNC_10(VAR_29);
    VAR_37 = 10;
}
return 0;
break;
case 150:
if (VAR_40->event.pressed) {
    FUNC_10(VAR_27);
    VAR_37 = 10;
}
return 0;
break;
case 152:
if (VAR_40->event.pressed) {
    FUNC_10(VAR_26);
    VAR_37 = 10;
}
return 0;
break;
case 147:
if (VAR_40->event.pressed) {
    FUNC_10(VAR_28);
    VAR_37 = 10;
}
return 0;
break;

case 144:
if (VAR_40->event.pressed) {
    FUNC_7(VAR_10);
    FUNC_12(FUNC_1(VAR_18));
    FUNC_15(VAR_10);
    VAR_37 = 10;
}
return 0;
break;
case 146:
if (VAR_40->event.pressed) {
    FUNC_7(VAR_10);
    FUNC_12(FUNC_1(VAR_11));
    FUNC_15(VAR_10);
    VAR_37 = 10;
}
return 0;
break;
case 148:
if (VAR_40->event.pressed) {
    FUNC_7(VAR_10);
    FUNC_12(FUNC_1(VAR_5));
    FUNC_15(VAR_10);
    VAR_37 = 10;
}
return 0;
break;
case 141:
if (VAR_40->event.pressed) {
    FUNC_7(VAR_10);
    FUNC_12(FUNC_1(VAR_22));
    FUNC_15(VAR_10);
    VAR_37 = 10;
}
return 0;
break;

case 142:
if (VAR_40->event.pressed) {
    FUNC_12(FUNC_0(VAR_25));
    VAR_37 = 10;
}
return 0;
break;
case 151:
if (VAR_40->event.pressed) {
    FUNC_12(FUNC_0(VAR_3));
    VAR_37 = 10;
}
return 0;
break;
case 149:
if (VAR_40->event.pressed) {
    FUNC_12(FUNC_0(VAR_24));
    VAR_37 = 10;
}
return 0;
break;
case 145:
if (VAR_40->event.pressed) {
    FUNC_12(FUNC_0(VAR_23));
    VAR_37 = 10;
}
return 0;
break;

case 156:
if (VAR_40->event.pressed) {
    FUNC_4(VAR_33);
    FUNC_9(VAR_33, VAR_31);
    VAR_37 = 10;
} else {
    FUNC_2 (VAR_30);
}
return 0;
break;

case 128:
if (VAR_40->event.pressed) {
    FUNC_8("mhostley");
    VAR_37 = 10;
}
return 1;
break;
case 153:
if (VAR_40->event.pressed) {
    FUNC_8("mhostley@gmail.com");
    VAR_37 = 10;
}
return 1;
break;
case 140:
if (VAR_40->event.pressed) {
    FUNC_8("Samuel Jahnke");
    VAR_37 = 10;
}
return 1;
break;
case 155:
if (VAR_40->event.pressed) {
    FUNC_8("home/mhostley/");
    VAR_37 = 10;
}
return 1;
break;

}
VAR_37 = 10;
return 1;
}
