
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct address_space*,struct page*,struct page*,int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct address_space*,struct page*) ;

__attribute__((used)) static int FUNC_5(struct address_space *VAR_3,
 struct page *VAR_4, struct page *VAR_5, enum migrate_mode VAR_6)
{
 if (FUNC_0(VAR_5)) {

  switch (VAR_6) {
  case 129:
  case 128:
   break;
  default:
   return -VAR_1;
  }
  return FUNC_4(VAR_3, VAR_5);
 }





 if (FUNC_2(VAR_5) &&
     !FUNC_3(VAR_5, VAR_2))
  return VAR_6 == 129 ? -VAR_0 : -VAR_1;

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
