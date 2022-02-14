
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSAMPROW ;
typedef int ** JSAMPIMAGE ;
typedef int * JSAMPARRAY ;
typedef size_t JDIMENSION ;


 int FUNC_0 (size_t,int **,size_t,int *) ;

void FUNC_1(JDIMENSION VAR_0,
                                        JSAMPIMAGE VAR_1,
                                        JDIMENSION VAR_2,
                                        JSAMPARRAY VAR_3)
{
  JSAMPROW VAR_4, VAR_5;

  VAR_4 = VAR_1[0][VAR_2];
  VAR_5 = VAR_3[0];

  VAR_1[0][VAR_2] = VAR_1[0][VAR_2 * 2];
  FUNC_0(VAR_0, VAR_1, VAR_2,
                                     VAR_3);

  VAR_1[0][VAR_2] = VAR_1[0][VAR_2 * 2 + 1];
  VAR_3[0] = VAR_3[1];
  FUNC_0(VAR_0, VAR_1, VAR_2,
                                     VAR_3);

  VAR_1[0][VAR_2] = VAR_4;
  VAR_3[0] = VAR_5;
}
