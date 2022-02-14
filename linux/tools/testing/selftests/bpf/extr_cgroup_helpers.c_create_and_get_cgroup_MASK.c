
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(const char *VAR_4)
{
 char VAR_5[VAR_2 + 1];
 int VAR_6;

 FUNC_0(VAR_5, VAR_4);
 if (FUNC_2(VAR_5, 0777) && VAR_3 != VAR_0) {
  FUNC_1("mkdiring cgroup %s .. %s", VAR_4, VAR_5);
  return -1;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (VAR_6 < 0) {
  FUNC_1("Opening Cgroup");
  return -1;
 }

 return VAR_6;
}
