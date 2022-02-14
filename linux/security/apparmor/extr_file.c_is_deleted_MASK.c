
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_nlink; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;

__attribute__((used)) static inline bool FUNC_2(struct dentry *VAR_0)
{
 if (FUNC_1(VAR_0) && FUNC_0(VAR_0)->i_nlink == 0)
  return 1;
 return 0;
}
