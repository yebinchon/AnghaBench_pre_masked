
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int r; } ;
struct TYPE_5__ {int t; } ;
typedef TYPE_1__ CType ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (long long) ;
 int FUNC_4 (TYPE_1__*,int,unsigned long) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_6(CType *VAR_7, unsigned long VAR_8, long long VAR_9, int VAR_10) {
 int VAR_11;
 CType VAR_12;

 switch (VAR_10) {
 case 128:
  FUNC_3 (VAR_9);
  break;
 case 129:

  VAR_11 = VAR_5;
  VAR_5 = 1;
  FUNC_1 ();
  VAR_5 = VAR_11;

  if ((VAR_6->r & (VAR_4 | VAR_3)) != VAR_0) {
   FUNC_0 ("initializer element is not constant");
  }
  break;
 case 130:
  FUNC_2 ();
  break;
 }

 VAR_12 = *VAR_7;
 VAR_12.t &= ~VAR_1;

 FUNC_4 (&VAR_12, VAR_2 | VAR_3, VAR_8);
 FUNC_5 ();
}
