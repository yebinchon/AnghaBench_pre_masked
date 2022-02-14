
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int encoding; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_9__ {int device; int to; } ;
typedef TYPE_2__ mbfl_buffer_converter ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;

mbfl_string *
FUNC_1(mbfl_buffer_converter *VAR_0, mbfl_string *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_1->encoding = VAR_0->to;
 return FUNC_0(&VAR_0->device, VAR_1);
}
