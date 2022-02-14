
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int size; int * vec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct aa_label *VAR_0, int VAR_1)
{
 FUNC_0(!VAR_0);
 FUNC_0(VAR_1 < 0);

 for (; VAR_1 < VAR_0->size; VAR_1++) {
  if (!FUNC_1(VAR_0->vec[VAR_1]))
   return VAR_1;
 }

 return VAR_1;
}
