
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int *,int,int,int,int,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10()
{
 char *VAR_8;
 int VAR_9 = 1;
 unsigned long VAR_10 = FUNC_0();

 VAR_8 = FUNC_3(((void*)0), 2 * VAR_10, VAR_6 | VAR_7,
     VAR_0 | VAR_2, -1, 0);

 if (VAR_8 == VAR_1) {
  FUNC_7("test_munlockall mmap");
  goto out;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_7("mlockall(MCL_CURRENT)");
  goto out;
 }

 if (FUNC_1(VAR_8))
  goto unmap;

 if (FUNC_4()) {
  FUNC_7("munlockall()");
  goto unmap;
 }

 if (FUNC_8(VAR_8))
  goto unmap;

 FUNC_5(VAR_8, 2 * VAR_10);

 VAR_8 = FUNC_3(((void*)0), 2 * VAR_10, VAR_6 | VAR_7,
     VAR_0 | VAR_2, -1, 0);

 if (VAR_8 == VAR_1) {
  FUNC_7("test_munlockall second mmap");
  goto out;
 }

 if (FUNC_2(VAR_3 | VAR_5)) {
  FUNC_7("mlockall(MCL_CURRENT | MCL_ONFAULT)");
  goto unmap;
 }

 if (FUNC_6(VAR_8))
  goto unmap;

 if (FUNC_4()) {
  FUNC_7("munlockall()");
  goto unmap;
 }

 if (FUNC_9(VAR_8))
  goto unmap;

 if (FUNC_2(VAR_3 | VAR_4)) {
  FUNC_7("mlockall(MCL_CURRENT | MCL_FUTURE)");
  goto out;
 }

 if (FUNC_1(VAR_8))
  goto unmap;

 if (FUNC_4()) {
  FUNC_7("munlockall()");
  goto unmap;
 }

 VAR_9 = FUNC_8(VAR_8);

unmap:
 FUNC_5(VAR_8, 2 * VAR_10);
out:
 FUNC_4();
 return VAR_9;
}
