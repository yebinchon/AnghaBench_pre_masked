
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int value_size; int type; } ;


 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void *FUNC_4(struct bpf_map_info *VAR_0)
{
 if (FUNC_2(VAR_0->type))
  return FUNC_1(FUNC_3(VAR_0->value_size, 8) *
         FUNC_0());
 else
  return FUNC_1(VAR_0->value_size);
}
