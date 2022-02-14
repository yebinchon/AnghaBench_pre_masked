
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int modes; int tick; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct timex*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(double VAR_3)
{
 struct timex VAR_4;
 int VAR_5;

 VAR_5 = 1e6 * VAR_3 / VAR_2;

 VAR_4.modes = VAR_1 | VAR_0;
 VAR_4.tick = 1000000 / VAR_2 + VAR_5;
 VAR_4.freq = (1e6 * VAR_3 - VAR_2 * VAR_5) * (1 << 16);

 if (FUNC_0(&VAR_4) < 0) {
  FUNC_2("[FAIL] adjtimex");
  FUNC_1();
 }
}
