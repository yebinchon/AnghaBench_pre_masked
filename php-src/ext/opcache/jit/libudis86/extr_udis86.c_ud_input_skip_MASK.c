
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {int inp_end; int (* inp_hook ) (struct ud*) ;size_t inp_buf_size; size_t inp_buf_index; int * inp_buf; } ;


 int FUNC_0 (struct ud*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ud*) ;

void
FUNC_2(struct ud* VAR_1, size_t VAR_2)
{
  if (VAR_1->inp_end) {
    return;
  }
  if (VAR_1->inp_buf == ((void*)0)) {
    while (VAR_2--) {
      int VAR_3 = VAR_1->inp_hook(VAR_1);
      if (VAR_3 == VAR_0) {
        goto eoi;
      }
    }
    return;
  } else {
    if (VAR_2 > VAR_1->inp_buf_size ||
        VAR_1->inp_buf_index > VAR_1->inp_buf_size - VAR_2) {
      VAR_1->inp_buf_index = VAR_1->inp_buf_size;
      goto eoi;
    }
    VAR_1->inp_buf_index += VAR_2;
    return;
  }
eoi:
  VAR_1->inp_end = 1;
  FUNC_0(VAR_1, "cannot skip, eoi received\b");
  return;
}
