
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct memory_bitmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct memory_bitmap*,unsigned int) ;
 struct page* FUNC_1 (int ) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct memory_bitmap*,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct memory_bitmap *VAR_5,
   unsigned int VAR_6, unsigned int VAR_7)
{
 if (VAR_7 > 0) {
  if (FUNC_2(VAR_2))
   goto err_out;
  if (VAR_7 > VAR_3) {
   VAR_7 -= VAR_3;
   VAR_6 += FUNC_0(VAR_5, VAR_7);
  }
 }
 if (VAR_6 > VAR_4) {
  VAR_6 -= VAR_4;
  while (VAR_6-- > 0) {
   struct page *VAR_8;

   VAR_8 = FUNC_1(VAR_1);
   if (!VAR_8)
    goto err_out;
   FUNC_3(VAR_5, FUNC_4(VAR_8));
  }
 }

 return 0;

 err_out:
 FUNC_5();
 return -VAR_0;
}
