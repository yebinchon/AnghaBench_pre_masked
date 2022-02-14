
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned long,unsigned long*,unsigned long*,char**,char*) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, unsigned long VAR_1,
      int VAR_2, int VAR_3)
{
 char *VAR_4;
 const char *VAR_5;
 unsigned long VAR_6, VAR_7;
 int VAR_8;

 VAR_1 += VAR_2;
 VAR_5 = FUNC_0(VAR_1, &VAR_7, &VAR_6, &VAR_4, VAR_0);
 if (!VAR_5)
  return FUNC_1(VAR_0, "0x%lx", VAR_1 - VAR_2);

 if (VAR_5 != VAR_0)
  FUNC_2(VAR_0, VAR_5);
 VAR_8 = FUNC_3(VAR_0);
 VAR_6 -= VAR_2;

 if (VAR_3)
  VAR_8 += FUNC_1(VAR_0 + VAR_8, "+%#lx/%#lx", VAR_6, VAR_7);

 if (VAR_4)
  VAR_8 += FUNC_1(VAR_0 + VAR_8, " [%s]", VAR_4);

 return VAR_8;
}
