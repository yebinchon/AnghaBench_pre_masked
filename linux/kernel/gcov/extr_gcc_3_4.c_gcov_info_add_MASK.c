
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_info {TYPE_1__* counts; } ;
struct TYPE_2__ {unsigned int num; scalar_t__* values; } ;


 unsigned int FUNC_0 (struct gcov_info*) ;

void FUNC_1(struct gcov_info *VAR_0, struct gcov_info *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->counts[VAR_2].num; VAR_3++) {
   VAR_0->counts[VAR_2].values[VAR_3] +=
    VAR_1->counts[VAR_2].values[VAR_3];
  }
 }
}
