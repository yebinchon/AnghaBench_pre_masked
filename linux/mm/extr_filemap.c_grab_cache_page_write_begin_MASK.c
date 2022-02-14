
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct address_space*) ;
 struct page* FUNC_1 (struct address_space*,int ,int,int ) ;
 int FUNC_2 (struct page*) ;

struct page *FUNC_3(struct address_space *VAR_5,
     pgoff_t VAR_6, unsigned VAR_7)
{
 struct page *VAR_8;
 int VAR_9 = VAR_2|VAR_4|VAR_1;

 if (VAR_7 & VAR_0)
  VAR_9 |= VAR_3;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_9,
   FUNC_0(VAR_5));
 if (VAR_8)
  FUNC_2(VAR_8);

 return VAR_8;
}
