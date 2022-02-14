
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_3, unsigned int VAR_4,
       unsigned int *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  unsigned int VAR_7 = 4 * VAR_3 * VAR_2[VAR_6] /
   VAR_1[VAR_6];
  if (3 * VAR_4 <= VAR_7 && VAR_7 < 13 * VAR_4) {
   *VAR_5 = VAR_7 / 4;
   return VAR_6;
  }
 }

 return -VAR_0;
}
