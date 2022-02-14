
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sk_storage_elem {int map_node; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(const struct bpf_sk_storage_elem *VAR_0)
{
 return !FUNC_0(&VAR_0->map_node);
}
