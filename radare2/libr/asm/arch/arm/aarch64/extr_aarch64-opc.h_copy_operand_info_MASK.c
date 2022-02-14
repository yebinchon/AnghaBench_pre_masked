
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int aarch64_opnd_info ;
struct TYPE_5__ {TYPE_2__* operands; } ;
typedef TYPE_1__ aarch64_inst ;
struct TYPE_6__ {int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static inline void
FUNC_2 (aarch64_inst *VAR_1, int VAR_2, int VAR_3)
{
  FUNC_0 (VAR_2 >= 0 && VAR_3 >= 0 && VAR_2 < VAR_0
   && VAR_3 < VAR_0);
  FUNC_1 (&VAR_1->operands[VAR_2], &VAR_1->operands[VAR_3],
   sizeof (aarch64_opnd_info));
  VAR_1->operands[VAR_2].idx = VAR_2;
}
