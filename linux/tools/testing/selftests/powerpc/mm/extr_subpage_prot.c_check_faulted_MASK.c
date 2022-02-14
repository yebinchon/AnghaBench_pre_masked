
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,void*,...) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_3, long VAR_4, long VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_5 == ((VAR_4 + 3) % 16));

 if (VAR_6)
  VAR_7 |= (VAR_5 == ((VAR_4 + 1) % 16));

 if (VAR_2 != VAR_7) {
  FUNC_0("Failed at %p (p=%ld,sp=%ld,w=%d), want=%s, got=%s !\n",
         VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7 ? "fault" : "pass",
         VAR_2 ? "fault" : "pass");
  ++VAR_1;
 }

 if (VAR_2) {
  if (VAR_0 != VAR_3) {
   FUNC_0("Fault expected at %p and happened at %p !\n",
          VAR_3, VAR_0);
  }
  VAR_2 = 0;
  asm volatile("sync" : : : "memory");
 }
}
