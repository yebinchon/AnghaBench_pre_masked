
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocsz; scalar_t__ pos; scalar_t__ length; int * buffer; } ;
typedef TYPE_1__ mbfl_wchar_device ;


 int VAR_0 ;

void
FUNC_0(mbfl_wchar_device *VAR_1)
{
 if (VAR_1) {
  VAR_1->buffer = ((void*)0);
  VAR_1->length = 0;
  VAR_1->pos= 0;
  VAR_1->allocsz = VAR_0;
 }
}
