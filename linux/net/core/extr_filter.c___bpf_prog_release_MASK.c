
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;

__attribute__((used)) static void FUNC_3(struct bpf_prog *VAR_1)
{
 if (VAR_1->type == VAR_0) {
  FUNC_1(VAR_1);
 } else {
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
 }
}
