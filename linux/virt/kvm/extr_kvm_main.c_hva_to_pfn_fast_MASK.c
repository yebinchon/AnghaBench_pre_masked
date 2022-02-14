
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int kvm_pfn_t ;


 int FUNC_0 (unsigned long,int,int,struct page**) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static bool FUNC_2(unsigned long VAR_0, bool VAR_1,
       bool *VAR_2, kvm_pfn_t *VAR_3)
{
 struct page *VAR_4[1];
 int VAR_5;






 if (!(VAR_1 || VAR_2))
  return 0;

 VAR_5 = FUNC_0(VAR_0, 1, 1, VAR_4);
 if (VAR_5 == 1) {
  *VAR_3 = FUNC_1(VAR_4[0]);

  if (VAR_2)
   *VAR_2 = 1;
  return 1;
 }

 return 0;
}
