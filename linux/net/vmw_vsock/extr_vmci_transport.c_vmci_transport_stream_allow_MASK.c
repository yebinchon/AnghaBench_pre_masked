
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u32 ;
typedef int cid ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (int) ;


__attribute__((used)) static bool FUNC_2(u32 VAR_0, u32 VAR_1)
{
 static const u32 VAR_2[] = {
  128,
 };
 int VAR_3;

 FUNC_1(sizeof(VAR_0) != sizeof(*VAR_2));

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if (VAR_0 == VAR_2[VAR_3])
   return 0;
 }

 return 1;
}
