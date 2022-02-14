
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; size_t size; scalar_t__ pos; } ;
typedef TYPE_1__ cursor_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;

cursor_t FUNC_2(size_t VAR_0)
{
  cursor_t VAR_1;
  VAR_1.buf = (char*)FUNC_1(VAR_0);
  VAR_1.size = VAR_0;
  VAR_1.pos = 0;
  FUNC_0(VAR_1.buf);
  return VAR_1;
}
