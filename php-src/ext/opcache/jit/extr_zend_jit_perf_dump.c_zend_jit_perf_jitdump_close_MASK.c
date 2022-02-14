
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int time_stamp; int event; } ;
typedef TYPE_1__ zend_perf_jitdump_record ;
typedef int rec ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_3 >= 0) {
  zend_perf_jitdump_record VAR_5;

  VAR_5.event = VAR_1;
  VAR_5.size = sizeof(VAR_5);
  VAR_5.time_stamp = FUNC_3();
  FUNC_4(VAR_3, &VAR_5, sizeof(VAR_5));
  FUNC_0(VAR_3);

  if (VAR_4 != VAR_0) {
   FUNC_1(VAR_4, FUNC_2(VAR_2));
  }
 }
}
