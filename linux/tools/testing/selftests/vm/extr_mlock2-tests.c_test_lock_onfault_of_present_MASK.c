
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (char*,int,int ) ;
 char* FUNC_6 (int *,int,int,int,int,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10()
{
 char *VAR_11;
 int VAR_12 = 1;
 unsigned long VAR_13 = FUNC_3();
 uint64_t VAR_14, VAR_15;

 VAR_11 = FUNC_6(((void*)0), 2 * VAR_13, VAR_7 | VAR_8,
     VAR_2 | VAR_4, -1, 0);
 if (VAR_11 == VAR_3) {
  FUNC_8("test_mlock_locked mmap");
  goto out;
 }

 *VAR_11 = 'a';

 if (FUNC_5(VAR_11, 2 * VAR_13, VAR_5)) {
  if (VAR_10 == VAR_0) {
   FUNC_9("Cannot call new mlock family, skipping test\n");
   FUNC_0(VAR_1);
  }
  FUNC_8("mlock2(MLOCK_ONFAULT)");
  goto unmap;
 }

 VAR_14 = FUNC_2((unsigned long)VAR_11);
 VAR_15 = FUNC_2((unsigned long)VAR_11 + VAR_13);
 VAR_14 = FUNC_1(VAR_14 & VAR_6);
 VAR_15 = FUNC_1(VAR_15 & VAR_6);


 if ((VAR_14 & VAR_9) == 0) {
  FUNC_9("Failed to make present page unevictable\n");
  goto unmap;
 }

 if (!FUNC_4((unsigned long)VAR_11) ||
     !FUNC_4((unsigned long)VAR_11 + VAR_13)) {
  FUNC_9("VMA with present pages is not marked lock on fault\n");
  goto unmap;
 }
 VAR_12 = 0;
unmap:
 FUNC_7(VAR_11, 2 * VAR_13);
out:
 return VAR_12;
}
