
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_21__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_30__ {int str; } ;
typedef TYPE_2__ TokenString ;
struct TYPE_36__ {TYPE_3__* sym; } ;
struct TYPE_35__ {int aligned; scalar_t__ packed; } ;
struct TYPE_34__ {int t; TYPE_3__* ref; } ;
struct TYPE_33__ {int member_0; } ;
struct TYPE_32__ {int member_0; } ;
struct TYPE_29__ {int t; TYPE_1__* ref; } ;
struct TYPE_31__ {scalar_t__ c; char* asm_label; TYPE_21__ type; struct TYPE_31__* next; } ;
struct TYPE_28__ {scalar_t__ c; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ ParseState ;
typedef TYPE_5__ CValue ;
typedef TYPE_6__ CType ;
typedef TYPE_7__ AttributeDef ;


 int FUNC_0 (char*,...) ;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_6__*,int ,int,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_21__*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_21__*) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_3__* FUNC_8 (int) ;
 TYPE_3__* FUNC_9 (int,TYPE_6__*,int,int) ;
 scalar_t__ FUNC_10 () ;
 char VAR_11 ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_6__*,int*) ;
 int FUNC_15 (TYPE_6__*,int,int) ;
 int FUNC_16 (TYPE_6__*,int,TYPE_5__*) ;
 TYPE_9__* VAR_12 ;
 int FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_18(CType *VAR_13, AttributeDef *VAR_14, int VAR_15, int VAR_16, int VAR_17, char *VAR_18, int VAR_19) {
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;
 ParseState VAR_24 = {
  0
 };
 TokenString VAR_25;
 Sym *VAR_26;

 VAR_26 = ((void*)0);
 if (FUNC_4(VAR_13)) {
  Sym *VAR_27;
  VAR_27 = VAR_13->ref;
  while (VAR_27 && VAR_27->next)
   VAR_27 = VAR_27->next;
  if (VAR_27 && (VAR_27->type.t & VAR_2) && (VAR_27->type.ref->c < 0)) {
   VAR_26 = VAR_27;
  }
 }

 VAR_20 = FUNC_14 (VAR_13, &VAR_21);






 FUNC_13 (&VAR_25);
 if (VAR_20 < 0 || (VAR_26 && VAR_16)) {
  if (!VAR_16) {
   FUNC_0 ("unknown type size");
  }

  if (VAR_16 == 2) {

   while (VAR_11 == VAR_1 || VAR_11 == VAR_0) {
    FUNC_12 (&VAR_25);
    FUNC_5 ();
   }
  } else {
   VAR_23 = 0;
   while (FUNC_10() == 0 && (VAR_23 > 0 || (VAR_11 != ',' && VAR_11 != ';'))) {
    if (VAR_11 < 0) {
     FUNC_0 ("unexpected end of file in initializer");
    }
    FUNC_12 (&VAR_25);
    if (VAR_11 == '{') {
     VAR_23++;
    } else if (VAR_11 == '}') {
     VAR_23--;
     if (VAR_23 <= 0) {
      FUNC_5 ();
      break;
     }
    }
    FUNC_5 ();
   }
  }
  FUNC_11 (&VAR_25, -1);
  FUNC_11 (&VAR_25, 0);


  FUNC_7 (&VAR_24);

  VAR_10 = VAR_25.str;
  FUNC_5 ();
  FUNC_1 (VAR_13, 0, 1, 1);

  VAR_10 = VAR_25.str;
  FUNC_5 ();


  VAR_20 = FUNC_14 (VAR_13, &VAR_21);
  if (VAR_20 < 0) {
   FUNC_0 ("unknown type size");
  }
 }
 if (VAR_26) {
  VAR_20 += VAR_26->type.ref->c * FUNC_6 (&VAR_26->type);
 }

 if (VAR_14->aligned) {
  if (VAR_14->aligned > VAR_21) {
   VAR_21 = VAR_14->aligned;
  }
 } else if (VAR_14->packed) {
  VAR_21 = 1;
 }
 if ((VAR_15 & VAR_7) == VAR_5) {
  VAR_9 = (VAR_9 - VAR_20) & - VAR_21;
  VAR_22 = VAR_9;
  if (VAR_17) {

   FUNC_9 (VAR_17, VAR_13, VAR_15, VAR_22);
  } else {

   FUNC_15 (VAR_13, VAR_15, VAR_22);
  }
 } else {
  Sym *VAR_28;

  VAR_28 = ((void*)0);
  if (VAR_17 && VAR_19 == VAR_3) {

   VAR_28 = FUNC_8 (VAR_17);
   if (VAR_28) {
    if (!FUNC_3 (&VAR_28->type, VAR_13)) {
     FUNC_0 ("incompatible types for redefinition of '%s'",
      FUNC_2 (VAR_17, ((void*)0)));
    }
    if (VAR_28->type.t & VAR_4) {

     VAR_28->type.t &= ~VAR_4;


     if ((VAR_28->type.t & VAR_2) &&
         VAR_28->type.ref->c < 0 &&
         VAR_13->ref->c >= 0) {
      VAR_28->type.ref->c = VAR_13->ref->c;
     }
    } else {







     if (!VAR_16) {
      goto no_alloc;
     }
    }
   }
  }

  if (VAR_17) {
   if (VAR_19 != VAR_3 || !VAR_28) {
    VAR_28 = FUNC_9 (VAR_17, VAR_13, VAR_15 | VAR_6, 0);
    VAR_28->asm_label = VAR_18;
   }
  } else {
   CValue VAR_29 = { 0 };
   FUNC_16 (VAR_13, VAR_3 | VAR_6, &VAR_29);
   VAR_12->sym = VAR_28;
  }

  if ((VAR_13->t & VAR_8) && VAR_28) {
   FUNC_17 (VAR_28);
  }
 }
no_alloc:
 ;
}
