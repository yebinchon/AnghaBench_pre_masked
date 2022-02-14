
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Pointer ;
typedef int PagetableEntry ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (long,int) ;
 long FUNC_1 (long,scalar_t__) ;

long
FUNC_2(double VAR_1)
{
 long VAR_2;







 VAR_2 = VAR_1 /
  (sizeof(PagetableEntry) + sizeof(Pointer) + sizeof(Pointer));
 VAR_2 = FUNC_1(VAR_2, VAR_0 - 1);
 VAR_2 = FUNC_0(VAR_2, 16);

 return VAR_2;
}
