
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef unsigned long phys_addr_t ;
typedef int pgprot_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int *,unsigned long,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int * FUNC_3 (int *,int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_4(p4d_t *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, phys_addr_t VAR_5, pgprot_t VAR_6)
{
 pud_t *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_3(&VAR_1, VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;
 do {
  VAR_8 = FUNC_2(VAR_3, VAR_4);

  if (FUNC_1(VAR_7, VAR_3, VAR_8, VAR_5, VAR_6))
   continue;

  if (FUNC_0(VAR_7, VAR_3, VAR_8, VAR_5, VAR_6))
   return -VAR_0;
 } while (VAR_7++, VAR_5 += (VAR_8 - VAR_3), VAR_3 = VAR_8, VAR_3 != VAR_4);
 return 0;
}
