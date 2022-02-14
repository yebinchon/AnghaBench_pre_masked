
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int int64 ;
typedef int int32 ;
typedef int instr_time ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int * VAR_0 ;
 int FUNC_8 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static uint64
FUNC_9(int32 VAR_2)
{
 uint64 VAR_3;
 int64 VAR_4 = 0;
 uint64 VAR_5 = 0;
 uint64 VAR_6,
    VAR_7;
 instr_time VAR_8,
    VAR_9,
    VAR_10;

 VAR_3 = VAR_2 > 0 ? VAR_2 * FUNC_4(1000000) : 0;

 FUNC_2(VAR_8);
 VAR_7 = FUNC_1(VAR_8);

 while (VAR_4 < VAR_3)
 {
  int32 VAR_11,
     VAR_12 = 0;

  VAR_6 = VAR_7;
  FUNC_2(VAR_10);
  VAR_7 = FUNC_1(VAR_10);
  VAR_11 = VAR_7 - VAR_6;


  if (VAR_11 < 0)
  {
   FUNC_7(VAR_1, "%s", FUNC_5("Detected clock going backwards in time.\n"));
   FUNC_7(VAR_1, FUNC_5("Time warp: %d ms\n"), VAR_11);
   FUNC_6(1);
  }


  while (VAR_11)
  {
   VAR_11 >>= 1;
   VAR_12++;
  }


  VAR_0[VAR_12]++;

  VAR_5++;
  FUNC_3(VAR_10, VAR_8);
  VAR_4 = FUNC_1(VAR_10);
 }

 FUNC_2(VAR_9);

 FUNC_3(VAR_9, VAR_8);

 FUNC_8(FUNC_5("Per loop time including overhead: %0.2f ns\n"),
     FUNC_0(VAR_9) * 1e9 / VAR_5);

 return VAR_5;
}
