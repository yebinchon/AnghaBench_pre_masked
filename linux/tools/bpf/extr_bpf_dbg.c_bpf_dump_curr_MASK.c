
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_filter {int jt; int jf; int k; int code; } ;
struct bpf_regs {int Pc; scalar_t__* M; int R; scalar_t__ Rs; int X; int A; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock_filter,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct bpf_regs *VAR_1, struct sock_filter *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_1("pc:       [%u]\n", VAR_1->Pc);
 FUNC_1("code:     [%u] jt[%u] jf[%u] k[%u]\n",
    VAR_2->code, VAR_2->jt, VAR_2->jf, VAR_2->k);
 FUNC_1("curr:     ");
 FUNC_0(*VAR_2, VAR_1->Pc);

 if (VAR_2->jt || VAR_2->jf) {
  FUNC_1("jt:       ");
  FUNC_0(*(VAR_2 + VAR_2->jt + 1), VAR_1->Pc + VAR_2->jt + 1);
  FUNC_1("jf:       ");
  FUNC_0(*(VAR_2 + VAR_2->jf + 1), VAR_1->Pc + VAR_2->jf + 1);
 }

 FUNC_1("A:        [%#08x][%u]\n", VAR_1->A, VAR_1->A);
 FUNC_1("X:        [%#08x][%u]\n", VAR_1->X, VAR_1->X);
 if (VAR_1->Rs)
  FUNC_1("ret:      [%#08x][%u]!\n", VAR_1->R, VAR_1->R);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->M[VAR_3]) {
   VAR_4++;
   FUNC_1("M[%d]: [%#08x][%u]\n", VAR_3, VAR_1->M[VAR_3], VAR_1->M[VAR_3]);
  }
 }
 if (VAR_4 == 0)
  FUNC_1("M[0,%d]:  [%#08x][%u]\n", VAR_0 - 1, 0, 0);
}
