
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int *,int,int,int,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_9 = 1;
 struct rlimit VAR_10;
 void *VAR_11;

 if (FUNC_0(VAR_8, &VAR_10)) {
  FUNC_5("getrlimit");
  return VAR_9;
 }

 if (FUNC_1(VAR_5 | VAR_4)) {
  FUNC_5("mlockall");
  return VAR_9;
 }

 VAR_11 = FUNC_2(((void*)0), 2 * VAR_10.rlim_max, VAR_6 | VAR_7,
     VAR_3 | VAR_0 | VAR_2, -1, 0);
 if (VAR_11 != VAR_1)
  FUNC_6("mmap should have failed, but didn't\n");
 else {
  VAR_9 = 0;
  FUNC_4(VAR_11, 2 * VAR_10.rlim_max);
 }

 FUNC_3();
 return VAR_9;
}
