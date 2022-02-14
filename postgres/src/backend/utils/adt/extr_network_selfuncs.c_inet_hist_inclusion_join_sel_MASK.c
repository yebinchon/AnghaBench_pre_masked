
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double Selectivity ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int ,int) ;

__attribute__((used)) static Selectivity
FUNC_1(Datum *VAR_1, int VAR_2,
        Datum *VAR_3, int VAR_4,
        int VAR_5)
{
 double VAR_6 = 0.0;
 int VAR_7,
    VAR_8,
    VAR_9;

 if (VAR_4 <= 2)
  return 0.0;


 VAR_8 = (VAR_4 - 3) / VAR_0 + 1;

 VAR_9 = 0;
 for (VAR_7 = 1; VAR_7 < VAR_4 - 1; VAR_7 += VAR_8)
 {
  VAR_6 += FUNC_0(VAR_1, VAR_2,
          VAR_3[VAR_7], VAR_5);
  VAR_9++;
 }

 return VAR_6 / VAR_9;
}
