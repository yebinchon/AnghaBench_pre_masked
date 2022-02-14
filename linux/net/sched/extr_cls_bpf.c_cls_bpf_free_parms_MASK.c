
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cls_bpf_prog {int bpf_ops; int bpf_name; int filter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cls_bpf_prog*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cls_bpf_prog *VAR_0)
{
 if (FUNC_2(VAR_0))
  FUNC_1(VAR_0->filter);
 else
  FUNC_0(VAR_0->filter);

 FUNC_3(VAR_0->bpf_name);
 FUNC_3(VAR_0->bpf_ops);
}
