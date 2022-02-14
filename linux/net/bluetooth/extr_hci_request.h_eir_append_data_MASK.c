
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;
typedef int type ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(u8 *VAR_0, u16 VAR_1, u8 VAR_2,
      u8 *VAR_3, u8 VAR_4)
{
 VAR_0[VAR_1++] = sizeof(VAR_2) + VAR_4;
 VAR_0[VAR_1++] = VAR_2;
 FUNC_0(&VAR_0[VAR_1], VAR_3, VAR_4);
 VAR_1 += VAR_4;

 return VAR_1;
}
