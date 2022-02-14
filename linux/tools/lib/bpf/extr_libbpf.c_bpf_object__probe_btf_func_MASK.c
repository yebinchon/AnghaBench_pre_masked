
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int types ;
struct TYPE_2__ {int btf_func; } ;
struct bpf_object {TYPE_1__ caps; } ;
typedef int strs ;
typedef int __u32 ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct bpf_object *VAR_3)
{
 const char VAR_4[] = "\0int\0x\0a";

 __u32 VAR_5[] = {

  FUNC_3(1, VAR_0, 0, 32, 4),

  FUNC_2(0, FUNC_0(VAR_2, 0, 1), 0),
  FUNC_1(7, 1),

  FUNC_2(5, FUNC_0(VAR_1, 0, 0), 2),
 };
 int VAR_6;

 VAR_6 = FUNC_5((char *)VAR_5, sizeof(VAR_5),
          VAR_4, sizeof(VAR_4));
 if (VAR_6 >= 0) {
  VAR_3->caps.btf_func = 1;
  FUNC_4(VAR_6);
  return 1;
 }

 return 0;
}
