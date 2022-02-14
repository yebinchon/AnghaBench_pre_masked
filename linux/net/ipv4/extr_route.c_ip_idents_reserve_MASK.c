
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int atomic_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int*,int,int) ;
 int * VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;

u32 FUNC_5(u32 VAR_4, int VAR_5)
{
 u32 *VAR_6 = VAR_2 + VAR_4 % VAR_0;
 atomic_t *VAR_7 = VAR_1 + VAR_4 % VAR_0;
 u32 VAR_8 = FUNC_0(*VAR_6);
 u32 VAR_9 = (u32)VAR_3;
 u32 VAR_10, VAR_11 = 0;

 if (VAR_8 != VAR_9 && FUNC_3(VAR_6, VAR_8, VAR_9) == VAR_8)
  VAR_11 = FUNC_4(VAR_9 - VAR_8);


 do {
  VAR_8 = (u32)FUNC_2(VAR_7);
  VAR_10 = VAR_8 + VAR_11 + VAR_5;
 } while (FUNC_1(VAR_7, VAR_8, VAR_10) != VAR_8);

 return VAR_10 - VAR_5;
}
