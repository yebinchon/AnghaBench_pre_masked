
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct page **VAR_2, const unsigned *VAR_3, unsigned VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_4 < VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2[VAR_5] = (struct page *)(unsigned long)
      ((1 + VAR_3[VAR_5]) * VAR_1);
}
