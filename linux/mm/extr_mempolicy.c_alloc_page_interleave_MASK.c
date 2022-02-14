
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct page *FUNC_7(gfp_t VAR_2, unsigned VAR_3,
     unsigned VAR_4)
{
 struct page *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (!FUNC_6(&VAR_1))
  return VAR_5;
 if (VAR_5 && FUNC_2(VAR_5) == VAR_4) {
  FUNC_4();
  FUNC_1(FUNC_3(VAR_5), VAR_0);
  FUNC_5();
 }
 return VAR_5;
}
