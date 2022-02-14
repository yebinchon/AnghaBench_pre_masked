
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; scalar_t__ filter2; scalar_t__ filter1; } ;
typedef TYPE_1__ mbfl_buffer_converter ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(mbfl_buffer_converter *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->filter1) {
   FUNC_0(VAR_0->filter1);
  }
  if (VAR_0->filter2) {
   FUNC_0(VAR_0->filter2);
  }
  FUNC_2(&VAR_0->device);
  FUNC_1((void*)VAR_0);
 }
}
