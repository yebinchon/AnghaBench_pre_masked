
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u64 ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int,int*,scalar_t__*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void FUNC_2(int VAR_0)
{
 __u32 VAR_1;
 __u64 VAR_2;

 for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
  if (FUNC_0(VAR_0, &VAR_1, &VAR_2)) {
   FUNC_1("failed to read key %u\n", VAR_1);
   continue;
  }
  if (VAR_2)
   FUNC_1("0x%02x : %llu\n", VAR_1, VAR_2);
 }
}
