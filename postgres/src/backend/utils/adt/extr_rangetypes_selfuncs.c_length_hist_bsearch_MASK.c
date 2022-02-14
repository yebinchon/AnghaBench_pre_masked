
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 double FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(Datum *VAR_0, int VAR_1,
     double VAR_2, bool VAR_3)
{
 int VAR_4 = -1,
    VAR_5 = VAR_1 - 1,
    VAR_6;

 while (VAR_4 < VAR_5)
 {
  double VAR_7;

  VAR_6 = (VAR_4 + VAR_5 + 1) / 2;

  VAR_7 = FUNC_0(VAR_0[VAR_6]);
  if (VAR_7 < VAR_2 || (VAR_3 && VAR_7 <= VAR_2))
   VAR_4 = VAR_6;
  else
   VAR_5 = VAR_6 - 1;
 }
 return VAR_4;
}
