
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned long) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,...) ;
 char* VAR_1 ;
 int FUNC_4 (char*,char const*,int ) ;

__attribute__((used)) static char *
FUNC_5(unsigned long VAR_2)
{
 const char *VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4)
  return VAR_1;
 if (VAR_2 == 0)
 {
  FUNC_3(VAR_4, VAR_0, FUNC_1("no SSL error reported"));
  return VAR_4;
 }
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0))
 {
  FUNC_4(VAR_4, VAR_3, VAR_0);
  return VAR_4;
 }
 FUNC_3(VAR_4, VAR_0, FUNC_1("SSL error code %lu"), VAR_2);
 return VAR_4;
}
