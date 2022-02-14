
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,char*,int ,unsigned int,long,long,int,long,unsigned int,int,int,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4,
    unsigned int VAR_5, uid_t VAR_6, gid_t VAR_7)
{
 char VAR_8[256];

 if (VAR_3[0] == '/')
  VAR_3++;
 FUNC_3(VAR_8,"%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  VAR_2++,
  VAR_0 | VAR_5,
  (long) VAR_6,
  (long) VAR_7,
  1,
  (long) VAR_1,
  (unsigned)FUNC_4(VAR_4)+1,
  3,
  1,
  0,
  0,
  (unsigned)FUNC_4(VAR_3) + 1,
  0);
 FUNC_0(VAR_8);
 FUNC_2(VAR_3);
 FUNC_1();
 FUNC_2(VAR_4);
 FUNC_1();
 return 0;
}
