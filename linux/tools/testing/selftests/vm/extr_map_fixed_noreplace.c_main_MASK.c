
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 char* VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 (void*,unsigned long,int ,unsigned long,int,int ) ;
 scalar_t__ FUNC_2 (void*,unsigned long) ;
 int FUNC_3 (char*,...) ;
 unsigned long FUNC_4 (int ) ;

int FUNC_5(void)
{
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12;

 VAR_11 = FUNC_4(VAR_6);

 VAR_8 = VAR_4 | VAR_1 | VAR_3;


 VAR_7 = 0;
 VAR_9 = VAR_0;
 VAR_10 = 5 * VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);

 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 == VAR_2) {
  FUNC_0();
  FUNC_3("Error: couldn't map the space we need for the test\n");
  return 1;
 }

 VAR_7 = 0;
 if (FUNC_2((void *)VAR_9, 5 * VAR_11) != 0) {
  FUNC_0();
  FUNC_3("Error: munmap failed!?\n");
  return 1;
 }
 FUNC_3("unmap() successful\n");

 VAR_7 = 0;
 VAR_9 = VAR_0 + VAR_11;
 VAR_10 = 3 * VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 == VAR_2) {
  FUNC_0();
  FUNC_3("Error: first mmap() failed unexpectedly\n");
  return 1;
 }
 VAR_7 = 0;
 VAR_9 = VAR_0;
 VAR_10 = 5 * VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 != VAR_2) {
  FUNC_0();
  FUNC_3("Error:1: mmap() succeeded when it shouldn't have\n");
  return 1;
 }
 VAR_7 = 0;
 VAR_9 = VAR_0 + (2 * VAR_11);
 VAR_10 = VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 != VAR_2) {
  FUNC_0();
  FUNC_3("Error:2: mmap() succeeded when it shouldn't have\n");
  return 1;
 }
 VAR_7 = 0;
 VAR_9 = VAR_0 + (3 * VAR_11);
 VAR_10 = 2 * VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 != VAR_2) {
  FUNC_0();
  FUNC_3("Error:3: mmap() succeeded when it shouldn't have\n");
  return 1;
 }
 VAR_7 = 0;
 VAR_9 = VAR_0;
 VAR_10 = 2 * VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 != VAR_2) {
  FUNC_0();
  FUNC_3("Error:4: mmap() succeeded when it shouldn't have\n");
  return 1;
 }
 VAR_7 = 0;
 VAR_9 = VAR_0;
 VAR_10 = VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 == VAR_2) {
  FUNC_0();
  FUNC_3("Error:5: mmap() failed when it shouldn't have\n");
  return 1;
 }
 VAR_7 = 0;
 VAR_9 = VAR_0 + (4 * VAR_11);
 VAR_10 = VAR_11;
 VAR_12 = FUNC_1((void *)VAR_9, VAR_10, VAR_5, VAR_8, -1, 0);
 FUNC_3("mmap() @ 0x%lx-0x%lx p=%p result=%m\n", VAR_9, VAR_9 + VAR_10, VAR_12);

 if (VAR_12 == VAR_2) {
  FUNC_0();
  FUNC_3("Error:6: mmap() failed when it shouldn't have\n");
  return 1;
 }

 VAR_9 = VAR_0;
 VAR_10 = 5 * VAR_11;
 if (FUNC_2((void *)VAR_9, VAR_10) != 0) {
  FUNC_0();
  FUNC_3("Error: munmap failed!?\n");
  return 1;
 }
 FUNC_3("unmap() successful\n");

 FUNC_3("OK\n");
 return 0;
}
