
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct cache_head *VAR_4)
{
 if (!FUNC_1(VAR_1, &VAR_4->flags))
  return -VAR_2;
 else {

  if (FUNC_1(VAR_0, &VAR_4->flags))
   return -VAR_3;
  else {






   FUNC_0();
   return 0;
  }
 }
}
