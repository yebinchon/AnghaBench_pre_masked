
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int dummy; } ;
typedef int info ;
typedef int __u32 ;


 int FUNC_0 (int,struct bpf_prog_info*,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct bpf_prog_info*,int) ;
 int FUNC_3 (struct bpf_prog_info*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2)
{
 struct bpf_prog_info VAR_3 = {};
 __u32 VAR_4 = sizeof(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_1("can't get prog info: %s", FUNC_4(VAR_0));
  return -1;
 }

 if (VAR_1)
  FUNC_2(&VAR_3, VAR_2);
 else
  FUNC_3(&VAR_3, VAR_2);

 return 0;
}
