
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline bool FUNC_1(u8 *VAR_0, u16 VAR_1, u8 (*VAR_2)[16])
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!FUNC_0(VAR_0, VAR_2[VAR_3], 16))
   return 1;
 }

 return 0;
}
