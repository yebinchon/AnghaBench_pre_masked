
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotation_line {int data_nr; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__* percent; } ;



__attribute__((used)) static double FUNC_0(struct annotation_line *VAR_0, struct annotation_line *VAR_1,
        int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->data_nr; VAR_3++) {
  if (VAR_0->data[VAR_3].percent[VAR_2] == VAR_1->data[VAR_3].percent[VAR_2])
   continue;
  return VAR_0->data[VAR_3].percent[VAR_2] -
      VAR_1->data[VAR_3].percent[VAR_2];
 }
 return 0;
}
