
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct bpf_lwt_prog {struct bpf_prog* prog; int name; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (int ,int) ;
 int VAR_6 ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*,int ) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_7, struct bpf_lwt_prog *VAR_8,
     enum bpf_prog_type VAR_9)
{
 struct nlattr *VAR_10[VAR_4 + 1];
 struct bpf_prog *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_5(VAR_10, VAR_4, VAR_7,
       VAR_6, ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_10[VAR_3] || !VAR_10[VAR_5])
  return -VAR_0;

 VAR_8->name = FUNC_4(VAR_10[VAR_5], VAR_2);
 if (!VAR_8->name)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_10[VAR_3]);
 VAR_11 = FUNC_2(VAR_13, VAR_9);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_8->prog = VAR_11;

 return 0;
}
