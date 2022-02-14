
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* buffer; } ;
struct collector_strpos_data {scalar_t__ output; scalar_t__ start; size_t needle_pos; scalar_t__ found_pos; size_t needle_len; scalar_t__ matched_pos; TYPE_1__ needle; } ;
typedef int ssize_t ;



__attribute__((used)) static int
FUNC_0(int VAR_0, void* VAR_1)
{
 int *VAR_2, *VAR_3, *VAR_4;
 ssize_t VAR_5;
 struct collector_strpos_data *VAR_6 = (struct collector_strpos_data*)VAR_1;

 if (VAR_6->output >= VAR_6->start) {
  if (VAR_0 == (int)VAR_6->needle.buffer[VAR_6->needle_pos]) {
   if (VAR_6->needle_pos == 0) {
    VAR_6->found_pos = VAR_6->output;
   }
   VAR_6->needle_pos++;
   if (VAR_6->needle_pos >= VAR_6->needle_len) {
    VAR_6->matched_pos = VAR_6->found_pos;
    VAR_6->needle_pos--;
    goto retry;
   }
  } else if (VAR_6->needle_pos != 0) {
retry:
   VAR_3 = (int *)VAR_6->needle.buffer;
   VAR_3++;
   for (;;) {
    VAR_6->found_pos++;
    VAR_2 = VAR_3;
    VAR_4 = (int *)VAR_6->needle.buffer;
    VAR_5 = VAR_6->needle_pos - 1;
    while (VAR_5 > 0 && *VAR_2 == *VAR_4) {
     VAR_5--;
     VAR_2++;
     VAR_4++;
    }
    if (VAR_5 <= 0) {
     if (*VAR_4 != VAR_0) {
      VAR_6->needle_pos = 0;
     }
     break;
    } else {
     VAR_3++;
     VAR_6->needle_pos--;
    }
   }
  }
 }

 VAR_6->output++;
 return VAR_0;
}
