
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct htcp {scalar_t__ minRTT; scalar_t__ maxRTT; } ;


 int FUNC_0 (struct htcp*) ;
 int FUNC_1 (struct htcp*,scalar_t__,scalar_t__) ;
 struct htcp* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct htcp *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2 = VAR_1->minRTT;
 u32 VAR_3 = VAR_1->maxRTT;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1);


 if (VAR_2 > 0 && VAR_3 > VAR_2)
  VAR_1->maxRTT = VAR_2 + ((VAR_3 - VAR_2) * 95) / 100;
}
