
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 double FUNC_1 (double) ;
 int FUNC_2 (char*,double,...) ;

__attribute__((used)) static void
FUNC_3(double VAR_0)
{
 double VAR_1;
 double VAR_2;
 double VAR_3;
 double VAR_4;

 if (VAR_0 < 1000.0)
 {

  FUNC_2(FUNC_0("Time: %.3f ms\n"), VAR_0);
  return;
 }







 VAR_1 = VAR_0 / 1000.0;
 VAR_2 = FUNC_1(VAR_1 / 60.0);
 VAR_1 -= 60.0 * VAR_2;
 if (VAR_2 < 60.0)
 {
  FUNC_2(FUNC_0("Time: %.3f ms (%02d:%06.3f)\n"),
      VAR_0, (int) VAR_2, VAR_1);
  return;
 }

 VAR_3 = FUNC_1(VAR_2 / 60.0);
 VAR_2 -= 60.0 * VAR_3;
 if (VAR_3 < 24.0)
 {
  FUNC_2(FUNC_0("Time: %.3f ms (%02d:%02d:%06.3f)\n"),
      VAR_0, (int) VAR_3, (int) VAR_2, VAR_1);
  return;
 }

 VAR_4 = FUNC_1(VAR_3 / 24.0);
 VAR_3 -= 24.0 * VAR_4;
 FUNC_2(FUNC_0("Time: %.3f ms (%.0f d %02d:%02d:%06.3f)\n"),
     VAR_0, VAR_4, (int) VAR_3, (int) VAR_2, VAR_1);
}
