
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct socket {scalar_t__ protocol; int sending; } ;


 scalar_t__ FUNC_0 (int*,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(struct socket *VAR_1, int VAR_2) {
 if (VAR_1->protocol != VAR_0)
  return;
 for (;;) {
  uint32_t VAR_3 = VAR_1->sending;
  if ((VAR_3 >> 16) == FUNC_1(VAR_2)) {
   if ((VAR_3 & 0xffff) == 0xffff) {

    continue;
   }

   if (FUNC_0(&VAR_1->sending, VAR_3, VAR_3 + 1))
    return;

  } else {

   return;
  }
 }
}
