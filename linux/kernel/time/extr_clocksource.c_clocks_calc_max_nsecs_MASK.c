
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int) ;

u64 FUNC_3(u32 VAR_1, u32 VAR_2, u32 VAR_3, u64 VAR_4, u64 *VAR_5)
{
 u64 VAR_6, VAR_7;





 VAR_7 = VAR_0;
 FUNC_1(VAR_7, VAR_1+VAR_3);







 VAR_7 = FUNC_2(VAR_7, VAR_4);
 VAR_6 = FUNC_0(VAR_7, VAR_1 - VAR_3, VAR_2);


 if (VAR_5)
  *VAR_5 = VAR_7;


 VAR_6 >>= 1;

 return VAR_6;
}
