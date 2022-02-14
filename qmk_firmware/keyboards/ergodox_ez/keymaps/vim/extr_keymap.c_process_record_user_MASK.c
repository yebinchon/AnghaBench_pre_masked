
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mods; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int VAR_3 ;

 int FUNC_2 () ;
 int FUNC_3 () ;

 int FUNC_4 () ;

 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;

 int FUNC_15 () ;

 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;

 int FUNC_26 () ;

 int FUNC_27 () ;



 int FUNC_28 () ;


 int FUNC_29 (int const) ;
 int FUNC_30 () ;

 int FUNC_31 () ;
 int FUNC_32 () ;

 int FUNC_33 () ;
 int FUNC_34 () ;
 int VAR_4 ;
 int FUNC_35 () ;

 int FUNC_36 () ;

 int FUNC_37 () ;
 int FUNC_38 () ;


 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 int FUNC_42 () ;
 int FUNC_43 () ;
 int FUNC_44 () ;
 int FUNC_45 () ;
 int FUNC_46 () ;

 int FUNC_47 () ;


 int FUNC_48 () ;
 int FUNC_49 () ;

 int FUNC_50 () ;
 TYPE_4__* VAR_5 ;
 int FUNC_51 (int ) ;
 int FUNC_52 (int) ;

bool FUNC_53(uint16_t VAR_6, keyrecord_t *VAR_7) {
  bool VAR_8 = (VAR_5->mods & FUNC_0(VAR_1)) |
                 (VAR_5->mods & FUNC_0(VAR_2));

  switch (VAR_6) {

    case 149:
      if (VAR_7->event.pressed) { VAR_8 ? FUNC_3() : FUNC_2(); }
      return 0;

    case 148:
      if (VAR_7->event.pressed) {
        switch(VAR_4) {
          case 151: FUNC_4(); break;
          case 147: FUNC_5(); break;
          case 145: FUNC_16(); break;
          case 133: FUNC_39(); break;
        }
      }
      return 0;

    case 147:
      if (VAR_7->event.pressed) {
        switch(VAR_4) {
          case 151: VAR_8 ? FUNC_10() : FUNC_29(147); break;
          case 147: FUNC_13(); break;
        }
      }
      return 0;

    case 145:
      if (VAR_7->event.pressed) {
        switch(VAR_4) {
          case 151: VAR_8 ? FUNC_21() : FUNC_29(145); break;
          case 145: FUNC_24(); break;
        }
      }
      return 0;

    case 143:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: FUNC_27(); break;
          case 147: FUNC_7(); break;
          case 145: FUNC_18(); break;
          case 133: FUNC_41(); break;
        }
      }
      return 0;

    case 142:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: FUNC_30(); break;
          case 147: FUNC_9(); break;
          case 145: FUNC_20(); break;
          case 133: FUNC_43(); break;
        }
      }
      return 0;

    case 141:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: FUNC_51(VAR_0); break;
          case 147: FUNC_29(146); break;
          case 145: FUNC_29(144); break;
          case 133: FUNC_29(132); break;
        }
      }
      return 0;

    case 140:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: VAR_8 ? FUNC_28() : FUNC_26(); break;
          case 147: FUNC_6(); break;
          case 145: FUNC_17(); break;
          case 133: FUNC_40(); break;
        }
      }
      return 0;

    case 139:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: FUNC_38(); break;
          case 147: FUNC_12(); break;
          case 145: FUNC_23(); break;
          case 133: FUNC_45(); break;
        }
      }
      return 0;

    case 138:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: FUNC_35(); break;
          case 147: FUNC_11(); break;
          case 145: FUNC_22(); break;
          case 133: FUNC_44(); break;
        }
      }
      return 0;

    case 137:
      if (VAR_7->event.pressed) { VAR_8 ? FUNC_32() : FUNC_31(); }
      return 0;

    case 136:
      if (VAR_7->event.pressed) { VAR_8 ? FUNC_34() : FUNC_33(); }
      return 0;

    case 135:
      if (VAR_7->event.pressed) { VAR_8 ? FUNC_13() : FUNC_36(); }
      return 0;

    case 134:
      if (VAR_7->event.pressed) { FUNC_37(); }
      return 0;

    case 133:
      if (VAR_7->event.pressed) { FUNC_29(133); }
      return 0;

    case 131:
      if (VAR_7->event.pressed) {
        switch (VAR_4) {
          case 151: FUNC_47(); break;
          case 147: FUNC_14(); break;
          case 146: FUNC_8(); break;
          case 145: FUNC_25(); break;
          case 144: FUNC_19(); break;
          case 133: FUNC_46(); break;
          case 132: FUNC_42(); break;
        }
      }
      return 0;

    case 130:
      if (VAR_7->event.pressed) { FUNC_15(); }
      return 0;

    case 129:
      if (VAR_7->event.pressed) { VAR_8 ? FUNC_49() : FUNC_48(); }
      return 0;


    case 152:
      if (VAR_7->event.pressed) { FUNC_50(); }
      return 0;
    case 128:
      if (VAR_7->event.pressed) { FUNC_1(VAR_3); }
      return 0;
    case 150:
      if (VAR_7->event.pressed) { FUNC_52(1); }
      return 0;
  }
  return 1;
}
