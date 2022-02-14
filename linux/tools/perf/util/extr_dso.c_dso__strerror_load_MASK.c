
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int load_errno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t,char*,char const*) ;
 char* FUNC_2 (int,char*,size_t) ;

int FUNC_3(struct dso *VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = VAR_2->load_errno;



 static const char *VAR_7[] = {
 "Internal tools/perf/ library error",
 "Invalid ELF file",
 "Can not read build id",
 "Mismatching build id",
 "Decompression failure",
 };

 FUNC_0(VAR_4 == 0);

 if (VAR_6 >= 0) {
  const char *VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_4);

  if (VAR_8 != VAR_3)
   FUNC_1(VAR_3, VAR_4, "%s", VAR_8);

  return 0;
 }

 if (VAR_6 < VAR_1 || VAR_6 >= VAR_0)
  return -1;

 VAR_5 = VAR_6 - VAR_1;
 FUNC_1(VAR_3, VAR_4, "%s", VAR_7[VAR_5]);
 return 0;
}
