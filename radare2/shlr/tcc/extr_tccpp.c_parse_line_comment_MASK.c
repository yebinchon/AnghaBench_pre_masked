
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* buf_ptr; int line_num; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static uint8_t *FUNC_2(uint8_t *VAR_2)
{
 int VAR_3;

 VAR_2++;
 for (;;) {
  VAR_3 = *VAR_2;
redo:
  if (VAR_3 == '\n' || VAR_3 == VAR_0) {
   break;
  } else if (VAR_3 == '\\') {
   VAR_1->buf_ptr = VAR_2;
   VAR_3 = FUNC_1 ();
   VAR_2 = VAR_1->buf_ptr;
   if (VAR_3 == '\\') {
    FUNC_0 (VAR_3, VAR_2);
    if (VAR_3 == '\n') {
     VAR_1->line_num++;
     FUNC_0 (VAR_3, VAR_2);
    } else if (VAR_3 == '\r') {
     FUNC_0 (VAR_3, VAR_2);
     if (VAR_3 == '\n') {
      VAR_1->line_num++;
      FUNC_0 (VAR_3, VAR_2);
     }
    }
   } else {
    goto redo;
   }
  } else {
   VAR_2++;
  }
 }
 return VAR_2;
}
