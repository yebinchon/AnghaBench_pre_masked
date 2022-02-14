
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct seg6_local_lwt {TYPE_1__ bpf; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seg6_local_lwt *VAR_0, struct seg6_local_lwt *VAR_1)
{
 if (!VAR_0->bpf.name && !VAR_1->bpf.name)
  return 0;

 if (!VAR_0->bpf.name || !VAR_1->bpf.name)
  return 1;

 return FUNC_0(VAR_0->bpf.name, VAR_1->bpf.name);
}
