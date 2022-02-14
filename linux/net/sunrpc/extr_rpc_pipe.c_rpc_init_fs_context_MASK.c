
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int * ops; TYPE_1__* net_ns; int user_ns; } ;
struct TYPE_2__ {int user_ns; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_1)
{
 FUNC_1(VAR_1->user_ns);
 VAR_1->user_ns = FUNC_0(VAR_1->net_ns->user_ns);
 VAR_1->ops = &VAR_0;
 return 0;
}
