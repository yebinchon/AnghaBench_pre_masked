
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(time64_t VAR_7)
{
 unsigned long VAR_8;
 time64_t VAR_9 = FUNC_2();

 FUNC_1("%lld", VAR_7 - VAR_9);

 if (VAR_7 <= VAR_9 || FUNC_5(VAR_1, &VAR_3)) {
  FUNC_0("IMMEDIATE");
  FUNC_4(&VAR_6);
 } else if (VAR_7 < VAR_4) {
  FUNC_0("DEFERRED");
  VAR_4 = VAR_7;
  VAR_8 = VAR_2 + (VAR_7 - VAR_9) * VAR_0;
  FUNC_3(&VAR_5, VAR_8);
 }
}
