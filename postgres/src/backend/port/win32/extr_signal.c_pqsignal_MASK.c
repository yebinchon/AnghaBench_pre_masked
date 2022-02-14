
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pqsigfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

pqsigfunc
FUNC_0(int VAR_3, pqsigfunc VAR_4)
{
 pqsigfunc VAR_5;

 if (VAR_3 >= VAR_0 || VAR_3 < 0)
  return VAR_1;
 VAR_5 = VAR_2[VAR_3];
 VAR_2[VAR_3] = VAR_4;
 return VAR_5;
}
