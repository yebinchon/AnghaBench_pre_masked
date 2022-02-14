
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
typedef int type ;
typedef int data ;


 int FUNC_0 (size_t,int*) ;

__attribute__((used)) static inline u16 FUNC_1(u8 *VAR_0, u16 VAR_1, u8 VAR_2, u16 VAR_3)
{
 VAR_0[VAR_1++] = sizeof(VAR_2) + sizeof(VAR_3);
 VAR_0[VAR_1++] = VAR_2;
 FUNC_0(VAR_3, &VAR_0[VAR_1]);
 VAR_1 += sizeof(VAR_3);

 return VAR_1;
}
