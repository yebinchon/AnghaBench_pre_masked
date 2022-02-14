
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {void** buf_end; void** buf_ptr; } ;


 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_2)
{
 int VAR_3;

 if (VAR_2 >= VAR_1->buf_end) {
  VAR_1->buf_ptr = VAR_2;
  VAR_3 = FUNC_0 ();
  VAR_2 = VAR_1->buf_ptr;
  if (VAR_3 == '\\') {
   goto parse_stray;
  }
 } else {
parse_stray:
  VAR_1->buf_ptr = VAR_2;
  VAR_0 = *VAR_2;
  FUNC_1 ();
  VAR_2 = VAR_1->buf_ptr;
  VAR_3 = *VAR_2;
 }
 return VAR_3;
}
