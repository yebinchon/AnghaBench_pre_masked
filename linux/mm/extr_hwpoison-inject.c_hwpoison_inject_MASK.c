
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int VAR_4 ;
 int FUNC_6 (unsigned long,int ) ;
 struct page* FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (char*,unsigned long) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int ) ;

__attribute__((used)) static int FUNC_12(void *VAR_5, u64 VAR_6)
{
 unsigned long VAR_7 = VAR_6;
 struct page *VAR_8;
 struct page *VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_0))
  return -VAR_2;

 if (!FUNC_8(VAR_7))
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_7);
 VAR_9 = FUNC_3(VAR_8);



 if (!FUNC_4(VAR_8))
  return 0;

 if (!VAR_4)
  goto inject;

 FUNC_11(VAR_9, 0);



 if (!FUNC_1(VAR_9) && !FUNC_0(VAR_8))
  goto put_out;






 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto put_out;

inject:
 FUNC_9("Injecting memory failure at pfn %#lx\n", VAR_7);
 return FUNC_6(VAR_7, VAR_3);
put_out:
 FUNC_10(VAR_8);
 return 0;
}
