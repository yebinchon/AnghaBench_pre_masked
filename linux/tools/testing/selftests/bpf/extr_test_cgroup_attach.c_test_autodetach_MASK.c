
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int*,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(void)
{
 __u32 VAR_3 = 4, VAR_4;
 int VAR_5[2] = {0};
 __u32 VAR_6[2] = {0};
 int VAR_7 = 0, VAR_8, VAR_9 = -1;
 void *VAR_10 = ((void*)0);
 int VAR_11;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  VAR_5[VAR_8] = FUNC_13(1, 1 << VAR_8);
  if (!VAR_5[VAR_8])
   goto err;
 }

 if (FUNC_14())
  goto err;


 VAR_7 = FUNC_7("/cg_autodetach");
 if (VAR_7 < 0)
  goto err;

 if (FUNC_9("/cg_autodetach"))
  goto err;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  if (FUNC_2(VAR_5[VAR_8], VAR_7, VAR_0,
        VAR_1)) {
   FUNC_10("Attaching prog[%d] to cg:egress", VAR_8);
   goto err;
  }
 }


 FUNC_1(FUNC_4(VAR_7, VAR_0, 0, &VAR_4,
         VAR_6, &VAR_3) == 0);
 FUNC_1(FUNC_16(VAR_2) == 0);


 VAR_10 = FUNC_11(4 * (1 << 20));
 if (!VAR_10)
  goto err;


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  FUNC_6(VAR_5[VAR_8]);
  VAR_5[VAR_8] = 0;
 }

 FUNC_6(VAR_7);
 VAR_7 = 0;


 FUNC_5();




 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
  for (VAR_11 = 5; VAR_11 >= 0; VAR_11--) {
   int VAR_12 = FUNC_3(VAR_6[VAR_8]);

   if (VAR_12 < 0)
    break;


   FUNC_6(VAR_12);

   if (!VAR_11)
    goto err;

   FUNC_15(1);
  }
 }

 VAR_9 = 0;
err:
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
  if (VAR_5[VAR_8] > 0)
   FUNC_6(VAR_5[VAR_8]);
 if (VAR_7)
  FUNC_6(VAR_7);
 FUNC_8(VAR_10);
 FUNC_5();
 if (!VAR_9)
  FUNC_12("#autodetach:PASS\n");
 else
  FUNC_12("#autodetach:FAIL\n");
 return VAR_9;
}
