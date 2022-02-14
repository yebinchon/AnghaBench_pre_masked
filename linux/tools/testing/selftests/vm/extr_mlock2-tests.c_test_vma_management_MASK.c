
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_boundaries {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (unsigned long,struct vm_boundaries*) ;
 unsigned long FUNC_2 () ;
 scalar_t__ FUNC_3 (void*,int,int ) ;
 void* FUNC_4 (int *,int,int,int,int,int ) ;
 scalar_t__ FUNC_5 (void*,unsigned long) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(bool VAR_9)
{
 int VAR_10 = 1;
 void *VAR_11;
 unsigned long VAR_12 = FUNC_2();
 struct vm_boundaries VAR_13;
 struct vm_boundaries VAR_14;
 struct vm_boundaries VAR_15;

 VAR_11 = FUNC_4(((void*)0), 3 * VAR_12, VAR_6 | VAR_7,
     VAR_2 | VAR_4, -1, 0);
 if (VAR_11 == VAR_3) {
  FUNC_7("mmap()");
  return VAR_10;
 }

 if (VAR_9 && FUNC_3(VAR_11, 3 * VAR_12, VAR_5)) {
  if (VAR_8 == VAR_0) {
   FUNC_8("Cannot call new mlock family, skipping test\n");
   FUNC_0(VAR_1);
  }
  FUNC_7("mlock(ONFAULT)\n");
  goto out;
 }

 if (FUNC_1((unsigned long)VAR_11, &VAR_13) ||
     FUNC_1((unsigned long)VAR_11 + VAR_12, &VAR_14) ||
     FUNC_1((unsigned long)VAR_11 + VAR_12 * 2, &VAR_15)) {
  FUNC_8("couldn't find mapping in /proc/self/maps\n");
  goto out;
 }






 if (VAR_13 != VAR_14 || VAR_14 != VAR_15) {
  FUNC_8("VMAs are not merged to start, aborting test\n");
  VAR_10 = 0;
  goto out;
 }

 if (FUNC_5(VAR_11 + VAR_12, VAR_12)) {
  FUNC_7("munlock()");
  goto out;
 }

 if (FUNC_1((unsigned long)VAR_11, &VAR_13) ||
     FUNC_1((unsigned long)VAR_11 + VAR_12, &VAR_14) ||
     FUNC_1((unsigned long)VAR_11 + VAR_12 * 2, &VAR_15)) {
  FUNC_8("couldn't find mapping in /proc/self/maps\n");
  goto out;
 }


 if (VAR_13 == VAR_14 || VAR_14 == VAR_15) {
  FUNC_8("failed to split VMA for munlock\n");
  goto out;
 }


 if (FUNC_5(VAR_11, VAR_12 * 3)) {
  FUNC_7("munlock()");
  goto out;
 }

 if (FUNC_1((unsigned long)VAR_11, &VAR_13) ||
     FUNC_1((unsigned long)VAR_11 + VAR_12, &VAR_14) ||
     FUNC_1((unsigned long)VAR_11 + VAR_12 * 2, &VAR_15)) {
  FUNC_8("couldn't find mapping in /proc/self/maps\n");
  goto out;
 }


 if (VAR_13 != VAR_14 || VAR_14 != VAR_15) {
  FUNC_8("failed to merge VMAs after munlock\n");
  goto out;
 }

 VAR_10 = 0;
out:
 FUNC_6(VAR_11, 3 * VAR_12);
 return VAR_10;
}
