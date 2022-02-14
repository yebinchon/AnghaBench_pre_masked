
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_def {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(const struct bpf_map_def *VAR_4)
{
 return VAR_4->type == VAR_3 ||
        VAR_4->type == VAR_1 ||
        VAR_4->type == VAR_0 ||
        VAR_4->type == VAR_2;
}
