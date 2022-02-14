
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 size_t* VAR_0 ;

__attribute__((used)) static u16 FUNC_1(u8 *VAR_1, u8 VAR_2)
{
 if (VAR_1[0] != VAR_2 || VAR_1[1] != VAR_0[VAR_1[0]])
  return 0;

 return FUNC_0(*((__be16 *)(VAR_1 + 2)));
}
