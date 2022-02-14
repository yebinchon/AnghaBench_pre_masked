
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int index; int length; } ;
struct TYPE_4__ {TYPE_1__ buffer; scalar_t__ clipboard; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3() {
 if (VAR_0.clipboard) {
  char *VAR_2 = VAR_0.buffer.data + VAR_0.buffer.index;
  int VAR_3 = (VAR_0.buffer.data + VAR_0.buffer.length) - VAR_2;
  int VAR_4 = FUNC_2 (VAR_0.clipboard);
  VAR_0.buffer.length += VAR_4;
  FUNC_1 (VAR_2 + VAR_4, VAR_2, VAR_3);
  FUNC_0 (VAR_2, VAR_0.clipboard, VAR_4);
  VAR_0.buffer.index += VAR_4;
  VAR_1 = 1;
 }
}
