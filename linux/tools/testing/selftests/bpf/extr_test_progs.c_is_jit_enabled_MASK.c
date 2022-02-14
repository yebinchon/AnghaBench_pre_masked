
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpc ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static bool FUNC_3(void)
{
 const char *VAR_1 = "/proc/sys/net/core/bpf_jit_enable";
 bool VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0, VAR_0);
 if (VAR_3 != -1) {
  char VAR_4;

  if (FUNC_2(VAR_3, &VAR_4, sizeof(VAR_4)) == 1)
   VAR_2 = (VAR_4 != '0');
  FUNC_0(VAR_3);
 }

 return VAR_2;
}
