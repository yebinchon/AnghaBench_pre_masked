
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t DWORD ;


 int FUNC_0 () ;
 size_t FUNC_1 (int ,int *,scalar_t__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline void FUNC_3(void)
{
 DWORD VAR_2 = FUNC_1(FUNC_0(), ((void*)0), VAR_1,
           VAR_0);
 if (VAR_2 > 0) {
  VAR_1[VAR_2] = 0;
  FUNC_2("Hooked to process: %s", VAR_1);
 }

 FUNC_2("(half life scientist) everything..  seems to be in order");
}
