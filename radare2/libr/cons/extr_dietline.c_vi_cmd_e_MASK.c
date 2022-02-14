
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int length; int * data; } ;
struct TYPE_4__ {TYPE_1__ buffer; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1() {
 int VAR_3;
 for (VAR_3 = VAR_0.buffer.index + 1; VAR_3 < VAR_0.buffer.length; VAR_3++) {
  if ((!FUNC_0 (VAR_0.buffer.data[VAR_3], VAR_2)
   && FUNC_0 (VAR_0.buffer.data[VAR_3+1], VAR_2))
   || (FUNC_0 (VAR_0.buffer.data[VAR_3], VAR_2)
   && !FUNC_0 (VAR_0.buffer.data[VAR_3], VAR_1))) {
   VAR_0.buffer.index = VAR_3;
   break;
  }
 }
 if (VAR_3 >= VAR_0.buffer.length) {
  VAR_0.buffer.index = VAR_0.buffer.length - 1;
 }
}
