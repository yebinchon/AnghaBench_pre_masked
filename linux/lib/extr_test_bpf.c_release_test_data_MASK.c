
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {int aux; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(const struct bpf_test *VAR_1, void *VAR_2)
{
 if (VAR_1->aux & VAR_0)
  return;

 FUNC_0(VAR_2);
}
