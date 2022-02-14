
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* writepage ) (struct page*,struct writeback_control*) ;} ;


 int FUNC_0 (struct address_space*,int) ;
 int FUNC_1 (struct page*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_0, struct writeback_control *VAR_1,
         void *VAR_2)
{
 struct address_space *VAR_3 = VAR_2;
 int VAR_4 = VAR_3->a_ops->writepage(VAR_0, VAR_1);
 FUNC_0(VAR_3, VAR_4);
 return VAR_4;
}
