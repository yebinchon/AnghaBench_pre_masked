
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int int64 ;
typedef int int32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64
FUNC_0(int64 VAR_2, uint64 VAR_3)
{
 int64 VAR_4;
 int VAR_5;

 VAR_4 = VAR_0 ^ VAR_3;
 for (VAR_5 = 0; VAR_5 < 8; ++VAR_5)
 {
  int32 VAR_6 = VAR_2 & 0xff;

  VAR_2 = VAR_2 >> 8;
  VAR_4 = VAR_4 ^ VAR_6;
  VAR_4 = VAR_4 * VAR_1;
 }

 return VAR_4;
}
