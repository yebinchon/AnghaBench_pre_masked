
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 VAR_2 = FUNC_3(&VAR_1, FUNC_0(), -1, -1, FUNC_1());

 if (VAR_2 < 0 && VAR_3 == VAR_0) {
  FUNC_2("No CONFIG_PERF_EVENTS=y kernel support configured?\n");
  return -1;
 }

 return VAR_2;
}
