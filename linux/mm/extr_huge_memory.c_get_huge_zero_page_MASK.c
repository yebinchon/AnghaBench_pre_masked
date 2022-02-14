
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct page*,int ) ;
 struct page* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static struct page *FUNC_11(void)
{
 struct page *VAR_8;
retry:
 if (FUNC_8(FUNC_3(&VAR_7)))
  return FUNC_0(VAR_6);

 VAR_8 = FUNC_2((VAR_0 | VAR_5) & ~VAR_4,
   VAR_1);
 if (!VAR_8) {
  FUNC_7(VAR_3);
  return ((void*)0);
 }
 FUNC_7(VAR_2);
 FUNC_9();
 if (FUNC_5(&VAR_6, ((void*)0), VAR_8)) {
  FUNC_10();
  FUNC_1(VAR_8, FUNC_6(VAR_8));
  goto retry;
 }


 FUNC_4(&VAR_7, 2);
 FUNC_10();
 return FUNC_0(VAR_6);
}
