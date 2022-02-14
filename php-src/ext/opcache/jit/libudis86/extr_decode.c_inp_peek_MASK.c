
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud {int inp_end; int* inp_buf; size_t inp_buf_index; size_t inp_buf_size; int inp_peek; int (* inp_hook ) (struct ud*) ;} ;


 int FUNC_0 (struct ud*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ud*) ;

__attribute__((used)) static uint8_t
FUNC_2(struct ud *VAR_1)
{
  if (VAR_1->inp_end == 0) {
    if (VAR_1->inp_buf != ((void*)0)) {
      if (VAR_1->inp_buf_index < VAR_1->inp_buf_size) {
        return VAR_1->inp_buf[VAR_1->inp_buf_index];
      }
    } else if (VAR_1->inp_peek != VAR_0) {
      return VAR_1->inp_peek;
    } else {
      int VAR_2;
      if ((VAR_2 = VAR_1->inp_hook(VAR_1)) != VAR_0) {
        VAR_1->inp_peek = VAR_2;
        return VAR_1->inp_peek;
      }
    }
  }
  VAR_1->inp_end = 1;
  FUNC_0(VAR_1, "byte expected, eoi received\n");
  return 0;
}
