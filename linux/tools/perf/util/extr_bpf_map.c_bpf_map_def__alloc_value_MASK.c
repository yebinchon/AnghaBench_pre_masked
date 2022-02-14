
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_def {int value_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_map_def const*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(const struct bpf_map_def *VAR_1)
{
 if (FUNC_0(VAR_1))
  return FUNC_1(FUNC_2(VAR_1->value_size, 8) * FUNC_3(VAR_0));

 return FUNC_1(VAR_1->value_size);
}
