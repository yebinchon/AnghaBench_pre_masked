
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,struct rlimit*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 struct rlimit VAR_8;
 int VAR_9 = 0;

 FUNC_3(VAR_1, &VAR_8);
 if (VAR_8.rlim_cur < VAR_4) {
  FUNC_6("alloc_size[%d] < %u rlimit,lead to mlock failure\n",
    VAR_4, (unsigned int)VAR_8.rlim_cur);
  return -1;
 }

 FUNC_8(FUNC_9(((void*)0)));
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {






  int VAR_10 = !!(FUNC_7() % 2);
  int VAR_11 = FUNC_7() % VAR_4;
  int VAR_12 = FUNC_7() % (VAR_4 - VAR_11);

  if (VAR_10)
   VAR_6 = FUNC_4(VAR_3 + VAR_12, VAR_11);
  else
   VAR_6 = FUNC_5(VAR_3 + VAR_12, VAR_11,
           VAR_0);

  if (VAR_6) {
   FUNC_6("%s() failure at |%p(%d)| mlock:|%p(%d)|\n",
     VAR_10 ? "mlock" : "mlock2",
     VAR_3, VAR_4,
     VAR_3 + VAR_12, VAR_11);
   return VAR_6;
  }
 }




 VAR_7 = FUNC_1();
 VAR_9 = FUNC_2((unsigned long)VAR_3);
 if (VAR_9 == 0) {
  FUNC_6("cannot get proc MMUPageSize\n");
  return -1;
 }

 if (VAR_7 > FUNC_0(VAR_4, VAR_9) + VAR_9) {
  FUNC_6("test_mlock_within_limit() left VmLck:%d on %d chunk\n",
    VAR_7, VAR_4);
  return -1;
 }

 return 0;
}
