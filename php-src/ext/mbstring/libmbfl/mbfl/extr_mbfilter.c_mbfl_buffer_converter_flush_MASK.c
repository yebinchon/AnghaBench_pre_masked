
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * filter2; int * filter1; } ;
typedef TYPE_1__ mbfl_buffer_converter ;


 int FUNC_0 (int *) ;

int
FUNC_1(mbfl_buffer_converter *VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  return -1;
 }

 if (VAR_0->filter1 != ((void*)0)) {
  FUNC_0(VAR_0->filter1);
 }
 if (VAR_0->filter2 != ((void*)0)) {
  FUNC_0(VAR_0->filter2);
 }

 return 0;
}
