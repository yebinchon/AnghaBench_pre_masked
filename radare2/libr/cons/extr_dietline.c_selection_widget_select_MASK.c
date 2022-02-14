
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; size_t length; size_t index; } ;
struct TYPE_6__ {TYPE_1__ buffer; TYPE_2__* sel_widget; } ;
struct TYPE_5__ {size_t selection; size_t options_len; int * options; } ;
typedef TYPE_2__ RSelWidget ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,char) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5() {
 RSelWidget *VAR_2 = VAR_0.sel_widget;
 if (VAR_2 && VAR_2->selection < VAR_2->options_len) {
  char *VAR_3 = FUNC_3 (VAR_0.buffer.data, ' ');
  if (VAR_3) {
   int VAR_4 = VAR_3 - VAR_0.buffer.data + 1;
   VAR_0.buffer.length = FUNC_0 (VAR_4 + FUNC_4 (VAR_2->options[VAR_2->selection]), VAR_1 - 1);
   FUNC_1 (VAR_0.buffer.data + VAR_4, VAR_2->options[VAR_2->selection], FUNC_4 (VAR_2->options[VAR_2->selection]));
   VAR_0.buffer.index = VAR_0.buffer.length;
   return;
  }
  VAR_0.buffer.length = FUNC_0 (FUNC_4 (VAR_2->options[VAR_2->selection]), VAR_1 - 1);
  FUNC_1 (VAR_0.buffer.data, VAR_2->options[VAR_2->selection], VAR_0.buffer.length);
  VAR_0.buffer.data[VAR_0.buffer.length] = '\0';
  VAR_0.buffer.index = VAR_0.buffer.length;
  FUNC_2 ();
 }
}
