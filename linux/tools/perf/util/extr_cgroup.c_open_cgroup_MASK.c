
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(const char *VAR_3)
{
 char VAR_4[VAR_1 + 1];
 char VAR_5[VAR_1 + 1];
 int VAR_6;


 if (FUNC_0(VAR_5, VAR_1 + 1))
  return -1;

 FUNC_3(VAR_4, VAR_1, "%s/%s", VAR_5, VAR_3);

 VAR_6 = FUNC_2(VAR_4, VAR_0);
 if (VAR_6 == -1)
  FUNC_1(VAR_2, "no access to cgroup %s\n", VAR_4);

 return VAR_6;
}
