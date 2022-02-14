
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pages ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct page** FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct page **FUNC_2(void)
{
 static struct page **VAR_4;
 size_t VAR_5 = VAR_2 * VAR_3 * sizeof(VAR_4[0]);

 FUNC_0(&VAR_1);

 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_5, VAR_0);
 return VAR_4;
}
