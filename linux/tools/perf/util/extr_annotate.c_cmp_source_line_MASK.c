
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotation_line {int data_nr; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ percent_sum; } ;



__attribute__((used)) static int FUNC_0(struct annotation_line *VAR_0, struct annotation_line *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->data_nr; VAR_2++) {
  if (VAR_0->data[VAR_2].percent_sum == VAR_1->data[VAR_2].percent_sum)
   continue;
  return VAR_0->data[VAR_2].percent_sum > VAR_1->data[VAR_2].percent_sum;
 }

 return 0;
}
