
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct macro_level {int dummy; } ;
struct TYPE_8__ {int * str; } ;
typedef TYPE_2__ TokenString ;
struct TYPE_9__ {TYPE_1__* cstr; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef int Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (scalar_t__) ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int **,int *,struct macro_level**) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_3__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;

void FUNC_8(void)
{
 Sym *VAR_13, *VAR_14;
 TokenString VAR_15;
 struct macro_level *VAR_16;

redo:
 if (VAR_8 & VAR_1) {
  FUNC_3 ();
 } else {
  FUNC_2 ();
 }
 if (!VAR_6) {


  if (VAR_9 >= VAR_3 &&
      (VAR_8 & VAR_0)) {
   VAR_14 = FUNC_0 (VAR_9);
   if (VAR_14) {

    FUNC_7 (&VAR_15);
    VAR_13 = ((void*)0);
    VAR_16 = ((void*)0);
    if (FUNC_1 (&VAR_15, &VAR_13, VAR_14, &VAR_16) == 0) {

     FUNC_5 (&VAR_15, 0);
     VAR_6 = VAR_15.str;
     VAR_7 = VAR_15.str;
     goto redo;
    }
   }
  }
 } else {
  if (VAR_9 == 0) {

   if (VAR_11) {
    VAR_6 = VAR_12;
    VAR_11 = 0;
   } else {

    FUNC_6 (VAR_7);
    VAR_7 = ((void*)0);
    VAR_6 = ((void*)0);
   }
   goto redo;
  } else if (VAR_9 == VAR_4) {

   goto redo;
  }
 }


 if (VAR_9 == VAR_5 &&
     (VAR_8 & VAR_2)) {
  FUNC_4 ((char *) VAR_10.cstr->data);
 }
}
