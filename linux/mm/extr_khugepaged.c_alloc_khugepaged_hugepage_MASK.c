
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct page* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static inline struct page *FUNC_3(void)
{
 struct page *VAR_1;

 VAR_1 = FUNC_1(FUNC_0(),
      VAR_0);
 if (VAR_1)
  FUNC_2(VAR_1);
 return VAR_1;
}
