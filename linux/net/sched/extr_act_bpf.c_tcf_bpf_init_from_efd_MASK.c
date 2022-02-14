
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_bpf_cfg {char* bpf_name; int is_ebpf; struct bpf_prog* filter; } ;
struct nlattr {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct bpf_prog* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (struct nlattr*) ;
 char* FUNC_5 (struct nlattr*,int ) ;

__attribute__((used)) static int FUNC_6(struct nlattr **VAR_5, struct tcf_bpf_cfg *VAR_6)
{
 struct bpf_prog *VAR_7;
 char *VAR_8 = ((void*)0);
 u32 VAR_9;

 VAR_9 = FUNC_4(VAR_5[VAR_3]);

 VAR_7 = FUNC_2(VAR_9, VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (VAR_5[VAR_4]) {
  VAR_8 = FUNC_5(VAR_5[VAR_4], VAR_2);
  if (!VAR_8) {
   FUNC_3(VAR_7);
   return -VAR_1;
  }
 }

 VAR_6->bpf_name = VAR_8;
 VAR_6->filter = VAR_7;
 VAR_6->is_ebpf = 1;

 return 0;
}
