
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32 ;
typedef int pg_int64 ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static pg_int64
FUNC_1(pg_int64 VAR_0)
{
 union
 {
  pg_int64 i64;
  uint32 i32[2];
 } VAR_1;
 uint32 VAR_2;


 VAR_2 = (uint32) (VAR_0 >> 32);
 VAR_1.i32[0] = FUNC_0(VAR_2);


 VAR_2 = (uint32) VAR_0;
 VAR_1.i32[1] = FUNC_0(VAR_2);

 return VAR_1.i64;
}
