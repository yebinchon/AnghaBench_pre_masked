
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int*,unsigned long long*) ;
 scalar_t__ FUNC_2 (int ,int*,unsigned long long*,int ) ;
 scalar_t__ FUNC_3 (int,int,int ,int ) ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int ,int ,int*,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int VAR_7 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(void)
{
 __u32 VAR_8[4], VAR_9 = 0, VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 int VAR_18, VAR_19[6] = {}, VAR_20 = 0;
 unsigned long long VAR_21;
 int VAR_22 = 0;

 for (VAR_22 = 0; VAR_22 < 6; VAR_22++) {
  VAR_19[VAR_22] = FUNC_12(1, 1 << VAR_22);
  if (!VAR_19[VAR_22])
   goto err;
 }
 VAR_18 = FUNC_12(0, 1);
 if (!VAR_18)
  goto err;

 if (FUNC_13())
  goto err;

 VAR_12 = FUNC_8("/cg1");
 if (VAR_12 < 0)
  goto err;
 VAR_13 = FUNC_8("/cg1/cg2");
 if (VAR_13 < 0)
  goto err;
 VAR_14 = FUNC_8("/cg1/cg2/cg3");
 if (VAR_14 < 0)
  goto err;
 VAR_15 = FUNC_8("/cg1/cg2/cg3/cg4");
 if (VAR_15 < 0)
  goto err;
 VAR_16 = FUNC_8("/cg1/cg2/cg3/cg4/cg5");
 if (VAR_16 < 0)
  goto err;

 if (FUNC_9("/cg1/cg2/cg3/cg4/cg5"))
  goto err;

 if (FUNC_3(VAR_19[0], VAR_12, VAR_0,
       VAR_1)) {
  FUNC_10("Attaching prog to cg1");
  goto err;
 }
 if (!FUNC_3(VAR_19[0], VAR_12, VAR_0,
        VAR_1)) {
  FUNC_10("Unexpected success attaching the same prog to cg1");
  goto err;
 }
 if (FUNC_3(VAR_19[1], VAR_12, VAR_0,
       VAR_1)) {
  FUNC_10("Attaching prog2 to cg1");
  goto err;
 }
 if (FUNC_3(VAR_19[2], VAR_13, VAR_0,
       VAR_2)) {
  FUNC_10("Attaching prog to cg2");
  goto err;
 }
 if (FUNC_3(VAR_19[3], VAR_14, VAR_0,
       VAR_1)) {
  FUNC_10("Attaching prog to cg3");
  goto err;
 }
 if (FUNC_3(VAR_19[4], VAR_15, VAR_0,
       VAR_2)) {
  FUNC_10("Attaching prog to cg4");
  goto err;
 }
 if (FUNC_3(VAR_19[5], VAR_16, VAR_0, 0)) {
  FUNC_10("Attaching prog to cg5");
  goto err;
 }
 FUNC_0(FUNC_14(VAR_5) == 0);
 FUNC_0(FUNC_1(VAR_7, &VAR_17, &VAR_21) == 0);
 FUNC_0(VAR_21 == 1 + 2 + 8 + 32);


 FUNC_0(FUNC_5(VAR_16, VAR_0, VAR_3,
         ((void*)0), ((void*)0), &VAR_9) == 0);
 FUNC_0(VAR_9 == 4);

 FUNC_0(FUNC_5(VAR_16, VAR_0, VAR_3,
         &VAR_10, VAR_8, &VAR_9) == 0);
 FUNC_0(VAR_9 == 4);
 FUNC_0(VAR_10 == 0);
 VAR_11 = VAR_8[0];

 VAR_8[0] = 0;
 VAR_9 = 2;
 FUNC_0(FUNC_5(VAR_16, VAR_0, VAR_3,
         &VAR_10, VAR_8, &VAR_9) == -1 &&
        VAR_6 == VAR_4);
 FUNC_0(VAR_9 == 4);

 FUNC_0(VAR_8[0] == VAR_11);

 VAR_8[0] = 0;
 FUNC_0(FUNC_5(VAR_16, VAR_0, 0,
         ((void*)0), VAR_8, &VAR_9) == 0);
 FUNC_0(VAR_9 == 1);
 FUNC_0(VAR_8[0] == VAR_11);


 if (FUNC_4(-1, VAR_16, VAR_0)) {
  FUNC_10("Detaching prog from cg5");
  goto err;
 }
 VAR_21 = 0;
 FUNC_0(FUNC_2(VAR_7, &VAR_17, &VAR_21, 0) == 0);
 FUNC_0(FUNC_14(VAR_5) == 0);
 FUNC_0(FUNC_1(VAR_7, &VAR_17, &VAR_21) == 0);
 FUNC_0(VAR_21 == 1 + 2 + 8 + 16);


 VAR_6 = 0;
 if (!FUNC_4(0, VAR_14, VAR_0)) {
  FUNC_10("Unexpected success on detach from cg3");
  goto err;
 }
 if (FUNC_4(VAR_19[3], VAR_14, VAR_0)) {
  FUNC_10("Detaching from cg3");
  goto err;
 }
 VAR_21 = 0;
 FUNC_0(FUNC_2(VAR_7, &VAR_17, &VAR_21, 0) == 0);
 FUNC_0(FUNC_14(VAR_5) == 0);
 FUNC_0(FUNC_1(VAR_7, &VAR_17, &VAR_21) == 0);
 FUNC_0(VAR_21 == 1 + 2 + 16);


 if (FUNC_4(-1, VAR_15, VAR_0)) {
  FUNC_10("Detaching prog from cg4");
  goto err;
 }
 VAR_21 = 0;
 FUNC_0(FUNC_2(VAR_7, &VAR_17, &VAR_21, 0) == 0);
 FUNC_0(FUNC_14(VAR_5) == 0);
 FUNC_0(FUNC_1(VAR_7, &VAR_17, &VAR_21) == 0);
 FUNC_0(VAR_21 == 1 + 2 + 4);

 VAR_9 = 4;
 FUNC_0(FUNC_5(VAR_16, VAR_0, VAR_3,
         &VAR_10, VAR_8, &VAR_9) == 0);
 FUNC_0(VAR_9 == 3);
 FUNC_0(VAR_10 == 0);
 FUNC_0(FUNC_5(VAR_16, VAR_0, 0,
         ((void*)0), VAR_8, &VAR_9) == 0);
 FUNC_0(VAR_9 == 0);
 goto out;
err:
 VAR_20 = 1;

out:
 for (VAR_22 = 0; VAR_22 < 6; VAR_22++)
  if (VAR_19[VAR_22] > 0)
   FUNC_7(VAR_19[VAR_22]);
 FUNC_7(VAR_12);
 FUNC_7(VAR_13);
 FUNC_7(VAR_14);
 FUNC_7(VAR_15);
 FUNC_7(VAR_16);
 FUNC_6();
 if (!VAR_20)
  FUNC_11("#multi:PASS\n");
 else
  FUNC_11("#multi:FAIL\n");
 return VAR_20;
}
