
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int shmem_fallback; scalar_t__ hdc; scalar_t__ base_cx; scalar_t__ base_cy; scalar_t__ using_shtex; } ;
typedef scalar_t__ HDC ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static void FUNC_10(HDC VAR_3)
{
 static bool VAR_4 = 0;

 if (VAR_4) {
  return;
 }

 if (!VAR_2) {
  VAR_2 = FUNC_9();
  if (!VAR_2) {
   VAR_4 = 1;
   return;
  }
 }


 FUNC_4();

 if (FUNC_2()) {
  FUNC_5();
 }
 if (FUNC_1()) {
  if (FUNC_6(VAR_3) == VAR_0) {
   VAR_1.shmem_fallback = 1;
   FUNC_6(VAR_3);
  }
 }
 if (FUNC_0() && VAR_3 == VAR_1.hdc) {
  uint32_t VAR_5;
  uint32_t VAR_6;


  FUNC_3(VAR_3, &VAR_5, &VAR_6);
  if (VAR_5 != VAR_1.base_cx || VAR_6 != VAR_1.base_cy) {
   if (VAR_5 != 0 && VAR_6 != 0)
    FUNC_5();
   return;
  }

  if (VAR_1.using_shtex)
   FUNC_8();
  else
   FUNC_7();
 }
}
