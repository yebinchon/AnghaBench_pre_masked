
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_5;
 zic_t VAR_6 = 0;
 zic_t VAR_7 = 0;




 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
 {
  if (VAR_4[VAR_5] - VAR_7 < 28 * VAR_1)
  {
   FUNC_1(FUNC_0("Leap seconds too close together"));
   FUNC_2(VAR_0);
  }
  VAR_7 = VAR_4[VAR_5];
  VAR_4[VAR_5] = FUNC_3(VAR_4[VAR_5], VAR_6);
  VAR_6 = VAR_2[VAR_5] += VAR_6;
 }
}
