
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int) ;
 int VAR_3 ;

void FUNC_9(void)
{
 int VAR_4;
 int VAR_5;
 char VAR_6[] = "123";

 if (FUNC_5() != 0) {
  FUNC_4(VAR_3, "WARNING: not run as root, can not do hugetlb test\n");
  return;
 }

 FUNC_2(FUNC_0(VAR_0), "/proc/sys/vm/nr_hugepages");





 VAR_5 = FUNC_6("/sys/kernel/mm/hugepages/hugepages-2048kB/nr_hugepages", VAR_1);
 if (VAR_5 < 0) {
  FUNC_7("opening sysfs 2M hugetlb config");
  return;
 }


 VAR_4 = FUNC_8(VAR_5, VAR_6, sizeof(VAR_6)-1);
 FUNC_3(VAR_5);
 if (VAR_4 <= 0) {
  FUNC_7("reading sysfs 2M hugetlb config");
  return;
 }

 if (FUNC_1(VAR_6) != VAR_0) {
  FUNC_4(VAR_3, "could not confirm 2M pages, got: '%s' expected %ld\n",
   VAR_6, VAR_0);
  return;
 }

 VAR_2 = 1;
}
