
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int types ;
typedef int strs ;
typedef int __u32 ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int) ;
 int FUNC_4 (char*,int,char const*,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 const char VAR_2[] = "\0bpf_spin_lock\0val\0cnt\0l";
 __u32 VAR_3[] = {

  FUNC_3(0, VAR_0, 0, 32, 4),

  FUNC_2(1, FUNC_0(VAR_1, 0, 1), 4),
  FUNC_1(15, 1, 0),

  FUNC_2(15, FUNC_0(VAR_1, 0, 2), 8),
  FUNC_1(19, 1, 0),
  FUNC_1(23, 2, 32),
 };

 return FUNC_4((char *)VAR_3, sizeof(VAR_3),
         VAR_2, sizeof(VAR_2));
}
