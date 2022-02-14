
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 void* FUNC_1 (int *,unsigned int const,int ,int,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;
 unsigned int FUNC_4 (int ) ;

int FUNC_5(void)
{
 const unsigned int VAR_6 = FUNC_4(VAR_5);
 void *VAR_7;
 int VAR_8;
 unsigned long VAR_9, VAR_10;

 VAR_8 = FUNC_2("/dev/zero", VAR_3);
 if (VAR_8 == -1)
  return 1;

 VAR_7 = FUNC_1(((void*)0), VAR_6, VAR_4, VAR_2|VAR_1, VAR_8, 0);
 if (VAR_7 == VAR_0)
  return 1;

 VAR_9 = (unsigned long)VAR_7;
 VAR_10 = (unsigned long)VAR_7 + VAR_6;

 FUNC_3("/proc/self/map_files/%lx-%lx", VAR_9, VAR_10);
 FUNC_0("/proc/self/map_files/ %lx-%lx", VAR_9, VAR_10);
 FUNC_0("/proc/self/map_files/%lx -%lx", VAR_9, VAR_10);
 FUNC_0("/proc/self/map_files/%lx- %lx", VAR_9, VAR_10);
 FUNC_0("/proc/self/map_files/%lx-%lx ", VAR_9, VAR_10);
 FUNC_0("/proc/self/map_files/0%lx-%lx", VAR_9, VAR_10);
 FUNC_0("/proc/self/map_files/%lx-0%lx", VAR_9, VAR_10);
 if (sizeof(long) == 4) {
  FUNC_0("/proc/self/map_files/100000000%lx-%lx", VAR_9, VAR_10);
  FUNC_0("/proc/self/map_files/%lx-100000000%lx", VAR_9, VAR_10);
 } else if (sizeof(long) == 8) {
  FUNC_0("/proc/self/map_files/10000000000000000%lx-%lx", VAR_9, VAR_10);
  FUNC_0("/proc/self/map_files/%lx-10000000000000000%lx", VAR_9, VAR_10);
 } else
  return 1;

 return 0;
}
