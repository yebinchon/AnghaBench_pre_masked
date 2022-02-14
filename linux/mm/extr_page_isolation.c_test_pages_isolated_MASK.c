
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lock; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,int) ;
 int FUNC_2 (struct page*) ;
 struct zone* FUNC_3 (struct page*) ;
 unsigned long VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long,unsigned long) ;

int FUNC_7(unsigned long VAR_2, unsigned long VAR_3,
   bool VAR_4)
{
 unsigned long VAR_5, VAR_6;
 struct page *VAR_7;
 struct zone *VAR_8;






 for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5 += VAR_1) {
  VAR_7 = FUNC_0(VAR_5, VAR_1);
  if (VAR_7 && !FUNC_2(VAR_7))
   break;
 }
 VAR_7 = FUNC_0(VAR_2, VAR_3 - VAR_2);
 if ((VAR_5 < VAR_3) || !VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7);
 FUNC_4(&VAR_8->lock, VAR_6);
 VAR_5 = FUNC_1(VAR_2, VAR_3,
      VAR_4);
 FUNC_5(&VAR_8->lock, VAR_6);

 FUNC_6(VAR_2, VAR_3, VAR_5);

 return VAR_5 < VAR_3 ? -VAR_0 : 0;
}
