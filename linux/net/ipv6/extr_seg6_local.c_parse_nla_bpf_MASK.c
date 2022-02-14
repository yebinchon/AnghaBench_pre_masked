
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct bpf_prog* prog; int name; } ;
struct seg6_local_lwt {TYPE_1__ bpf; } ;
struct nlattr {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 struct bpf_prog* FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*,int ) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct nlattr **VAR_9, struct seg6_local_lwt *VAR_10)
{
 struct nlattr *VAR_11[VAR_6 + 1];
 struct bpf_prog *VAR_12;
 int VAR_13;
 u32 VAR_14;

 VAR_13 = FUNC_6(VAR_11, VAR_6,
       VAR_9[VAR_4],
       VAR_8, ((void*)0));
 if (VAR_13 < 0)
  return VAR_13;

 if (!VAR_11[VAR_5] || !VAR_11[VAR_7])
  return -VAR_1;

 VAR_10->bpf.name = FUNC_5(VAR_11[VAR_7], VAR_3);
 if (!VAR_10->bpf.name)
  return -VAR_2;

 VAR_14 = FUNC_4(VAR_11[VAR_5]);
 VAR_12 = FUNC_2(VAR_14, VAR_0);
 if (FUNC_0(VAR_12)) {
  FUNC_3(VAR_10->bpf.name);
  return FUNC_1(VAR_12);
 }

 VAR_10->bpf.prog = VAR_12;
 return 0;
}
