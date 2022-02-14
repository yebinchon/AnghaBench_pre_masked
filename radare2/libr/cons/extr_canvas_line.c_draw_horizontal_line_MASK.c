
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sy; scalar_t__ h; } ;
typedef TYPE_1__ RConsCanvas ;






 scalar_t__ FUNC_0 (int,int) ;





 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (RConsCanvas *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15) {
 const char *VAR_16 = "?", *VAR_17 = "?";
 int VAR_18;

 if (VAR_13 < 1) {
  return;
 }

 if (VAR_12 + VAR_10->sy < 0) {
  return;
 }
 if (VAR_12 + VAR_10->sy > VAR_10->h) {
  return;
 }

 switch (VAR_14) {
 case 136:
  if (VAR_8) {
   if (VAR_9) {
    VAR_16 = VAR_4;
    VAR_17 = VAR_7;
   } else {
    VAR_16 = VAR_0;
    VAR_17 = VAR_3;
   }
  } else {
   VAR_16 = "'";
   VAR_17 = ".";
  }
  break;
 case 135:
  if (VAR_8) {
   if (VAR_9) {
    VAR_16 = VAR_6;
    VAR_17 = VAR_5;
   } else {
    VAR_16 = VAR_2;
    VAR_17 = VAR_1;
   }
  } else {
   VAR_16 = ".";
   VAR_17 = "'";
  }
  break;
 case 129:
  if (VAR_8) {
   if (VAR_9) {
    VAR_16 = VAR_4;
    VAR_17 = VAR_5;
   } else {
    VAR_16 = VAR_0;
    VAR_17 = VAR_1;
   }
  } else {
   VAR_16 = "`";
   VAR_17 = "'";
  }
  break;
 case 134:
  if (VAR_8) {
   if (VAR_9) {
    VAR_16 = VAR_6;
    VAR_17 = VAR_7;
   } else {
    VAR_16 = VAR_2;
    VAR_17 = VAR_3;
   }
  } else {
   VAR_16 = VAR_17 = ".";
  }
  break;
 case 131:
  if (VAR_8) {
   VAR_16 = FUNC_5 (VAR_15);
   if (VAR_9) {
    VAR_17 = VAR_7;
   } else {
    VAR_17 = VAR_3;
   }
  } else {
   VAR_16 = "-";
   VAR_17 = ".";
  }
  break;
 case 132:
  if (VAR_8) {
   VAR_16 = FUNC_5 (VAR_15);
   if (VAR_9) {
    VAR_17 = VAR_5;
   } else {
    VAR_17 = VAR_1;
   }
  } else {
   VAR_16 = "-";
   VAR_17 = "'";
  }
  break;
 case 133:
  if (VAR_8) {
   if (VAR_9) {
    VAR_16 = VAR_6;
   } else {
    VAR_16 = VAR_2;
   }
   VAR_17 = FUNC_5 (VAR_15);
  } else {
   VAR_16 = ".";
   VAR_17 = "-";
  }
  break;
 case 128:
  if (VAR_8) {
   if (VAR_9) {
    VAR_16 = VAR_4;
   } else {
    VAR_16 = VAR_0;
   }
   VAR_17 = FUNC_5 (VAR_15);
  } else {
   VAR_16 = "`";
   VAR_17 = "-";
  }
  break;
 case 130:
 default:
  if (VAR_8) {
   VAR_16 = VAR_17 = FUNC_5 (VAR_15);
  } else {
   VAR_16 = VAR_17 = "-";
  }
  break;
 }

 if (FUNC_0 (VAR_11, VAR_12)) {
  FUNC_1 (VAR_16);
 }

 const char *VAR_19 = VAR_8 ? FUNC_5 (VAR_15) : "-";
 FUNC_3 (((void*)0), ((void*)0));
 for (VAR_18 = VAR_11 + 1; VAR_18 < VAR_11 + VAR_13 - 1; VAR_18++) {
  if (FUNC_4 ()) {
   break;
  }
  if (FUNC_0 (VAR_18, VAR_12)) {
   FUNC_1 (VAR_19);
  }
 }
 FUNC_2 ();

 if (FUNC_0 (VAR_11 + VAR_13 - 1, VAR_12)) {
  FUNC_1 (VAR_17);
 }
}
