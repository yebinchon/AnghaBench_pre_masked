
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
typedef int s8 ;
typedef int s64 ;
typedef int s32 ;
typedef int s16 ;
typedef int pid_t ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_0(VAR_0, "s64") == 0)
  VAR_1 = sizeof(s64);
 else if (FUNC_0(VAR_0, "u64") == 0)
  VAR_1 = sizeof(u64);
 else if (FUNC_0(VAR_0, "s32") == 0)
  VAR_1 = sizeof(s32);
 else if (FUNC_0(VAR_0, "u32") == 0)
  VAR_1 = sizeof(u32);
 else if (FUNC_0(VAR_0, "s16") == 0)
  VAR_1 = sizeof(s16);
 else if (FUNC_0(VAR_0, "u16") == 0)
  VAR_1 = sizeof(u16);
 else if (FUNC_0(VAR_0, "s8") == 0)
  VAR_1 = sizeof(s8);
 else if (FUNC_0(VAR_0, "u8") == 0)
  VAR_1 = sizeof(u8);
 else if (FUNC_0(VAR_0, "char") == 0)
  VAR_1 = sizeof(char);
 else if (FUNC_0(VAR_0, "unsigned char") == 0)
  VAR_1 = sizeof(unsigned char);
 else if (FUNC_0(VAR_0, "int") == 0)
  VAR_1 = sizeof(int);
 else if (FUNC_0(VAR_0, "unsigned int") == 0)
  VAR_1 = sizeof(unsigned int);
 else if (FUNC_0(VAR_0, "long") == 0)
  VAR_1 = sizeof(long);
 else if (FUNC_0(VAR_0, "unsigned long") == 0)
  VAR_1 = sizeof(unsigned long);
 else if (FUNC_0(VAR_0, "pid_t") == 0)
  VAR_1 = sizeof(pid_t);
 else if (FUNC_0(VAR_0, "gfp_t") == 0)
  VAR_1 = sizeof(gfp_t);
 else if (FUNC_1(VAR_0))
  VAR_1 = FUNC_2(VAR_0);

 return VAR_1;
}
