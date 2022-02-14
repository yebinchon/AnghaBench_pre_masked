
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef unsigned long phys_addr_t ;
typedef int pgprot_t ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(pud_t *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, phys_addr_t VAR_4,
    pgprot_t VAR_5)
{
 if (!FUNC_1())
  return 0;

 if ((VAR_3 - VAR_2) != VAR_0)
  return 0;

 if (!FUNC_0(VAR_2, VAR_0))
  return 0;

 if (!FUNC_0(VAR_4, VAR_0))
  return 0;

 if (FUNC_3(*VAR_1) && !FUNC_2(VAR_1, VAR_2))
  return 0;

 return FUNC_4(VAR_1, VAR_4, VAR_5);
}
