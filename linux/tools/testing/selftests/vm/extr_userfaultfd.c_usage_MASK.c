
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_1, "\nUsage: ./userfaultfd <test type> <MiB> <bounces> "
  "[hugetlbfs_file]\n\n");
 FUNC_1(VAR_1, "Supported <test type>: anon, hugetlb, "
  "hugetlb_shared, shmem\n\n");
 FUNC_1(VAR_1, "Examples:\n\n");
 FUNC_1(VAR_1, "%s", VAR_0);
 FUNC_0(1);
}
