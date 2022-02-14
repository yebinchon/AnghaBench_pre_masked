
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 double** VAR_0 ;
 int FUNC_0 (char*,int ,double,double,double,...) ;
 int * VAR_1 ;
 double** VAR_2 ;
 TYPE_1__* VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_6, double *VAR_7,
     unsigned int VAR_8)
{
 *VAR_7 = 0.0;

 if (!VAR_1[VAR_8])
  return -1;

 *VAR_7 = (100.0 *
  (VAR_0[VAR_6][VAR_8] - VAR_2[VAR_6][VAR_8])) /
  (VAR_4 - VAR_5);

 FUNC_0("%s: previous: %llu - current: %llu - (%u)\n",
  VAR_3[VAR_6].name, VAR_2[VAR_6][VAR_8],
  VAR_0[VAR_6][VAR_8], VAR_8);

 FUNC_0("%s: tsc_diff: %llu - count_diff: %llu - percent: %2.f (%u)\n",
        VAR_3[VAR_6].name,
        (unsigned long long) VAR_4 - VAR_5,
        VAR_0[VAR_6][VAR_8] - VAR_2[VAR_6][VAR_8],
        *VAR_7, VAR_8);

 return 0;
}
