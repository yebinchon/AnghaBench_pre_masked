
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 for (unsigned long VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  for (unsigned long VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_0)
   FUNC_1(VAR_1 + VAR_5);
  FUNC_0();
 }
}
