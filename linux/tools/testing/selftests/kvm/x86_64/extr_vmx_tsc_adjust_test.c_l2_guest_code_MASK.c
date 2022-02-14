
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 uint64_t VAR_3 = FUNC_1() - VAR_2;

 FUNC_2(VAR_0, VAR_3 - VAR_1);
 FUNC_0(-2 * VAR_1);


 __asm__ __volatile__("vmcall");
}
