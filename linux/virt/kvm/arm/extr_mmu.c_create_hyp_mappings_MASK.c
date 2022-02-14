
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;
typedef int pgprot_t ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned long,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (void*) ;

int FUNC_6(void *VAR_4, void *VAR_5, pgprot_t VAR_6)
{
 phys_addr_t VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = FUNC_4((unsigned long)VAR_4);
 unsigned long VAR_10 = FUNC_4((unsigned long)VAR_5);

 if (FUNC_3())
  return 0;

 VAR_9 = VAR_9 & VAR_0;
 VAR_10 = FUNC_0(VAR_10);

 for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8 += VAR_1) {
  int VAR_11;

  VAR_7 = FUNC_5(VAR_4 + VAR_8 - VAR_9);
  VAR_11 = FUNC_1(VAR_3, VAR_2,
         VAR_8, VAR_8 + VAR_1,
         FUNC_2(VAR_7),
         VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
