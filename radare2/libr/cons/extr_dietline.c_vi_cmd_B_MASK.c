
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int * data; } ;
struct TYPE_4__ {TYPE_1__ buffer; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1() {
 int VAR_2;
 for (VAR_2 = VAR_0.buffer.index - 2; VAR_2 >= 0; VAR_2--) {
  if ((!FUNC_0 (VAR_0.buffer.data[VAR_2], VAR_1)
   && FUNC_0 (VAR_0.buffer.data[VAR_2-1], VAR_1))) {
   VAR_0.buffer.index = VAR_2;
   break;
  }
 }
 if (VAR_2 < 0) {
  VAR_0.buffer.index = 0;
 }
}
