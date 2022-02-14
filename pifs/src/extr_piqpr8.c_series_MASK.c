
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (int,double) ;

__attribute__((used)) static double FUNC_2 (int VAR_1, int VAR_2)




{
  int VAR_3;
  double VAR_4, VAR_5, VAR_6, VAR_7;


  VAR_6 = 0.;



  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++){
    VAR_4 = 8 * VAR_3 + VAR_1;
    VAR_5 = VAR_2 - VAR_3;
    VAR_7 = FUNC_0 (VAR_5, VAR_4);
    VAR_6 = VAR_6 + VAR_7 / VAR_4;
    VAR_6 = VAR_6 - (int) VAR_6;
  }



  for (VAR_3 = VAR_2; VAR_3 <= VAR_2 + 100; VAR_3++){
    VAR_4 = 8 * VAR_3 + VAR_1;
    VAR_7 = FUNC_1 (16., (double) (VAR_2 - VAR_3)) / VAR_4;
    if (VAR_7 < 1e-17) break;
    VAR_6 = VAR_6 + VAR_7;
    VAR_6 = VAR_6 - (int) VAR_6;
  }
  return VAR_6;
}
