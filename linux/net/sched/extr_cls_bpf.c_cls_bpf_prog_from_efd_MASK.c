
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* chain; } ;
struct nlattr {int dummy; } ;
struct cls_bpf_prog {char* bpf_name; struct bpf_prog* filter; int * bpf_ops; } ;
struct bpf_prog {scalar_t__ dst_needed; } ;
struct TYPE_2__ {int block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct bpf_prog* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (struct nlattr*) ;
 char* FUNC_5 (struct nlattr*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nlattr **VAR_6, struct cls_bpf_prog *VAR_7,
     u32 VAR_8, const struct tcf_proto *VAR_9)
{
 struct bpf_prog *VAR_10;
 char *VAR_11 = ((void*)0);
 bool VAR_12;
 u32 VAR_13;

 VAR_13 = FUNC_4(VAR_6[VAR_3]);
 VAR_12 = VAR_8 & VAR_5;

 VAR_10 = FUNC_2(VAR_13, VAR_0, VAR_12);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 if (VAR_6[VAR_4]) {
  VAR_11 = FUNC_5(VAR_6[VAR_4], VAR_2);
  if (!VAR_11) {
   FUNC_3(VAR_10);
   return -VAR_1;
  }
 }

 VAR_7->bpf_ops = ((void*)0);
 VAR_7->bpf_name = VAR_11;
 VAR_7->filter = VAR_10;

 if (VAR_10->dst_needed)
  FUNC_6(VAR_9->chain->block);

 return 0;
}
