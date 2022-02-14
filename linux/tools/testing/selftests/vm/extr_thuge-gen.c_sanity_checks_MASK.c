
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 () ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_2 (char*,unsigned long,...) ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ,char*) ;

void FUNC_5(void)
{
 int VAR_3;
 unsigned long VAR_4 = FUNC_1();

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2[VAR_3] > VAR_4)
   VAR_4 = VAR_2[VAR_3];

  if (FUNC_3(VAR_2[VAR_3]) < VAR_0) {
   FUNC_2("Not enough huge pages for page size %lu MB, need %u\n",
    VAR_2[VAR_3] >> 20,
    VAR_0);
   FUNC_0(0);
  }
 }

 if (FUNC_4(0, "/proc/sys/kernel/shmmax") < VAR_0 * VAR_4) {
  FUNC_2("Please do echo %lu > /proc/sys/kernel/shmmax", VAR_4 * VAR_0);
  FUNC_0(0);
 }


 if (VAR_4 != 1U<<30) {
  FUNC_2("No GB pages available on x86-64\n"
         "Please boot with hugepagesz=1G hugepages=%d\n", VAR_0);
  FUNC_0(0);
 }

}
