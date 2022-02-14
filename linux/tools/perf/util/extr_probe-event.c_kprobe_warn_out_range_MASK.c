
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int FUNC_0 (char*,unsigned long*,int,int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, unsigned long VAR_1)
{
 u64 VAR_2 = 0;
 int VAR_3;


 VAR_3 = FUNC_0("_etext", &VAR_2,
      0, 0);

 if (VAR_3 == 0 && VAR_2 < VAR_1)
  FUNC_2("%s is out of .text, skip it.\n", VAR_0);
 else if (FUNC_1(VAR_1))
  FUNC_2("%s is blacklisted function, skip it.\n", VAR_0);
 else
  return 0;

 return 1;
}
