
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*,char*,int) ;
 long FUNC_6 (char*,char*,char*) ;
 long FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,int ,void*) ;
 scalar_t__ FUNC_9 (char*,char*,char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_4 ;
 int FUNC_14 (long,scalar_t__,int) ;

__attribute__((used)) static int FUNC_15(const char *VAR_5)
{
 int VAR_6 = VAR_0;
 char *VAR_7[3] = {((void*)0)};
 char *VAR_8[4] = {((void*)0)};
 long VAR_9, VAR_10;
 long VAR_11[4];
 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_13();
 if (VAR_13 < 0)
  goto cleanup;

 VAR_7[0] = FUNC_4(VAR_5, "memcg_test_0");
 if (!VAR_7[0])
  goto cleanup;

 VAR_7[1] = FUNC_4(VAR_7[0], "memcg_test_1");
 if (!VAR_7[1])
  goto cleanup;

 VAR_7[2] = FUNC_4(VAR_7[0], "memcg_test_2");
 if (!VAR_7[2])
  goto cleanup;

 if (FUNC_2(VAR_7[0]))
  goto cleanup;

 if (FUNC_7(VAR_7[0], "memory.low"))
  goto cleanup;

 if (FUNC_9(VAR_7[0], "cgroup.subtree_control", "+memory"))
  goto cleanup;

 if (FUNC_9(VAR_7[0], "memory.max", "200M"))
  goto cleanup;

 if (FUNC_9(VAR_7[0], "memory.swap.max", "0"))
  goto cleanup;

 if (FUNC_2(VAR_7[1]))
  goto cleanup;

 if (FUNC_9(VAR_7[1], "cgroup.subtree_control", "+memory"))
  goto cleanup;

 if (FUNC_2(VAR_7[2]))
  goto cleanup;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
  VAR_8[VAR_12] = FUNC_5(VAR_7[1], "child_memcg", VAR_12);
  if (!VAR_8[VAR_12])
   goto cleanup;

  if (FUNC_2(VAR_8[VAR_12]))
   goto cleanup;

  if (VAR_12 == 2)
   continue;

  if (FUNC_8(VAR_8[VAR_12], VAR_3, (void *)(long)VAR_13))
   goto cleanup;
 }

 if (FUNC_9(VAR_7[0], "memory.low", "50M"))
  goto cleanup;
 if (FUNC_9(VAR_7[1], "memory.low", "50M"))
  goto cleanup;
 if (FUNC_9(VAR_8[0], "memory.low", "75M"))
  goto cleanup;
 if (FUNC_9(VAR_8[1], "memory.low", "25M"))
  goto cleanup;
 if (FUNC_9(VAR_8[2], "memory.low", "500M"))
  goto cleanup;
 if (FUNC_9(VAR_8[3], "memory.low", "0"))
  goto cleanup;

 if (FUNC_8(VAR_7[2], VAR_2, (void *)FUNC_1(148)))
  goto cleanup;

 if (!FUNC_14(FUNC_7(VAR_7[1], "memory.current"), FUNC_1(50), 3))
  goto cleanup;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++)
  VAR_11[VAR_12] = FUNC_7(VAR_8[VAR_12], "memory.current");

 if (!FUNC_14(VAR_11[0], FUNC_1(33), 10))
  goto cleanup;

 if (!FUNC_14(VAR_11[1], FUNC_1(17), 10))
  goto cleanup;

 if (!FUNC_14(VAR_11[2], 0, 1))
  goto cleanup;

 if (FUNC_8(VAR_7[2], VAR_2, (void *)FUNC_1(166))) {
  FUNC_11(VAR_4,
   "memory.low prevents from allocating anon memory\n");
  goto cleanup;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
  VAR_10 = FUNC_6(VAR_8[VAR_12], "memory.events", "oom ");
  VAR_9 = FUNC_6(VAR_8[VAR_12], "memory.events", "low ");

  if (VAR_10)
   goto cleanup;
  if (VAR_12 < 2 && VAR_9 <= 0)
   goto cleanup;
  if (VAR_12 >= 2 && VAR_9)
   goto cleanup;
 }

 VAR_6 = VAR_1;

cleanup:
 for (VAR_12 = FUNC_0(VAR_8) - 1; VAR_12 >= 0; VAR_12--) {
  if (!VAR_8[VAR_12])
   continue;

  FUNC_3(VAR_8[VAR_12]);
  FUNC_12(VAR_8[VAR_12]);
 }

 for (VAR_12 = FUNC_0(VAR_7) - 1; VAR_12 >= 0; VAR_12--) {
  if (!VAR_7[VAR_12])
   continue;

  FUNC_3(VAR_7[VAR_12]);
  FUNC_12(VAR_7[VAR_12]);
 }
 FUNC_10(VAR_13);
 return VAR_6;
}
