
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * str; } ;
typedef TYPE_1__ TokenString ;
struct TYPE_7__ {int i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int * VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_8, VAR_9;
 TokenString VAR_10;

 FUNC_7 (&VAR_10);
 while (VAR_6 != VAR_4 && VAR_6 != VAR_2) {
  FUNC_2 ();
  if (VAR_6 == VAR_1) {
   FUNC_3 ();
   VAR_9 = VAR_6;
   if (VAR_9 == '(') {
    FUNC_3 ();
   }
   VAR_8 = FUNC_0 (VAR_6) != 0;
   if (VAR_9 == '(') {
    FUNC_3 ();
   }
   VAR_6 = VAR_0;
   VAR_7.i = VAR_8;
  } else if (VAR_6 >= VAR_3) {

   VAR_6 = VAR_0;
   VAR_7.i = 0;
  }
  FUNC_5 (&VAR_10);
 }
 FUNC_4 (&VAR_10, -1);
 FUNC_4 (&VAR_10, 0);

 VAR_5 = VAR_10.str;
 FUNC_2 ();
 VAR_8 = FUNC_1 ();
 VAR_5 = ((void*)0);
 FUNC_6 (VAR_10.str);
 return VAR_8 != 0;
}
