
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {void* rlim_max; void* rlim_cur; } ;
struct map_list {void* map; struct map_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 size_t FUNC_1 () ;
 struct map_list* FUNC_2 (int) ;
 void* FUNC_3 (int *,size_t,int,int,int,int ) ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_9 (int ,struct rlimit*) ;

int FUNC_10(int VAR_10, char **VAR_11)
{
 struct rlimit VAR_12;
 struct map_list *VAR_13, *VAR_14;
 size_t VAR_15, VAR_16;
 void *VAR_17 = ((void*)0);
 unsigned long VAR_18 = 0;
 unsigned long VAR_19 = 0;
 unsigned long VAR_20 = 0;

 if (FUNC_6() != 0) {
  FUNC_7("Either the sysctl compact_unevictable_allowed is not\n"
         "set to 1 or couldn't read the proc file.\n"
         "Skipping the test\n");
  return VAR_0;
 }

 VAR_12.rlim_cur = VAR_9;
 VAR_12.rlim_max = VAR_9;
 if (FUNC_9(VAR_8, &VAR_12)) {
  FUNC_5("Failed to set rlimit:\n");
  return -1;
 }

 VAR_15 = FUNC_1();

 VAR_13 = ((void*)0);

 if (FUNC_8(&VAR_18, &VAR_19) != 0) {
  FUNC_7("ERROR: Cannot read meminfo\n");
  return -1;
 }

 VAR_20 = VAR_18 * 0.8 / 1024;

 while (VAR_20 > 0) {
  VAR_17 = FUNC_3(((void*)0), VAR_5, VAR_6 | VAR_7,
      VAR_1 | VAR_4 | VAR_3, -1, 0);
  if (VAR_17 == VAR_2)
   break;

  VAR_14 = FUNC_2(sizeof(struct map_list));
  if (!VAR_14) {
   FUNC_4(VAR_17, VAR_5);
   break;
  }
  VAR_14->map = VAR_17;
  VAR_14->next = VAR_13;
  VAR_13 = VAR_14;




  for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16 += VAR_15)
   *(unsigned long *)(VAR_17 + VAR_16) = (unsigned long)VAR_17 + VAR_16;

  VAR_20--;
 }

 for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->next) {
  FUNC_4(VAR_14->map, VAR_5);
  if (!VAR_14->next)
   break;
  VAR_14 = VAR_14->next;
 }

 if (FUNC_0(VAR_18, VAR_19) == 0)
  return 0;

 return -1;
}
