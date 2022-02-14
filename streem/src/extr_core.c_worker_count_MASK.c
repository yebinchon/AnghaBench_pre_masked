
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3()
{
  char *VAR_0 = FUNC_2("STRM_WORKER_MAX");
  int VAR_1;

  if (VAR_0) {
    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 > 0) return VAR_1;
  }
  return FUNC_1();
}
