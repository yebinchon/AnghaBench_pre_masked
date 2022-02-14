
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {int retval; int prog_len; } ;


 void FUNC_0 (struct bpf_test*) ;
 void FUNC_1 (struct bpf_test*) ;

__attribute__((used)) static void FUNC_2(struct bpf_test *VAR_0)
{
 switch (VAR_0->retval) {
 case 1:
  return FUNC_0(VAR_0);
 case 2:
  return FUNC_1(VAR_0);
 default:
  VAR_0->prog_len = 0;
  break;
 }
}
