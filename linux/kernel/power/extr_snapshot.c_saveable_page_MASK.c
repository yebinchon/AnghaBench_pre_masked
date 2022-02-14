
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 struct zone* FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 struct page* FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;

__attribute__((used)) static struct page *FUNC_12(struct zone *VAR_0, unsigned long VAR_1)
{
 struct page *VAR_2;

 if (!FUNC_9(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_8(VAR_1);
 if (!VAR_2 || FUNC_6(VAR_2) != VAR_0)
  return ((void*)0);

 FUNC_0(FUNC_1(VAR_2));

 if (FUNC_10(VAR_2) || FUNC_11(VAR_2))
  return ((void*)0);

 if (FUNC_2(VAR_2))
  return ((void*)0);

 if (FUNC_3(VAR_2)
     && (!FUNC_4(VAR_2) || FUNC_7(VAR_1)))
  return ((void*)0);

 if (FUNC_5(VAR_2))
  return ((void*)0);

 return VAR_2;
}
