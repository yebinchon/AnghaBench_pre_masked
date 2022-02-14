
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ offset; } ;
struct syscall_tp {TYPE_1__ id; int args; } ;
struct evsel {struct syscall_tp* priv; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct evsel *VAR_0)
{
 struct syscall_tp *VAR_1 = VAR_0->priv;

 return FUNC_0(&VAR_1->args, VAR_1->id.offset + sizeof(u64));
}
