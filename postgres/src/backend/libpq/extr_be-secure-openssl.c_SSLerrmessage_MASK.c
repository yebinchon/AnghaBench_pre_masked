
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;


 char* FUNC_0 (unsigned long) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,unsigned long) ;

__attribute__((used)) static const char *
FUNC_3(unsigned long VAR_0)
{
 const char *VAR_1;
 static char VAR_2[36];

 if (VAR_0 == 0)
  return FUNC_1("no SSL error reported");
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != ((void*)0))
  return VAR_1;
 FUNC_2(VAR_2, sizeof(VAR_2), FUNC_1("SSL error code %lu"), VAR_0);
 return VAR_2;
}
