
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {scalar_t__ prog_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct bpf_test *VAR_2)
{
 return !VAR_2->prog_type ||
        VAR_2->prog_type == VAR_1 ||
        VAR_2->prog_type == VAR_0;
}
