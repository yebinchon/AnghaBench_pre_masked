
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ cat_ver; } ;
struct TYPE_21__ {int major_version; TYPE_1__ controldata; } ;
struct TYPE_20__ {scalar_t__ check; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,int) ;
 TYPE_3__ VAR_1 ;
 int FUNC_18 (TYPE_3__*,int) ;
 int FUNC_19 (int) ;
 TYPE_2__ VAR_2 ;

void
FUNC_20(bool VAR_3)
{


 if (!VAR_3)
  FUNC_18(&VAR_1, 1);


 FUNC_10(&VAR_1);

 FUNC_12();

 FUNC_11();





 FUNC_7(&VAR_1);
 FUNC_8(&VAR_1);
 FUNC_4(&VAR_1);
 FUNC_5(&VAR_1);
 FUNC_1(&VAR_1);





 if (FUNC_0(VAR_1.major_version) <= 1100)
  FUNC_6(&VAR_1);






 if (FUNC_0(VAR_1.major_version) <= 1100)
  FUNC_14(&VAR_1);





 if (FUNC_0(VAR_1.major_version) <= 906)
 {
  FUNC_16(&VAR_1);
  if (VAR_2.check)
   FUNC_17(&VAR_1, 1);
 }


 if (FUNC_0(VAR_1.major_version) <= 905)
  FUNC_3(&VAR_1);

 if (FUNC_0(VAR_1.major_version) == 904 &&
  VAR_1.controldata.cat_ver < VAR_0)
  FUNC_2(&VAR_1);


 if (FUNC_0(VAR_1.major_version) <= 903)
  FUNC_15(&VAR_1);


 if (FUNC_0(VAR_1.major_version) <= 804)
  FUNC_13(&VAR_1, 1);





 if (!VAR_2.check)
  FUNC_9();

 if (!VAR_3)
  FUNC_19(0);
}
