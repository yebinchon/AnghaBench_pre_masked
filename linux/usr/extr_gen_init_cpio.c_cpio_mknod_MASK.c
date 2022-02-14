
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,char*,int ,unsigned int,long,long,int,long,int ,int,int,unsigned int,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, unsigned int VAR_5,
         uid_t VAR_6, gid_t VAR_7, char VAR_8,
         unsigned int VAR_9, unsigned int VAR_10)
{
 char VAR_11[256];

 if (VAR_8 == 'b')
  VAR_5 |= VAR_0;
 else
  VAR_5 |= VAR_1;

 if (VAR_4[0] == '/')
  VAR_4++;
 FUNC_2(VAR_11,"%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  VAR_3++,
  VAR_5,
  (long) VAR_6,
  (long) VAR_7,
  1,
  (long) VAR_2,
  0,
  3,
  1,
  VAR_9,
  VAR_10,
  (unsigned)FUNC_3(VAR_4) + 1,
  0);
 FUNC_0(VAR_11);
 FUNC_1(VAR_4);
 return 0;
}
