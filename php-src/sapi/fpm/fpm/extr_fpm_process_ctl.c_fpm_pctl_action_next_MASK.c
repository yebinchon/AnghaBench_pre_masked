
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int process_control_timeout; } ;
struct TYPE_3__ {int running_children; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_3()
{
 int VAR_8, VAR_9;

 if (!VAR_5.running_children) {
  FUNC_0();
 }

 if (VAR_6 == 0) {
  if (VAR_7 == VAR_0) {
   VAR_8 = VAR_3;
  } else {
   VAR_8 = VAR_2;
  }
  VAR_9 = VAR_4.process_control_timeout;
 } else {
  if (VAR_6 == VAR_2) {
   VAR_8 = VAR_3;
  } else {
   VAR_8 = VAR_1;
  }
  VAR_9 = 1;
 }

 FUNC_1(VAR_8);
 VAR_6 = VAR_8;
 FUNC_2(VAR_9);
}
