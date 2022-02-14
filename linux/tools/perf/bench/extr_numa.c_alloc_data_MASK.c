
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
typedef long u64 ;
typedef int ssize_t ;
typedef int cpu_set_t ;
struct TYPE_2__ {int print_once; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (void*,int,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int,int,int,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 long FUNC_10 () ;

__attribute__((used)) static u8 *FUNC_11(ssize_t VAR_8, int VAR_9,
        int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 cpu_set_t VAR_14;
 ssize_t VAR_15;
 u8 *VAR_16;
 int VAR_17;

 if (!VAR_8)
  return ((void*)0);


 if (VAR_11) {
  int VAR_18 = FUNC_8(0);

  VAR_14 = FUNC_3(VAR_18);
  FUNC_2(VAR_18);
 }

 VAR_15 = VAR_8 + VAR_0;

 VAR_16 = (void *)FUNC_7(0, VAR_15, VAR_5|VAR_6, VAR_3|VAR_9, -1, 0);
 FUNC_0(VAR_16 == (void *)-1);

 if (VAR_9 == VAR_4) {
  if (VAR_12 > 0) {
   VAR_17 = FUNC_5(VAR_16, VAR_15, VAR_1);
   if (VAR_17 && !VAR_7->print_once) {
    VAR_7->print_once = 1;
    FUNC_9("WARNING: Could not enable THP - do: 'echo madvise > /sys/kernel/mm/transparent_hugepage/enabled'\n");
   }
  }
  if (VAR_12 < 0) {
   VAR_17 = FUNC_5(VAR_16, VAR_15, VAR_2);
   if (VAR_17 && !VAR_7->print_once) {
    VAR_7->print_once = 1;
    FUNC_9("WARNING: Could not disable THP: run a CONFIG_TRANSPARENT_HUGEPAGE kernel?\n");
   }
  }
 }

 if (VAR_10) {
  FUNC_4(VAR_16, VAR_15);
 } else {

  if (VAR_13) {
   u64 *VAR_19 = (void *)VAR_16;
   long VAR_20 = FUNC_10();
   long VAR_21;

   for (VAR_21 = 0; VAR_21 < VAR_15/8; VAR_21++)
    VAR_19[VAR_21] = VAR_21 + VAR_20;
  }
 }


 VAR_16 = (void *)(((unsigned long)VAR_16 + VAR_0-1) & ~(VAR_0-1));


 if (VAR_11) {
  FUNC_1(VAR_14);
  FUNC_6();
 }

 return VAR_16;
}
