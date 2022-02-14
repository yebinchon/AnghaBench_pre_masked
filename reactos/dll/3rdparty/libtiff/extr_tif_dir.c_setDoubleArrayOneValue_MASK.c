
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double*) ;
 double* FUNC_1 (size_t) ;

__attribute__((used)) static void
FUNC_2(double** VAR_0, double VAR_1, size_t VAR_2)
{
 if (*VAR_0)
  FUNC_0(*VAR_0);
 *VAR_0 = FUNC_1(VAR_2*sizeof(double));
 if (*VAR_0)
 {
  while (VAR_2--)
   ((double*)*VAR_0)[VAR_2] = VAR_1;
 }
}
