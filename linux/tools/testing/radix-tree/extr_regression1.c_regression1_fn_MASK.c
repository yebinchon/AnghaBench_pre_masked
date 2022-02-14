
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lock; int count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,struct page**) ;
 int VAR_1 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct page* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void *FUNC_12(void *VAR_3)
{
 FUNC_8();

 if (FUNC_3(&VAR_2) ==
   VAR_0) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < 1000000; VAR_4++) {
   struct page *VAR_5;

   VAR_5 = FUNC_1(0);
   FUNC_10(&VAR_1);
   FUNC_7(&VAR_1, 0, VAR_5);
   FUNC_11(&VAR_1);

   VAR_5 = FUNC_1(1);
   FUNC_10(&VAR_1);
   FUNC_7(&VAR_1, 1, VAR_5);
   FUNC_11(&VAR_1);

   FUNC_10(&VAR_1);
   VAR_5 = FUNC_6(&VAR_1, 1);
   FUNC_4(&VAR_5->lock);
   VAR_5->count--;
   FUNC_5(&VAR_5->lock);
   FUNC_11(&VAR_1);
   FUNC_2(VAR_5);

   FUNC_10(&VAR_1);
   VAR_5 = FUNC_6(&VAR_1, 0);
   FUNC_4(&VAR_5->lock);
   VAR_5->count--;
   FUNC_5(&VAR_5->lock);
   FUNC_11(&VAR_1);
   FUNC_2(VAR_5);
  }
 } else {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < 100000000; VAR_6++) {
   struct page *VAR_7[10];

   FUNC_0(0, 10, VAR_7);
  }
 }

 FUNC_9();

 return ((void*)0);
}
