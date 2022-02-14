
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long ll; } ;
struct TYPE_4__ {int r; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_4 ;

long long FUNC_2(void) {
 long long VAR_5 = 0LL;
 FUNC_1 ();
 if ((VAR_4->r & (VAR_3 | VAR_1 | VAR_2)) != VAR_0) {
  FUNC_0 ("constant expression");
 }
 VAR_5 = VAR_4->c.ll;
 return VAR_5;
}
