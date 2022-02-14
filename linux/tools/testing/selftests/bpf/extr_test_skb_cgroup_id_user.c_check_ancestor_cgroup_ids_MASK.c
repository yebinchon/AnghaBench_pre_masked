
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,...) ;

int FUNC_5(int VAR_2)
{
 __u64 VAR_3[VAR_1], VAR_4[VAR_1];
 __u32 VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4[0] = 0x100000001;
 VAR_4[1] = FUNC_2("");
 VAR_4[2] = FUNC_2(VAR_0);
 VAR_4[3] = 0;

 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7 < 0)
  goto err;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (FUNC_0(VAR_7, &VAR_5, &VAR_3[VAR_5])) {
   FUNC_4("Failed to lookup key %d", VAR_5);
   goto err;
  }
  if (VAR_3[VAR_5] != VAR_4[VAR_5]) {
   FUNC_4("%llx (actual) != %llx (expected), level: %u\n",
    VAR_3[VAR_5], VAR_4[VAR_5], VAR_5);
   goto err;
  }
 }

 goto out;
err:
 VAR_6 = -1;
out:
 if (VAR_7 >= 0)
  FUNC_1(VAR_7);
 return VAR_6;
}
