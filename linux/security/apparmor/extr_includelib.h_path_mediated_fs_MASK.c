
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct dentry *VAR_1)
{
 return !(VAR_1->d_sb->s_flags & VAR_0);
}
