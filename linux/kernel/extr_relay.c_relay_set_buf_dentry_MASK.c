
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {int early_bytes; struct dentry* dentry; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_size; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;

__attribute__((used)) static inline void FUNC_1(struct rchan_buf *VAR_0,
     struct dentry *VAR_1)
{
 VAR_0->dentry = VAR_1;
 FUNC_0(VAR_0->dentry)->i_size = VAR_0->early_bytes;
}
