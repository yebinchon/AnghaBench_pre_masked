
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (struct sock*,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct sock *VAR_1, u16 *VAR_2)
{
 u16 VAR_3 = VAR_0;

 do {
  if (FUNC_0(VAR_1, VAR_3)) {
   *VAR_2 = VAR_3;
   VAR_0 = VAR_3 + 1;
   return 1;
  }

  VAR_3++;
 } while (VAR_3 != VAR_0);

 return 0;
}
