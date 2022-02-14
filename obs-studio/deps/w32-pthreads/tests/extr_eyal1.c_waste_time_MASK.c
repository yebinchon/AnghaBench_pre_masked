
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 () ;

__attribute__((used)) static double
FUNC_1 (int VAR_0)
{
  int VAR_1;
  double VAR_2, VAR_3, VAR_4, VAR_5;

  VAR_5 = 0.0;




  for (VAR_1 = VAR_0*100; VAR_1 > 0; --VAR_1)
    {
      VAR_2 = FUNC_0 ();
      VAR_3 = FUNC_0 ();
      VAR_4 = FUNC_0 ();
      VAR_5 += 2.0 * VAR_2 * VAR_3 / (VAR_4 != 0.0 ? (VAR_4 * VAR_4) : 1.0);
    }
  return VAR_5;
}
