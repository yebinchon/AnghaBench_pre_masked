
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info_linear {unsigned long arrays; int info; int data; } ;
struct bpf_prog_info_array_desc {int array_offset; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog_info_array_desc* VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct bpf_prog_info_linear *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; ++VAR_4) {
  struct bpf_prog_info_array_desc *VAR_5;
  __u64 VAR_6, VAR_7;

  if ((VAR_3->arrays & (1UL << VAR_4)) == 0)
   continue;

  VAR_5 = VAR_2 + VAR_4;
  VAR_6 = FUNC_0(&VAR_3->info,
           VAR_5->array_offset);
  VAR_7 = VAR_6 - FUNC_2(VAR_3->data);
  FUNC_1(&VAR_3->info,
          VAR_5->array_offset, VAR_7);
 }
}
