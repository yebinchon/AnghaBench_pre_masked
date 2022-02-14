
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,int,int,int,int) ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 unsigned long VAR_0;
 int VAR_1 = 0;

 VAR_0 = 0;
 do {
  unsigned long VAR_2;


  FUNC_0(VAR_0, FUNC_1() % 113 + 1, FUNC_1() % 71,
    FUNC_1() % 157, FUNC_1() % 91 + 1);
  VAR_2 = VAR_0;
  VAR_0 += FUNC_1() % 1000000;
  VAR_0 %= 1ULL << 33;
  if (VAR_0 < VAR_2)
   VAR_1 = 1;
 } while (!VAR_1);
}
