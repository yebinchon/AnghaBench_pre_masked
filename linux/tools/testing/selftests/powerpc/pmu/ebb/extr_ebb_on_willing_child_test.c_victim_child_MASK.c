
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union pipe {int dummy; } pipe ;
struct TYPE_3__ {int ebb_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_8 (union pipe) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (union pipe) ;

__attribute__((used)) static int FUNC_11(union pipe VAR_3, union pipe VAR_4)
{
 FUNC_0(FUNC_10(VAR_3));


 FUNC_4(1);
 FUNC_9(VAR_2);
 FUNC_7();

 FUNC_0(FUNC_8(VAR_4));

 while (VAR_0.stats.ebb_count < 20) {
  FUNC_0(FUNC_1());
 }

 FUNC_6();
 FUNC_5();

 FUNC_2(1, VAR_1);

 FUNC_3();

 FUNC_0(VAR_0.stats.ebb_count == 0);

 return 0;
}
