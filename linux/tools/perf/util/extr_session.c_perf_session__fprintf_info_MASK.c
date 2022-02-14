
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct perf_session*,int *,int) ;

void FUNC_2(struct perf_session *VAR_0, FILE *VAR_1,
    bool VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1, "# ========\n");
 FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_1, "# ========\n#\n");
}
