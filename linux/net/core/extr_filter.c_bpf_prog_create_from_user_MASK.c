
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int len; int filter; } ;
struct bpf_prog {int * orig_prog; int len; int insns; } ;
typedef int bpf_aux_classic_check_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (struct sock_fprog*) ;
 struct bpf_prog* FUNC_5 (struct bpf_prog*,int ) ;
 struct bpf_prog* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bpf_prog*,struct sock_fprog*) ;
 scalar_t__ FUNC_9 (int ,int ,unsigned int) ;

int FUNC_10(struct bpf_prog **VAR_3, struct sock_fprog *VAR_4,
         bpf_aux_classic_check_t VAR_5, bool VAR_6)
{
 unsigned int VAR_7 = FUNC_4(VAR_4);
 struct bpf_prog *VAR_8;
 int VAR_9;


 if (!FUNC_3(VAR_4->filter, VAR_4->len))
  return -VAR_1;

 VAR_8 = FUNC_6(FUNC_7(VAR_4->len), 0);
 if (!VAR_8)
  return -VAR_2;

 if (FUNC_9(VAR_8->insns, VAR_4->filter, VAR_7)) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }

 VAR_8->len = VAR_4->len;
 VAR_8->orig_prog = ((void*)0);

 if (VAR_6) {
  VAR_9 = FUNC_8(VAR_8, VAR_4);
  if (VAR_9) {
   FUNC_2(VAR_8);
   return -VAR_2;
  }
 }




 VAR_8 = FUNC_5(VAR_8, VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 *VAR_3 = VAR_8;
 return 0;
}
