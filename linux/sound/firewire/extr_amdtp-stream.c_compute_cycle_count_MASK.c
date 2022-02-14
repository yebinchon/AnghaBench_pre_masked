
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(__be32 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1) & VAR_0;
 return (((VAR_2 >> 13) & 0x07) * 8000) + (VAR_2 & 0x1fff);
}
