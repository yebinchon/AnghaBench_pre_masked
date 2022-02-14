
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; struct bpf_insn* insns; } ;
struct TYPE_4__ {TYPE_1__ ptr; } ;
struct bpf_test {TYPE_2__ u; } ;
struct bpf_insn {int dummy; } ;


 struct bpf_insn FUNC_0 (int ,int ,int) ;
 struct bpf_insn FUNC_1 () ;
 int VAR_0 ;
 struct bpf_insn FUNC_2 (int ,int ,int ,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bpf_insn* FUNC_3 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bpf_test *VAR_6)
{
 unsigned int VAR_7 = VAR_1;
 struct bpf_insn *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_8[0] = FUNC_2(VAR_0, 0, 0, VAR_7 - 2);
 VAR_8[1] = FUNC_0(VAR_2, VAR_5, 0xcbababab);
 VAR_8[2] = FUNC_1();

 for (VAR_9 = 3; VAR_9 < VAR_7 - 2; VAR_9++)
  VAR_8[VAR_9] = FUNC_0(VAR_2, VAR_5, 0xfefefefe);

 VAR_8[VAR_7 - 2] = FUNC_1();
 VAR_8[VAR_7 - 1] = FUNC_2(VAR_0, 0, 0, -(VAR_7 - 1));

 VAR_6->u.ptr.insns = VAR_8;
 VAR_6->u.ptr.len = VAR_7;

 return 0;
}
