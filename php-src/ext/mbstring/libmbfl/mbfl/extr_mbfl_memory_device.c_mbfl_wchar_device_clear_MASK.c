
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pos; scalar_t__ length; int * buffer; } ;
typedef TYPE_1__ mbfl_wchar_device ;


 int FUNC_0 (int *) ;

void
FUNC_1(mbfl_wchar_device *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->buffer) {
   FUNC_0(VAR_0->buffer);
  }
  VAR_0->buffer = ((void*)0);
  VAR_0->length = 0;
  VAR_0->pos = 0;
 }
}
