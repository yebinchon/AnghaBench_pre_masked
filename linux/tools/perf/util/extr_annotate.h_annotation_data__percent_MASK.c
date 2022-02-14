
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotation_data {double* percent; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline double FUNC_0(struct annotation_data *VAR_1,
           unsigned int VAR_2)
{
 return VAR_2 < VAR_0 ? VAR_1->percent[VAR_2] : -1;
}
