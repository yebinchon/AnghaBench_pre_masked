
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
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 char* FUNC_4 (int *,int,int,int,int,int ) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10()
{
 char *VAR_8;
 int VAR_9 = 1;
 unsigned long VAR_10 = FUNC_1();

 VAR_8 = FUNC_4(((void*)0), 2 * VAR_10, VAR_5 | VAR_6,
     VAR_2 | VAR_4, -1, 0);
 if (VAR_8 == VAR_3) {
  FUNC_7("test_mlock_locked mmap");
  goto out;
 }

 if (FUNC_3(VAR_8, 2 * VAR_10, 0)) {
  if (VAR_7 == VAR_0) {
   FUNC_8("Cannot call new mlock family, skipping test\n");
   FUNC_0(VAR_1);
  }
  FUNC_7("mlock2(0)");
  goto unmap;
 }

 if (FUNC_2(VAR_8))
  goto unmap;


 if (FUNC_5(VAR_8, 2 * VAR_10)) {
  FUNC_7("munlock()");
  goto unmap;
 }

 VAR_9 = FUNC_9(VAR_8);

unmap:
 FUNC_6(VAR_8, 2 * VAR_10);
out:
 return VAR_9;
}
