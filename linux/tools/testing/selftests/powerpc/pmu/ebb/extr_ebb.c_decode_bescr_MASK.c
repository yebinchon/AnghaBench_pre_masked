
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *FUNC_1(u64 VAR_0)
{
 static char VAR_1[16];

 VAR_1[0] = '\0';

 if (VAR_0 & (1ull << 63))
  FUNC_0(VAR_1, "GE ");
 if (VAR_0 & (1ull << 32))
  FUNC_0(VAR_1, "PMAE ");
 if (VAR_0 & 1)
  FUNC_0(VAR_1, "PMAO ");

 return VAR_1;
}
