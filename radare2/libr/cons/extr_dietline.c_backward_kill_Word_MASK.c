
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int length; int * data; } ;
struct TYPE_4__ {TYPE_1__ buffer; int clipboard; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6() {
 int VAR_2, VAR_3;
 if (VAR_0.buffer.index > 0) {
  for (VAR_2 = VAR_0.buffer.index; VAR_2 > 0 && FUNC_1 (VAR_0.buffer.data[VAR_2], VAR_1); VAR_2--) {

  }
  for (; VAR_2 > 0 && !FUNC_1 (VAR_0.buffer.data[VAR_2], VAR_1); VAR_2--) {

  }
  if (VAR_2 > 0) {
   VAR_2++;
  } else if (VAR_2 < 0) {
   VAR_2 = 0;
  }
  if (VAR_0.buffer.index > VAR_0.buffer.length) {
   VAR_0.buffer.length = VAR_0.buffer.index;
  }
  VAR_3 = VAR_0.buffer.index - VAR_2 + 1;
  FUNC_0 (VAR_0.clipboard);
  VAR_0.clipboard = FUNC_4 (VAR_0.buffer.data + VAR_2, VAR_3);
  FUNC_3 (VAR_0.clipboard);
  FUNC_2 (VAR_0.buffer.data + VAR_2, VAR_0.buffer.data + VAR_0.buffer.index,
    VAR_0.buffer.length - VAR_0.buffer.index + 1);
  VAR_0.buffer.length = FUNC_5 (VAR_0.buffer.data);
  VAR_0.buffer.index = VAR_2;
 }
}
