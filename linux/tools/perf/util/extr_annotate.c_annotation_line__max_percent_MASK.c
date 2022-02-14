
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotation_line {int * data; } ;
struct annotation {int nr_events; } ;


 double FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static double FUNC_1(struct annotation_line *VAR_0,
        struct annotation *VAR_1,
        unsigned int VAR_2)
{
 double VAR_3 = 0.0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->nr_events; VAR_4++) {
  double VAR_5;

  VAR_5 = FUNC_0(&VAR_0->data[VAR_4],
         VAR_2);

  if (VAR_5 > VAR_3)
   VAR_3 = VAR_5;
 }

 return VAR_3;
}
