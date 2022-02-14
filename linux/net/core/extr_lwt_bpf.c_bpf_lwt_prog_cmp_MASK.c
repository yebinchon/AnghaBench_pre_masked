
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lwt_prog {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bpf_lwt_prog *VAR_0, struct bpf_lwt_prog *VAR_1)
{




 if (!VAR_0->name && !VAR_1->name)
  return 0;

 if (!VAR_0->name || !VAR_1->name)
  return 1;

 return FUNC_0(VAR_0->name, VAR_1->name);
}
