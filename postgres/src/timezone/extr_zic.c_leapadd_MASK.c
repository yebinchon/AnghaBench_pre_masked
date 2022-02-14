
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static void
FUNC_3(zic_t VAR_6, bool VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10,
    VAR_11;

 if (VAR_3 + (VAR_7 ? VAR_9 : 1) > VAR_1)
 {
  FUNC_1(FUNC_0("too many leap seconds"));
  FUNC_2(VAR_0);
 }
 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10)
  if (VAR_6 <= VAR_5[VAR_10])
   break;
 do
 {
  for (VAR_11 = VAR_3; VAR_11 > VAR_10; --VAR_11)
  {
   VAR_5[VAR_11] = VAR_5[VAR_11 - 1];
   VAR_2[VAR_11] = VAR_2[VAR_11 - 1];
   VAR_4[VAR_11] = VAR_4[VAR_11 - 1];
  }
  VAR_5[VAR_10] = VAR_6;
  VAR_2[VAR_10] = VAR_7 ? 1 : -VAR_9;
  VAR_4[VAR_10] = VAR_8;
  ++VAR_3;
 } while (VAR_7 && --VAR_9 != 0);
}
