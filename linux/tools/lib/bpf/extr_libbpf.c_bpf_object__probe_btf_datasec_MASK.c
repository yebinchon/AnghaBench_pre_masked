
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int types ;
struct TYPE_2__ {int btf_datasec; } ;
struct bpf_object {TYPE_1__ caps; } ;
typedef int strs ;
typedef int __u32 ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct bpf_object *VAR_4)
{
 const char VAR_5[] = "\0x\0.data";

 __u32 VAR_6[] = {

  FUNC_2(0, VAR_0, 0, 32, 4),

  FUNC_1(1, FUNC_0(VAR_2, 0, 0), 1),
  VAR_3,

  FUNC_1(3, FUNC_0(VAR_1, 0, 1), 4),
  FUNC_3(2, 0, 4),
 };
 int VAR_7;

 VAR_7 = FUNC_5((char *)VAR_6, sizeof(VAR_6),
          VAR_5, sizeof(VAR_5));
 if (VAR_7 >= 0) {
  VAR_4->caps.btf_datasec = 1;
  FUNC_4(VAR_7);
  return 1;
 }

 return 0;
}
