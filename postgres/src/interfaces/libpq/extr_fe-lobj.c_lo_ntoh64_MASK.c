
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int pg_int64 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static pg_int64
FUNC_1(pg_int64 VAR_0)
{
 union
 {
  pg_int64 i64;
  uint32 i32[2];
 } VAR_1;
 pg_int64 VAR_2;

 VAR_1.i64 = VAR_0;

 VAR_2 = (uint32) FUNC_0(VAR_1.i32[0]);
 VAR_2 <<= 32;
 VAR_2 |= (uint32) FUNC_0(VAR_1.i32[1]);

 return VAR_2;
}
