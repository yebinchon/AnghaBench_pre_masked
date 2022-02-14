
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double Selectivity ;
typedef int FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (int *,int,int ,int) ;

__attribute__((used)) static Selectivity
FUNC_4(Datum VAR_0,
       bool VAR_1, Datum *VAR_2, int VAR_3,
       bool VAR_4, Datum *VAR_5, int VAR_6,
       double VAR_7,
       FmgrInfo *VAR_8, int VAR_9)
{
 if (VAR_1)
 {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  {
   if (FUNC_0(FUNC_1(VAR_8,
             VAR_0,
             VAR_2[VAR_10])))
    return 1.0;
  }
 }

 if (VAR_4 && VAR_7 > 0)
 {
  Selectivity VAR_11;


  VAR_11 = FUNC_3(VAR_5, VAR_6,
           VAR_0, -VAR_9);

  if (VAR_11 > 0)
   return FUNC_2(1.0, VAR_7 * VAR_11);
 }

 return 0.0;
}
