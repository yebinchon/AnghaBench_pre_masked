
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; int trg; } ;
typedef TYPE_1__ pos_trgm ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const pos_trgm *VAR_2 = (const pos_trgm *) VAR_0;
 const pos_trgm *VAR_3 = (const pos_trgm *) VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->trg, VAR_3->trg);
 if (VAR_4 != 0)
  return VAR_4;

 if (VAR_2->index < VAR_3->index)
  return -1;
 else if (VAR_2->index == VAR_3->index)
  return 0;
 else
  return 1;
}
