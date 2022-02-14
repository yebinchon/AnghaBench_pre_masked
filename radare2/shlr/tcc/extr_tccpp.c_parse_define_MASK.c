
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int str; int len; } ;
typedef TYPE_1__ TokenString ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char,int*) ;
 int FUNC_1 (int,int,int ,TYPE_2__*) ;
 int VAR_9 ;
 char* FUNC_2 (int,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_2__* FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (char*,...) ;
 char VAR_11 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,char,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_12 ;

void FUNC_12(void)
{
 Sym *VAR_13, *VAR_14, **VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 TokenString VAR_21;

 VAR_16 = VAR_11;
 if (VAR_16 < VAR_5) {
  FUNC_7 ("invalid macro name '%s'", FUNC_2 (VAR_11, &VAR_12));
 }

 VAR_14 = ((void*)0);
 VAR_17 = VAR_1;

 FUNC_4 ();
 if (VAR_11 == '(') {
  FUNC_3 ();
  VAR_15 = &VAR_14;
  while (VAR_11 != ')') {
   VAR_18 = VAR_11;
   FUNC_3 ();
   VAR_19 = 0;
   if (VAR_18 == VAR_3) {
    VAR_18 = VAR_8;
    VAR_19 = 1;
   } else if (VAR_11 == VAR_3 && VAR_10) {
    VAR_19 = 1;
    FUNC_3 ();
   }
   if (VAR_18 < VAR_5) {
    FUNC_7 ("badly punctuated parameter list");
   }
   VAR_13 = FUNC_6 (&VAR_9, VAR_18 | VAR_2, VAR_19, 0);
   if (!VAR_13) {
    return;
   }
   *VAR_15 = VAR_13;
   VAR_15 = &VAR_13->next;
   if (VAR_11 != ',') {
    break;
   }
   FUNC_3 ();
  }
  if (VAR_11 == ')') {
   FUNC_4 ();
  }
  VAR_17 = VAR_0;
 }
 FUNC_11 (&VAR_21);
 VAR_20 = 2;

 while (VAR_11 != VAR_6 && VAR_11 != VAR_4) {

  if (VAR_7 == VAR_11) {
   if (1 == VAR_20) {
    --VAR_21.len;
   }
   VAR_20 = 2;
  } else if ('#' == VAR_11) {
   VAR_20 = 2;
  } else if (FUNC_0 (VAR_11, &VAR_20)) {
   goto skip;
  }
  FUNC_10 (&VAR_21, VAR_11, &VAR_12);
skip:
  FUNC_4 ();
 }
 if (VAR_20 == 1) {
  --VAR_21.len;
 }
 FUNC_9 (&VAR_21, 0);




 FUNC_1 (VAR_16, VAR_17, VAR_21.str, VAR_14);
}
