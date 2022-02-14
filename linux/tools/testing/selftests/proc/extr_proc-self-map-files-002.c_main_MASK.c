
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (void*,int const,int ,int,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;

int FUNC_6(void)
{
 const int VAR_7 = FUNC_5(VAR_5);
 const unsigned long VAR_8 = 1UL << 32;
 unsigned long VAR_9;
 void *VAR_10;
 int VAR_11;
 unsigned long VAR_12, VAR_13;

 VAR_11 = FUNC_3("/dev/zero", VAR_3);
 if (VAR_11 == -1)
  return 1;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += VAR_7) {
  VAR_10 = FUNC_2((void *)VAR_9, VAR_7, VAR_4, VAR_2|VAR_0|VAR_1, VAR_11, 0);
  if (VAR_10 == (void *)VAR_9)
   break;
 }
 if (VAR_9 == VAR_8) {
  FUNC_1(VAR_6, "error: mmap doesn't like you\n");
  return 1;
 }

 VAR_12 = (unsigned long)VAR_10;
 VAR_13 = (unsigned long)VAR_10 + VAR_7;

 FUNC_4("/proc/self/map_files/%lx-%lx", VAR_12, VAR_13);
 FUNC_0("/proc/self/map_files/ %lx-%lx", VAR_12, VAR_13);
 FUNC_0("/proc/self/map_files/%lx -%lx", VAR_12, VAR_13);
 FUNC_0("/proc/self/map_files/%lx- %lx", VAR_12, VAR_13);
 FUNC_0("/proc/self/map_files/%lx-%lx ", VAR_12, VAR_13);
 FUNC_0("/proc/self/map_files/0%lx-%lx", VAR_12, VAR_13);
 FUNC_0("/proc/self/map_files/%lx-0%lx", VAR_12, VAR_13);
 if (sizeof(long) == 4) {
  FUNC_0("/proc/self/map_files/100000000%lx-%lx", VAR_12, VAR_13);
  FUNC_0("/proc/self/map_files/%lx-100000000%lx", VAR_12, VAR_13);
 } else if (sizeof(long) == 8) {
  FUNC_0("/proc/self/map_files/10000000000000000%lx-%lx", VAR_12, VAR_13);
  FUNC_0("/proc/self/map_files/%lx-10000000000000000%lx", VAR_12, VAR_13);
 } else
  return 1;

 return 0;
}
