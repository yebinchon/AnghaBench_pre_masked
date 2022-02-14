
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_fprog_kern {unsigned int len; void* filter; } ;
struct bpf_prog {unsigned int len; TYPE_1__* aux; int insnsi; int type; } ;
struct bpf_insn {int dummy; } ;
typedef int __u8 ;
struct TYPE_4__ {int aux; int expected_errcode; int stack_depth; } ;
struct TYPE_3__ {int stack_depth; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 struct bpf_prog* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bpf_prog**,struct sock_fprog_kern*) ;
 struct bpf_prog* FUNC_2 (struct bpf_prog*,int*) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,void*,int) ;
 int FUNC_7 (char*,...) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static struct bpf_prog *FUNC_8(int VAR_6, int *VAR_7)
{
 __u8 VAR_8 = VAR_5[VAR_6].aux & VAR_4;
 unsigned int VAR_9 = FUNC_4(VAR_6);
 void *VAR_10 = FUNC_5(VAR_6);
 struct sock_fprog_kern VAR_11;
 struct bpf_prog *VAR_12;

 switch (VAR_8) {
 case 129:
  VAR_11.filter = VAR_10;
  VAR_11.len = VAR_9;

  *VAR_7 = FUNC_1(&VAR_12, &VAR_11);
  if (VAR_5[VAR_6].aux & VAR_3) {
   if (*VAR_7 == VAR_5[VAR_6].expected_errcode) {
    FUNC_7("PASS\n");

    *VAR_7 = 0;
    return ((void*)0);
   } else {
    FUNC_7("UNEXPECTED_PASS\n");



    *VAR_7 = -VAR_1;
    return ((void*)0);
   }
  }
  if (*VAR_7) {
   FUNC_7("FAIL to prog_create err=%d len=%d\n",
    *VAR_7, VAR_11.len);
   return ((void*)0);
  }
  break;

 case 128:
  VAR_12 = FUNC_0(FUNC_3(VAR_9), 0);
  if (VAR_12 == ((void*)0)) {
   FUNC_7("UNEXPECTED_FAIL no memory left\n");
   *VAR_7 = -VAR_2;
   return ((void*)0);
  }

  VAR_12->len = VAR_9;

  VAR_12->type = VAR_0;
  FUNC_6(VAR_12->insnsi, VAR_10, VAR_12->len * sizeof(struct bpf_insn));
  VAR_12->aux->stack_depth = VAR_5[VAR_6].stack_depth;




  VAR_12 = FUNC_2(VAR_12, VAR_7);
  if (*VAR_7) {
   FUNC_7("FAIL to select_runtime err=%d\n", *VAR_7);
   return ((void*)0);
  }
  break;
 }

 *VAR_7 = 0;
 return VAR_12;
}
