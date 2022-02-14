
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ulong ;
typedef int zend_long ;
typedef int tmp ;
typedef int my_ulonglong ;
struct TYPE_5__ {scalar_t__ type; int flags; } ;
struct TYPE_4__ {int name; } ;
typedef scalar_t__* MYSQL_ROW ;
typedef int MYSQL_RES ;
typedef TYPE_1__ MYSQL_FIELD ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,unsigned int,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 TYPE_3__* FUNC_17 (int *,unsigned int) ;
 TYPE_1__* FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 scalar_t__* FUNC_20 (int *) ;
 unsigned int FUNC_21 (int *) ;
 int FUNC_22 (int *,int,int *,int ) ;
 int FUNC_23 (char*,int,char*,int ) ;
 int FUNC_24 (scalar_t__) ;

void FUNC_25(zval *VAR_9, MYSQL_RES * VAR_10, zend_long VAR_11)
{

 MYSQL_ROW VAR_12;
 unsigned int VAR_13, VAR_14;
 MYSQL_FIELD *VAR_15;
 zend_ulong *VAR_16;

 if (!(VAR_12 = FUNC_20(VAR_10))) {
  FUNC_0();
 }

 if (VAR_11 & VAR_0) {
  VAR_15 = FUNC_18(VAR_10);
 }

 FUNC_9(VAR_9);
 VAR_16 = FUNC_19(VAR_10);
 VAR_14 = FUNC_21(VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  if (VAR_12[VAR_13]) {
   zval VAR_17;
   {

    FUNC_2(&VAR_17, VAR_12[VAR_13], VAR_16[VAR_13]);
   }

   if (VAR_11 & VAR_3) {
    FUNC_8(VAR_9, VAR_13, &VAR_17);
   }
   if (VAR_11 & VAR_0) {
    if (VAR_11 & VAR_3 && FUNC_4(VAR_17)) {
     FUNC_3(VAR_17);
    }
    FUNC_6(VAR_9, VAR_15[VAR_13].name, &VAR_17);
   }
  } else {
   if (VAR_11 & VAR_3) {
    FUNC_7(VAR_9, VAR_13);
   }
   if (VAR_11 & VAR_0) {
    FUNC_5(VAR_9, VAR_15[VAR_13].name);
   }
  }
 }



}
