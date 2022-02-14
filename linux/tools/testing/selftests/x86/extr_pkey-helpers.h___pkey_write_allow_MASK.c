
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,long) ;
 long FUNC_1 () ;
 int FUNC_2 (long) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0, int VAR_1)
{
 long VAR_2 = FUNC_1();
 int VAR_3 = VAR_0 * 2 + 1;

 if (VAR_1)
  VAR_2 &= (1<<VAR_3);
 else
  VAR_2 |= (1<<VAR_3);

 FUNC_2(VAR_2);
 FUNC_0("pkru now: %08x\n", FUNC_1());
}
