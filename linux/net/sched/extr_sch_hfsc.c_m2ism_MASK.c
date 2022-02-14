
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static u64
FUNC_1(u32 VAR_3)
{
 u64 VAR_4;

 if (VAR_3 == 0)
  VAR_4 = VAR_0;
 else {
  VAR_4 = ((u64)VAR_2 << VAR_1);
  VAR_4 += VAR_3 - 1;
  FUNC_0(VAR_4, VAR_3);
 }
 return VAR_4;
}
