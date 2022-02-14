
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int kind ;
struct TYPE_20__ {int t; } ;
struct TYPE_19__ {int i; } ;
struct TYPE_24__ {int r; TYPE_2__ type; TYPE_1__ c; } ;
struct TYPE_23__ {int func_args; } ;
struct TYPE_22__ {int t; TYPE_3__* ref; } ;
struct TYPE_21__ {struct TYPE_21__* next; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ CType ;
typedef TYPE_5__ AttributeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 char VAR_5 ;
 char VAR_6 ;
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
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_23 ;
 char* VAR_24 ;
 int FUNC_8 (int) ;
 int VAR_25 ;
 int FUNC_9 () ;
 scalar_t__ VAR_26 ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char) ;
 char* FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (int,TYPE_4__*,int ,int) ;
 int FUNC_15 (char*,char*,...) ;
 scalar_t__ FUNC_16 () ;
 char VAR_27 ;
 int FUNC_17 (TYPE_4__*,TYPE_5__*,int*,int) ;
 int FUNC_18 (TYPE_4__*,int*) ;
 int FUNC_19 (char*,int,TYPE_4__*,int *) ;
 int FUNC_20 (int ) ;
 TYPE_6__* VAR_28 ;

__attribute__((used)) static void FUNC_21(CType *VAR_29, AttributeDef *VAR_30) {
 int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 Sym **VAR_36, *VAR_37, *VAR_38;
 AttributeDef VAR_39;
 CType VAR_40;
 char *VAR_41 = ((void*)0);
 int VAR_42 = 0;

 if (VAR_27 == '(') {

  FUNC_9 ();
  VAR_32 = 0;
  VAR_38 = ((void*)0);
  VAR_36 = &VAR_38;
  {
   const char *VAR_43 = VAR_24;
   FUNC_6 (VAR_41);
   VAR_41 = FUNC_13 (VAR_23);
   FUNC_15 ("func.%s.ret=%s\n", VAR_41, VAR_43);
   FUNC_15 ("func.%s.cc=%s\n", VAR_41, "cdecl");
   FUNC_15 ("%s=func\n", VAR_41);
  }
  VAR_34 = 0;
  if (VAR_27 != ')') {
   while (FUNC_16 () == 0) {

    if (VAR_32 != VAR_2) {
     if (!FUNC_10 (&VAR_40, &VAR_39)) {
      if (VAR_32) {
       FUNC_2 ("invalid type");
      } else {
       VAR_32 = VAR_2;
       goto old_proto;
      }
     }
     VAR_32 = VAR_1;
     if ((VAR_40.t & VAR_11) == VAR_21 && VAR_27 == ')') {
      break;
     }
     FUNC_17 (&VAR_40, &VAR_39, &VAR_31, VAR_9 | VAR_8);
     if ((VAR_40.t & VAR_11) == VAR_21) {
      FUNC_2 ("parameter declared as void");
     }
     VAR_34 += (FUNC_18 (&VAR_40, &VAR_35) + VAR_3 - 1) / VAR_3;
    } else {
old_proto:
     VAR_31 = VAR_27;
     if (VAR_31 < VAR_7) {
      FUNC_4 ("identifier");
     }
     VAR_40.t = VAR_15;
     FUNC_9 ();
    }
    FUNC_3 (&VAR_40);
    VAR_37 = FUNC_14 (VAR_31 | VAR_4, &VAR_40, 0, 0);
    if (!VAR_37) {
     return;
    } else {
     char VAR_44[1024];
     FUNC_19 (VAR_44, sizeof (VAR_44), &VAR_40, ((void*)0));
     FUNC_15 ("func.%s.arg.%d=%s,%s\n",
      VAR_41, VAR_42, VAR_44, VAR_23);
     VAR_42++;
    }
    *VAR_36 = VAR_37;
    VAR_36 = &VAR_37->next;
    if (VAR_27 == ')') {
     break;
    }
    FUNC_12 (',');
    if (VAR_32 == VAR_1 && VAR_27 == VAR_5) {
     VAR_32 = VAR_0;
     FUNC_9 ();
     break;
    }
   }
  }
  FUNC_15 ("func.%s.args=%d\n", VAR_41, VAR_42);

  if (VAR_32 == 0) {
   VAR_32 = VAR_2;
  }
  FUNC_12 (')');


  VAR_29->t &= ~VAR_13;



  if (VAR_27 == '[') {
   FUNC_9 ();
   FUNC_12 (']');
   VAR_29->t |= VAR_17;
  }

  VAR_30->func_args = VAR_34;
  VAR_37 = FUNC_14 (VAR_4, VAR_29, FUNC_0 (VAR_30), VAR_32);
  if (!VAR_37) {
   return;
  }
  VAR_37->next = VAR_38;
  VAR_29->t = VAR_14;
  VAR_29->ref = VAR_37;
  FUNC_1 (VAR_41);
 } else if (VAR_27 == '[') {

  FUNC_9 ();
  if (VAR_27 == VAR_6) {
   FUNC_9 ();
  }
  VAR_31 = -1;
  VAR_33 = 0;
  if (VAR_27 != ']') {
   if (!VAR_25 || VAR_26) {
    FUNC_20 (FUNC_5 ());
   } else {
    FUNC_7 ();
   }
   if ((VAR_28->r & (VAR_19 | VAR_16 | VAR_18)) == VAR_12) {
    VAR_31 = VAR_28->c.i;
    if (VAR_31 < 0) {
     FUNC_2 ("invalid array size");
    }
   } else {
    if (!FUNC_8 (VAR_28->type.t & VAR_11)) {
     FUNC_2 ("size of variable length array should be an integer");
    }
    VAR_33 = VAR_20;
   }
  }
  FUNC_12 (']');

  FUNC_21 (VAR_29, VAR_30);



  VAR_22 = VAR_31;







  VAR_37 = FUNC_14 (VAR_4, VAR_29, 0, VAR_31);
  if (!VAR_37) {
   return;
  }
  VAR_29->t = (VAR_33? VAR_20: VAR_10) | VAR_17;
  VAR_29->ref = VAR_37;
 }
}
