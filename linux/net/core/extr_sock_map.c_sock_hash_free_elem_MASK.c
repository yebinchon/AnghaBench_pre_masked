
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_htab_elem {int dummy; } ;
struct bpf_htab {int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_htab_elem*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct bpf_htab *VAR_1,
    struct bpf_htab_elem *VAR_2)
{
 FUNC_0(&VAR_1->count);
 FUNC_1(VAR_2, VAR_0);
}
