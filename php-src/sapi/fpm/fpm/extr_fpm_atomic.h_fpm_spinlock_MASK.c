
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(atomic_t *VAR_0, int VAR_1)
{
 if (VAR_1) {
  return FUNC_0(VAR_0, 0, 1) ? 1 : 0;
 }

 for (;;) {

  if (FUNC_0(VAR_0, 0, 1)) {
   break;
  }

  FUNC_1();
 }

 return 1;
}
