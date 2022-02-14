
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mrb_state ;
struct TYPE_3__ {int ilen; } ;
typedef TYPE_1__ mrb_irep ;



__attribute__((used)) static size_t
FUNC_0(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  size_t VAR_2 = 0;

  VAR_2 += sizeof(uint32_t);
  VAR_2 += sizeof(uint32_t);
  VAR_2 += sizeof(uint32_t) * VAR_1->ilen;

  return VAR_2;
}
