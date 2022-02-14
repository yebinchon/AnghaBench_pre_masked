
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int encoding; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_12__ {int device; int to; int * filter2; int * filter1; } ;
typedef TYPE_2__ mbfl_buffer_converter ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;

mbfl_string *
FUNC_3(mbfl_buffer_converter *VAR_0, mbfl_string *VAR_1,
      mbfl_string *VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_0(VAR_0, VAR_1);
 if (VAR_0->filter1 != ((void*)0)) {
  FUNC_1(VAR_0->filter1);
 }
 if (VAR_0->filter2 != ((void*)0)) {
  FUNC_1(VAR_0->filter2);
 }
 VAR_2->encoding = VAR_0->to;
 return FUNC_2(&VAR_0->device, VAR_2);
}
