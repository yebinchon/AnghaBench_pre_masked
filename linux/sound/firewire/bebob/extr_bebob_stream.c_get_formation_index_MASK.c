
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int
FUNC_1(unsigned int VAR_2, unsigned int *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4] == VAR_2) {
   *VAR_3 = VAR_4;
   return 0;
  }
 }
 return -VAR_0;
}
