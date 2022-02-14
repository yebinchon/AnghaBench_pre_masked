
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; char* data; int length; } ;
struct TYPE_4__ {TYPE_1__ buffer; int clipboard; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5() {
 int VAR_1, VAR_2;
 if (VAR_0.buffer.index > 0) {
  for (VAR_1 = VAR_0.buffer.index - 1; VAR_1 > 0 && VAR_0.buffer.data[VAR_1] == ' '; VAR_1--) {


  }
  for (; VAR_1 > 0 && VAR_0.buffer.data[VAR_1] != ' '; VAR_1--) {


  }
  if (VAR_1 > 0) {
   VAR_1++;
  } else if (VAR_1 < 0) {
   VAR_1 = 0;
  }
  if (VAR_0.buffer.index > VAR_0.buffer.length) {
   VAR_0.buffer.length = VAR_0.buffer.index;
  }
  VAR_2 = VAR_0.buffer.index - VAR_1 + 1;
  FUNC_0 (VAR_0.clipboard);
  VAR_0.clipboard = FUNC_3 (VAR_0.buffer.data + VAR_1, VAR_2);
  FUNC_2 (VAR_0.clipboard);
  FUNC_1 (VAR_0.buffer.data + VAR_1,
   VAR_0.buffer.data + VAR_0.buffer.index,
   VAR_0.buffer.length - VAR_0.buffer.index + 1);
  VAR_0.buffer.length = FUNC_4 (VAR_0.buffer.data);
  VAR_0.buffer.index = VAR_1;
 }
}
