
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sidtab {TYPE_1__* isids; } ;
struct context {int dummy; } ;
struct TYPE_2__ {struct context context; scalar_t__ set; } ;



__attribute__((used)) static struct context *FUNC_0(struct sidtab *VAR_0, u32 VAR_1)
{
 return VAR_0->isids[VAR_1 - 1].set ? &VAR_0->isids[VAR_1 - 1].context : ((void*)0);
}
