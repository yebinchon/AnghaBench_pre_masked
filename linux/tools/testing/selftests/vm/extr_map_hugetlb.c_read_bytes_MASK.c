
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(char *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (*(VAR_1 + VAR_2) != (char)VAR_2) {
   FUNC_1("Mismatch at %lu\n", VAR_2);
   return 1;
  }
 return 0;
}
