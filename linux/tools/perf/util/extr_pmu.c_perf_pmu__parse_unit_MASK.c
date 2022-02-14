
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_alias {char* unit; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct perf_pmu_alias *VAR_3, char *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_1];
 ssize_t VAR_7;
 int VAR_8;

 FUNC_3(VAR_6, VAR_1, "%s/%s.unit", VAR_4, VAR_5);

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8 == -1)
  return -1;

 VAR_7 = FUNC_2(VAR_8, VAR_3->unit, VAR_2);
 if (VAR_7 < 0)
  goto error;

 FUNC_0(VAR_8);

 if (VAR_3->unit[VAR_7 - 1] == '\n')
  VAR_3->unit[VAR_7 - 1] = '\0';
 else
  VAR_3->unit[VAR_7] = '\0';

 return 0;
error:
 FUNC_0(VAR_8);
 VAR_3->unit[0] = '\0';
 return -1;
}
