
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ phys_addr_t ;
typedef int pgd_t ;


 int FUNC_0 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(pgd_t *VAR_0, unsigned long VAR_1,
         phys_addr_t VAR_2, u64 VAR_3)
{
 pgd_t *VAR_4;
 phys_addr_t VAR_5 = VAR_2, VAR_6 = VAR_2 + VAR_3;
 phys_addr_t VAR_7;





 VAR_4 = VAR_0 + FUNC_0(VAR_5, VAR_1);
 do {
  VAR_7 = FUNC_1(VAR_5, VAR_6);
  if (!FUNC_2(*VAR_4))
   FUNC_3(VAR_4, VAR_5, VAR_7);
 } while (VAR_4++, VAR_5 = VAR_7, VAR_5 != VAR_6);
}
