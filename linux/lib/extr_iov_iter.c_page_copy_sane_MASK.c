
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 struct page* FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int) ;
 size_t FUNC_3 (struct page*) ;

__attribute__((used)) static inline bool FUNC_4(struct page *VAR_2, size_t VAR_3, size_t VAR_4)
{
 struct page *VAR_5;
 size_t VAR_6 = VAR_4 + VAR_3;
 if (VAR_4 <= VAR_6 && VAR_6 <= VAR_1)
  return 1;

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 += (VAR_2 - VAR_5) << VAR_0;

 if (FUNC_2(VAR_4 <= VAR_6 && VAR_6 <= (FUNC_3(VAR_5))))
  return 1;
 FUNC_0(1);
 return 0;
}
