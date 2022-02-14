
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_5(pmd_t *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, phys_addr_t VAR_7, pgprot_t VAR_8)
{
 pte_t *VAR_9;
 u64 VAR_10;

 VAR_10 = VAR_7 >> VAR_1;
 VAR_9 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_9)
  return -VAR_0;
 do {
  FUNC_0(!FUNC_3(*VAR_9));
  FUNC_4(&VAR_3, VAR_5, VAR_9, FUNC_1(VAR_10, VAR_8));
  VAR_10++;
 } while (VAR_9++, VAR_5 += VAR_2, VAR_5 != VAR_6);
 return 0;
}
