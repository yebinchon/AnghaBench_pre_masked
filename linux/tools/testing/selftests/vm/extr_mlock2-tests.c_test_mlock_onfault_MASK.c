
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 char* FUNC_3 (int *,int,int,int,int,int ) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10()
{
 char *VAR_9;
 int VAR_10 = 1;
 unsigned long VAR_11 = FUNC_1();

 VAR_9 = FUNC_3(((void*)0), 2 * VAR_11, VAR_6 | VAR_7,
     VAR_2 | VAR_4, -1, 0);
 if (VAR_9 == VAR_3) {
  FUNC_7("test_mlock_locked mmap");
  goto out;
 }

 if (FUNC_2(VAR_9, 2 * VAR_11, VAR_5)) {
  if (VAR_8 == VAR_0) {
   FUNC_8("Cannot call new mlock family, skipping test\n");
   FUNC_0(VAR_1);
  }
  FUNC_7("mlock2(MLOCK_ONFAULT)");
  goto unmap;
 }

 if (FUNC_6(VAR_9))
  goto unmap;


 if (FUNC_4(VAR_9, 2 * VAR_11)) {
  if (VAR_8 == VAR_0) {
   FUNC_8("Cannot call new mlock family, skipping test\n");
   FUNC_0(VAR_1);
  }
  FUNC_7("munlock()");
  goto unmap;
 }

 VAR_10 = FUNC_9(VAR_9);
unmap:
 FUNC_5(VAR_9, 2 * VAR_11);
out:
 return VAR_10;
}
