
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jsonsl_state_st {size_t pos_begin; } ;
struct TYPE_3__ {size_t min_available; char const* buffer; } ;
typedef TYPE_1__ JSN_DATA ;



__attribute__((used)) static const char* FUNC_0(JSN_DATA *VAR_0, struct jsonsl_state_st *VAR_1)
{
  size_t VAR_2 = VAR_1->pos_begin - VAR_0->min_available;
  return VAR_0->buffer + VAR_2;
}
