
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned int,int ,struct page**) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, unsigned int VAR_3,
   struct page **VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5 ? VAR_1 : 0,
      VAR_4);

 if (VAR_6 >= 0 && VAR_6 < VAR_3) {
  while (VAR_6--)
   FUNC_1(VAR_4[VAR_6]);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
