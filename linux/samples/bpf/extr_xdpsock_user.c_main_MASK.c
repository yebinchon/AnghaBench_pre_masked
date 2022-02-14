
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_umem_info {int dummy; } ;
struct rlimit {int member_1; int member_0; } ;
typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct xsk_umem_info*,int) ;
 int FUNC_4 () ;
 int VAR_16 ;
 int FUNC_5 () ;
 void* FUNC_6 (int *,int,int,int,int,int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int,char**) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,struct rlimit*) ;
 int FUNC_13 (int ,int ) ;
 int VAR_23 ;
 char* FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct xsk_umem_info*) ;
 struct xsk_umem_info* FUNC_17 (void*,int) ;
 int * VAR_24 ;

int FUNC_18(int VAR_25, char **VAR_26)
{
 struct rlimit VAR_27 = {VAR_11, VAR_11};
 struct xsk_umem_info *VAR_28;
 pthread_t VAR_29;
 void *VAR_30;
 int VAR_31;

 FUNC_7(VAR_25, VAR_26);

 if (FUNC_12(VAR_10, &VAR_27)) {
  FUNC_2(VAR_23, "ERROR: setrlimit(RLIMIT_MEMLOCK) \"%s\"\n",
   FUNC_14(VAR_15));
  FUNC_0(VAR_2);
 }


 VAR_30 = FUNC_6(((void*)0), VAR_7 * VAR_20,
      VAR_8 | VAR_9,
      VAR_6 | VAR_4 | VAR_19, -1, 0);
 if (VAR_30 == VAR_5) {
  FUNC_8("ERROR: mmap failed\n");
  FUNC_0(VAR_2);
 }

 VAR_28 = FUNC_17(VAR_30, VAR_7 * VAR_20);
 VAR_24[VAR_17++] = FUNC_16(VAR_28);

 if (VAR_18 == VAR_1) {
  int VAR_32;

  for (VAR_32 = 0; VAR_32 < VAR_7; VAR_32++)
   (void)FUNC_3(VAR_28, VAR_32 * VAR_20);
 }

 FUNC_13(VAR_13, VAR_16);
 FUNC_13(VAR_14, VAR_16);
 FUNC_13(VAR_12, VAR_16);

 FUNC_11(VAR_3, "");

 VAR_31 = FUNC_9(&VAR_29, ((void*)0), VAR_21, ((void*)0));
 if (VAR_31)
  FUNC_1(VAR_31);

 VAR_22 = FUNC_4();

 if (VAR_18 == VAR_0)
  FUNC_10();
 else if (VAR_18 == VAR_1)
  FUNC_15();
 else
  FUNC_5();

 return 0;
}
