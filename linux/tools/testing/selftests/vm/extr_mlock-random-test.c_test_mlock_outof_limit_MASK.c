
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0, VAR_8 = 0;
 struct rlimit VAR_9;

 FUNC_1(VAR_1, &VAR_9);
 if (VAR_9.rlim_cur >= VAR_4) {
  FUNC_4("alloc_size[%d] >%u rlimit, violates test condition\n",
    VAR_4, (unsigned int)VAR_9.rlim_cur);
  return -1;
 }

 VAR_8 = FUNC_0();
 FUNC_6(FUNC_7(((void*)0)));
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  int VAR_10 = !!(FUNC_5() % 2);
  int VAR_11 = (FUNC_5() % (VAR_4 - VAR_9.rlim_cur))
   + VAR_9.rlim_cur;
  int VAR_12 = FUNC_5() % (VAR_4 - VAR_11);

  if (VAR_10)
   VAR_6 = FUNC_2(VAR_3 + VAR_12, VAR_11);
  else
   VAR_6 = FUNC_3(VAR_3 + VAR_12, VAR_11,
     VAR_0);
  if (VAR_6 == 0) {
   FUNC_4("%s() succeeds? on %p(%d) mlock%p(%d)\n",
     VAR_10 ? "mlock" : "mlock2",
     VAR_3, VAR_4,
     VAR_3 + VAR_12, VAR_11);
   return -1;
  }
 }

 VAR_7 = FUNC_0();
 if (VAR_7 != VAR_8) {
  FUNC_4("tests leads to new mlocked page: old[%d], new[%d]\n",
    VAR_8,
    VAR_7);
  return -1;
 }

 return 0;
}
