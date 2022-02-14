
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 size_t FUNC_1 (char*,size_t,char*,char*,char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_0, char VAR_1[], char *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2("TEMP");
 if (!VAR_4)
  VAR_4 = FUNC_2("TMP");
 if (!VAR_4)
  VAR_4 = "/var/tmp";
 if (!FUNC_0(VAR_0, VAR_4))
  VAR_4 = "/tmp";

 if (VAR_2[0] == '/' || VAR_2[0] == '\\')
  ++VAR_2;

 VAR_5 = VAR_2;
 while (*VAR_5) {
  if (*VAR_5 == '/' || *VAR_5 == '\\' || *VAR_5 == ':')
   *VAR_5 = '%';
  ++VAR_5;
 }

 if (FUNC_1(VAR_1, VAR_3, "%s/%s.accel", VAR_4, VAR_2) >= VAR_3)
  return 0;
 return 1;
}
