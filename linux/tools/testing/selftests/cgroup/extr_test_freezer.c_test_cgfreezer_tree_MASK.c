
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,int) ;
 char* FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,int ,int *) ;
 scalar_t__ FUNC_7 (char*,int) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3)
{
 char *VAR_4[10] = {0};
 int VAR_5 = VAR_0;
 int VAR_6;

 VAR_4[0] = FUNC_5(VAR_3, "cg_test_tree_A");
 if (!VAR_4[0])
  goto cleanup;

 VAR_4[1] = FUNC_5(VAR_4[0], "B");
 if (!VAR_4[1])
  goto cleanup;

 VAR_4[2] = FUNC_5(VAR_4[1], "C");
 if (!VAR_4[2])
  goto cleanup;

 VAR_4[3] = FUNC_5(VAR_4[1], "D");
 if (!VAR_4[3])
  goto cleanup;

 VAR_4[4] = FUNC_5(VAR_4[0], "E");
 if (!VAR_4[4])
  goto cleanup;

 VAR_4[5] = FUNC_5(VAR_4[4], "F");
 if (!VAR_4[5])
  goto cleanup;

 VAR_4[6] = FUNC_5(VAR_4[5], "G");
 if (!VAR_4[6])
  goto cleanup;

 VAR_4[7] = FUNC_5(VAR_4[6], "H");
 if (!VAR_4[7])
  goto cleanup;

 VAR_4[8] = FUNC_5(VAR_4[0], "I");
 if (!VAR_4[8])
  goto cleanup;

 VAR_4[9] = FUNC_5(VAR_4[0], "K");
 if (!VAR_4[9])
  goto cleanup;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++)
  if (FUNC_1(VAR_4[VAR_6]))
   goto cleanup;

 FUNC_6(VAR_4[2], VAR_2, ((void*)0));
 FUNC_6(VAR_4[7], VAR_2, ((void*)0));
 FUNC_6(VAR_4[9], VAR_2, ((void*)0));
 FUNC_6(VAR_4[9], VAR_2, ((void*)0));
 FUNC_6(VAR_4[9], VAR_2, ((void*)0));






 if (FUNC_7(VAR_4[2], 1) ||
     FUNC_7(VAR_4[7], 1) ||
     FUNC_7(VAR_4[9], 3))
  goto cleanup;




 if (FUNC_4(VAR_4[1], 1))
  goto cleanup;




 if (FUNC_4(VAR_4[5], 1))
  goto cleanup;




 if (FUNC_4(VAR_4[6], 1))
  goto cleanup;




 if (FUNC_0(VAR_4[0], 0))
  goto cleanup;

 if (FUNC_0(VAR_4[4], 0))
  goto cleanup;




 if (FUNC_4(VAR_4[0], 1))
  goto cleanup;

 if (FUNC_0(VAR_4[1], 1))
  goto cleanup;

 if (FUNC_0(VAR_4[4], 1))
  goto cleanup;




 if (FUNC_3(VAR_4[1], 0))
  goto cleanup;

 if (FUNC_3(VAR_4[5], 0))
  goto cleanup;

 if (FUNC_3(VAR_4[6], 0))
  goto cleanup;




 if (FUNC_0(VAR_4[2], 1))
  goto cleanup;

 if (FUNC_0(VAR_4[7], 1))
  goto cleanup;




 if (FUNC_4(VAR_4[0], 0))
  goto cleanup;

 if (FUNC_0(VAR_4[2], 0))
  goto cleanup;

 if (FUNC_0(VAR_4[9], 0))
  goto cleanup;

 VAR_5 = VAR_1;

cleanup:
 for (VAR_6 = 9; VAR_6 >= 0 && VAR_4[VAR_6]; VAR_6--) {
  FUNC_2(VAR_4[VAR_6]);
  FUNC_8(VAR_4[VAR_6]);
 }

 return VAR_5;
}
