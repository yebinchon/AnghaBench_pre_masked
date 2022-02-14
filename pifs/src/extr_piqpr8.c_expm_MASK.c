
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static double FUNC_0 (double VAR_1, double VAR_2)




{
  int VAR_3, VAR_4;
  double VAR_5, VAR_6, VAR_7;

  static double VAR_8[25];
  static int VAR_9 = 0;



  if (VAR_9 == 0) {
    VAR_9 = 1;
    VAR_8[0] = 1.;

    for (VAR_3 = 1; VAR_3 < 25; VAR_3++) VAR_8[VAR_3] = 2. * VAR_8[VAR_3-1];
  }

  if (VAR_2 == 1.) return 0.;



  for (VAR_3 = 0; VAR_3 < 25; VAR_3++) if (VAR_8[VAR_3] > VAR_1) break;

  VAR_6 = VAR_8[VAR_3-1];
  VAR_5 = VAR_1;
  VAR_7 = 1.;



  for (VAR_4 = 1; VAR_4 <= VAR_3; VAR_4++){
    if (VAR_5 >= VAR_6){
      VAR_7 = 16. * VAR_7;
      VAR_7 = VAR_7 - (int) (VAR_7 / VAR_2) * VAR_2;
      VAR_5 = VAR_5 - VAR_6;
    }
    VAR_6 = 0.5 * VAR_6;
    if (VAR_6 >= 1.){
      VAR_7 = VAR_7 * VAR_7;
      VAR_7 = VAR_7 - (int) (VAR_7 / VAR_2) * VAR_2;
    }
  }

  return VAR_7;
}
