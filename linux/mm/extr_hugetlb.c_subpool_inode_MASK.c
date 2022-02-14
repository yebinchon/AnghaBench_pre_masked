
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct hugepage_subpool {int dummy; } ;
struct TYPE_2__ {struct hugepage_subpool* spool; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline struct hugepage_subpool *FUNC_1(struct inode *VAR_0)
{
 return FUNC_0(VAR_0->i_sb)->spool;
}
