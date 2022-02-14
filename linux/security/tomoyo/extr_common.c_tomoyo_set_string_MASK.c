
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ w_pos; char const** w; } ;
struct tomoyo_io_buffer {TYPE_1__ r; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tomoyo_io_buffer*) ;

__attribute__((used)) static void FUNC_2(struct tomoyo_io_buffer *VAR_1, const char *VAR_2)
{
 if (VAR_1->r.w_pos < VAR_0) {
  VAR_1->r.w[VAR_1->r.w_pos++] = VAR_2;
  FUNC_1(VAR_1);
 } else
  FUNC_0(1);
}
