
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_2, u64 VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_1(VAR_3 > VAR_0 * 63))
  return 0;


 VAR_4 = VAR_3;
 if (FUNC_1(VAR_4 >= VAR_0)) {
  VAR_2 >>= VAR_4 / VAR_0;
  VAR_4 %= VAR_0;
 }

 VAR_2 = FUNC_0(VAR_2, VAR_1[VAR_4], 32);
 return VAR_2;
}
