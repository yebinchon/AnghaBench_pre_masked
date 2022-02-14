
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 () ;
 struct bpf_insn FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,struct bpf_insn*,int) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 + 1 < VAR_3; VAR_5 += 2) {
  struct bpf_insn VAR_7[] = {
   FUNC_2(VAR_6++ % VAR_1, VAR_4)
  };

  FUNC_3(&VAR_2[VAR_5], VAR_7, sizeof(VAR_7));
 }
 if (VAR_3 % 2 == 0)
  VAR_2[VAR_3 - 2] = FUNC_0(VAR_0, VAR_5 % VAR_1, 42);
 VAR_2[VAR_3 - 1] = FUNC_1();
}
