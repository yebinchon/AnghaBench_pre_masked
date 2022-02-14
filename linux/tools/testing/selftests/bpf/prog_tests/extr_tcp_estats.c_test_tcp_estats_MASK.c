
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*,int,int ) ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (char const*,int ,struct bpf_object**,int*) ;
 int VAR_1 ;

void FUNC_3(void)
{
 const char *VAR_2 = "./test_tcp_estats.o";
 int VAR_3, VAR_4;
 struct bpf_object *VAR_5;
 __u32 VAR_6 = 0;

 VAR_3 = FUNC_2(VAR_2, VAR_0, &VAR_5, &VAR_4);
 FUNC_0(VAR_3, "", "err %d errno %d\n", VAR_3, VAR_1);
 if (VAR_3)
  return;

 FUNC_1(VAR_5);
}
