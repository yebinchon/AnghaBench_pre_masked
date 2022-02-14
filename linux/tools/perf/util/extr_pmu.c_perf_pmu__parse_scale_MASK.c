
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct perf_pmu_alias {int scale; } ;
typedef int ssize_t ;
typedef int scale ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int *,int *) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct perf_pmu_alias *VAR_2, char *VAR_3, char *VAR_4)
{
 struct stat VAR_5;
 ssize_t VAR_6;
 char VAR_7[128];
 int VAR_8, VAR_9 = -1;
 char VAR_10[VAR_1];

 FUNC_5(VAR_10, VAR_1, "%s/%s.scale", VAR_3, VAR_4);

 VAR_8 = FUNC_2(VAR_10, VAR_0);
 if (VAR_8 == -1)
  return -1;

 if (FUNC_1(VAR_8, &VAR_5) < 0)
  goto error;

 VAR_6 = FUNC_4(VAR_8, VAR_7, sizeof(VAR_7)-1);
 if (VAR_6 < 0)
  goto error;

 if (VAR_7[VAR_6 - 1] == '\n')
  VAR_7[VAR_6 - 1] = '\0';
 else
  VAR_7[VAR_6] = '\0';

 VAR_9 = FUNC_3(VAR_7, ((void*)0), &VAR_2->scale);
error:
 FUNC_0(VAR_8);
 return VAR_9;
}
