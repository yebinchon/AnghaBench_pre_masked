
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct segkv {int dummy; } ;
struct TYPE_4__ {int size; int * next; } ;
typedef TYPE_1__ segment ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static segment*
FUNC_1(mrb_state *VAR_3, segment *VAR_4)
{
  uint32_t VAR_5;

  if (!VAR_4) VAR_5 = VAR_1;
  else {
    VAR_5 = VAR_4->size*VAR_0 + 1;
    if (VAR_5 > VAR_2) VAR_5 = VAR_2;
  }

  VAR_4 = (segment*)FUNC_0(VAR_3, sizeof(segment)+sizeof(struct segkv)*VAR_5);
  VAR_4->size = VAR_5;
  VAR_4->next = ((void*)0);

  return VAR_4;
}
