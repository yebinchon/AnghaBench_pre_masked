
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int kvm_pfn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned long,int,int,struct page**) ;
 int FUNC_1 (unsigned long,int,struct page**,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_3, bool *VAR_4, bool VAR_5,
      bool *VAR_6, kvm_pfn_t *VAR_7)
{
 unsigned int VAR_8 = VAR_0;
 struct page *VAR_9;
 int VAR_10 = 0;

 FUNC_2();

 if (VAR_6)
  *VAR_6 = VAR_5;

 if (VAR_5)
  VAR_8 |= VAR_2;
 if (VAR_4)
  VAR_8 |= VAR_1;

 VAR_10 = FUNC_1(VAR_3, 1, &VAR_9, VAR_8);
 if (VAR_10 != 1)
  return VAR_10;


 if (FUNC_5(!VAR_5) && VAR_6) {
  struct page *VAR_11;

  if (FUNC_0(VAR_3, 1, 1, &VAR_11) == 1) {
   *VAR_6 = 1;
   FUNC_4(VAR_9);
   VAR_9 = VAR_11;
  }
 }
 *VAR_7 = FUNC_3(VAR_9);
 return VAR_10;
}
