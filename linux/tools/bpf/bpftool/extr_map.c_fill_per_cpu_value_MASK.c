
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int value_size; int type; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int ) ;
 unsigned int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct bpf_map_info *VAR_0, void *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;

 if (!FUNC_1(VAR_0->type))
  return;

 VAR_3 = FUNC_0();
 VAR_4 = FUNC_3(VAR_0->value_size, 8);
 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++)
  FUNC_2(VAR_1 + VAR_2 * VAR_4, VAR_1, VAR_0->value_size);
}
