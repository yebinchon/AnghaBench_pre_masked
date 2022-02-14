
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char* file; } ;
struct bpf_object {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bpf_object*,int,int,int) ;
 int FUNC_5 (struct bpf_object*,int,int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 struct bpf_prog_load_attr VAR_2 = {
  .file = "./sockopt_multi.o",
 };
 int VAR_3 = -1, VAR_4 = -1;
 struct bpf_object *VAR_5 = ((void*)0);
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8;

 VAR_3 = FUNC_7("/parent");
 if (FUNC_0(VAR_3 < 0))
  goto out;

 VAR_4 = FUNC_7("/parent/child");
 if (FUNC_0(VAR_4 < 0))
  goto out;

 VAR_7 = FUNC_2(&VAR_2, &VAR_5, &VAR_8);
 if (FUNC_0(VAR_7))
  goto out;

 VAR_6 = FUNC_6(VAR_0, VAR_1, 0);
 if (FUNC_0(VAR_6 < 0))
  goto out;

 FUNC_0(FUNC_4(VAR_5, VAR_3, VAR_4, VAR_6));
 FUNC_0(FUNC_5(VAR_5, VAR_3, VAR_4, VAR_6));

out:
 FUNC_3(VAR_6);
 FUNC_1(VAR_5);
 FUNC_3(VAR_4);
 FUNC_3(VAR_3);
}
