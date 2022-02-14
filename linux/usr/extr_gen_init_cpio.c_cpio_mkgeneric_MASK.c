
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,char*,int ,unsigned int,long,long,int,long,int ,int,int,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, unsigned int VAR_3,
         uid_t VAR_4, gid_t VAR_5)
{
 char VAR_6[256];

 if (VAR_2[0] == '/')
  VAR_2++;
 FUNC_2(VAR_6,"%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  VAR_1++,
  VAR_3,
  (long) VAR_4,
  (long) VAR_5,
  2,
  (long) VAR_0,
  0,
  3,
  1,
  0,
  0,
  (unsigned)FUNC_3(VAR_2) + 1,
  0);
 FUNC_0(VAR_6);
 FUNC_1(VAR_2);
 return 0;
}
