
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ current_point; int current; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(void) {
 uint64_t VAR_1 = FUNC_0();
 if(VAR_1 < VAR_0->current_point) {
  FUNC_1(((void*)0), "time diff error: change from %lld to %lld", VAR_1, VAR_0->current_point);
  VAR_0->current_point = VAR_1;
 } else if (VAR_1 != VAR_0->current_point) {
  uint32_t VAR_2 = (uint32_t)(VAR_1 - VAR_0->current_point);
  VAR_0->current_point = VAR_1;
  VAR_0->current += VAR_2;
  int VAR_3;
  for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
   FUNC_2(VAR_0);
  }
 }
}
