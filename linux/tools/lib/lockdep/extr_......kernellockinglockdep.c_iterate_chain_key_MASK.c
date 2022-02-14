
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static inline u64 FUNC_1(u64 VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0, VAR_3 = VAR_0 >> 32;

 FUNC_0(VAR_1, VAR_2, VAR_3);

 return VAR_2 | (u64)VAR_3 << 32;
}
