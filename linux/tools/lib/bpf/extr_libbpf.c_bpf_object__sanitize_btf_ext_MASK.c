
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int btf_func; } ;
struct bpf_object {int * btf_ext; TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bpf_object *VAR_0)
{
 if (!VAR_0->btf_ext)
  return;

 if (!VAR_0->caps.btf_func) {
  FUNC_0(VAR_0->btf_ext);
  VAR_0->btf_ext = ((void*)0);
 }
}
